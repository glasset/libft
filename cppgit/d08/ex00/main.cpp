#include "easyfind.hpp"
#include <iterator>
#include <vector>

int     main(void){
    int a[10] = {1, 2, 4, 6, 8, 3, 9, 5, 0, 7};
    int find = 3;
    std::vector< int > v( a, a + 10);
    std::cout << "container a: ";
    std::ostream_iterator< int > output( std::cout, " " );
    std::copy( v.begin(), v.end(), output );
    std::cout << std::endl;
    if (easyfind(v, find) != -1)
        std::cout << find << " is in containter a at pos " << easyfind(v, find) << std::endl;
    else
        std::cout << find << " not found sry" << std::endl;
    find = 7;
    if (easyfind(v, find) != -1)
        std::cout << find << " is in containter a at pos " << easyfind(v, find) << std::endl;
    else
        std::cout << find << " not found sry" << std::endl;
    find = 1;
    if (easyfind(v, find) != -1)
        std::cout << find << " is in containter a at pos " << easyfind(v, find) << std::endl;
    else
        std::cout << find << " not found sry" << std::endl;
    return 0;
}
