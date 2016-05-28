#include <iostream>
#include <cstdlib>

struct Data{
	std::string s1;
	int	n;
	std::string s2;
};

void * serialize( void ){
	Data *toto = new Data();
	const std::string am = "01234ABCDEFGH56789IJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for ( int i = 0 ; i < 8 ; i++){
		toto->s1 += am[std::rand() % (am.size() - 1)];
		toto->s2 += am[std::rand() % (am.size()- 1)];
	}
	toto->n = std::rand() % 1000;
	std::cout << "serialize: (" << toto->s1 << ", " << toto->n << ", " << toto->s2 << ")" << std::endl << std::endl;
	return static_cast<void *>(toto);
}

Data * deserialize( void * raw ){
	Data *toto = reinterpret_cast<Data *>(raw);
	std::cout << "deserialize:" << std::endl;
	return toto;
}

int	main(){
	srand(time(NULL));
	Data * tata = deserialize(serialize());
	std::cout << "s1: "<< tata->s1 << std::endl << "n: " << tata->n << std::endl <<  "s2: " << tata->s2 << std::endl;
	delete tata;
	return 0;
}
