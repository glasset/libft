#include "span.hpp"

void    Span::addNumber(int numb){
    try{
        if (current >= size)
            throw std::exception();
        arr.push_back(numb);
        current++;
        arr.sort();
    }
    catch (std::exception & e){
        std::cout << "storage limit max: " << size << std::endl;
    }
}

Span::Span(Span const & src){
	arr = src.arr;
	size = src.size;
	current = src.current;
}


Span &	Span::operator=(Span const & src){
	static_cast<void>(src);
	return *this;
}

Span::Span(){

}

Span::~Span(){
}

Span::Span(unsigned int size) : size(size), current(0){

}
void Span::printL(){
    std::list<int>::iterator i;
    for(i = arr.begin() ; i != arr.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}

int Span::shortestSpan(){
    std::list<int>::iterator it = arr.begin();
    if (current < 2)
        throw std::exception();
    std::advance(it, 1);
    return (*it - *arr.begin());
}

int Span::longestSpan(){ 
    std::list<int>::iterator iter = --arr.end();
    if (current < 2)
        throw std::exception();
    return (*iter - *arr.begin());
}
