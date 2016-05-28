#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>
template <typename T>
int easyfind(T v, int b){
    std::vector< int >::iterator location;
    location = std::find( v.begin(), v.end(), b );
    if ( location != v.end() )
        return ( location - v.begin() );
    return -1;
}
#endif
