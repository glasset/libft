#include <iostream>
#include <cstdlib>
#include <typeinfo>

class Base {
	public:
		virtual ~Base(){};
};

class A : public Base {
};

class C : public Base {
};

class B : public Base {
};

Base * generate(void){
	int r = std::rand() % 3;
	std::string str[] =  {"A", "B", "C"};
	std::cout << str[r] << " generate." << std::endl;
	switch (r){
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return new C();
}

void identify_from_pointer( Base * p ){
	std::string cl= "default";
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a != NULL)
		cl = "A";
	if (b != NULL)
		cl = "B";
	if (c != NULL)
		cl = "C";
	std::cout << "from pointer:" << std::endl << "Real type is: " << cl<< std::endl;
}

void identify_from_reference( Base & p ){
	std::string cl= "default";
	try {
		A & a = dynamic_cast<A &>(p);
		cl = "A";
	}
	catch (std::bad_cast & e) { }
	try {
		B & b = dynamic_cast<B &>(p);
		cl = "B";
	}
	catch (std::bad_cast & e) { }
	try {
		C & c = dynamic_cast<C &>(p);
		cl = "C";
	}
	catch (std::bad_cast & e) { }
	std::cout << "from reference:" << std::endl << "Real type is: " << cl << std::endl;
}

int	main(void){
	srand(time(NULL));
	Base * toto  = generate();
	Base & tata = *toto;
	identify_from_pointer(toto);
	identify_from_reference(tata);
	delete toto;
	return 0;
}
