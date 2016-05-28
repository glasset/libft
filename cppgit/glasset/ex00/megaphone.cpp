#include <iostream>

int		main(int argc, char **argv){
	int	words	= 1;
	int	ch		= 0;

	while (words < argc){
		ch = 0;
		while (argv[words][ch]){
			char write = argv[words][ch];
			if (write >= 'a' && write <= 'z')
				write -= 32;
			std::cout << write;
			ch++;
		}
		words++;
	}
	if (words == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
