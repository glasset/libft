#ifndef SPAN_HPP
# define SPAN_HPP
#include <list>
#include <iostream>
#include <exception>

class Span{
	private:
		std::list<int> arr;
		unsigned int   size;
		unsigned int   current;
		Span();
		Span &	operator=(Span const & src);
	public:
		Span(Span const & src);
		Span(unsigned int size);
		~Span();
		void addNumber(int numb);
		int shortestSpan();
		int longestSpan();
		void printL();
};

#endif
