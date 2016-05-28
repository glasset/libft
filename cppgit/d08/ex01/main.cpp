#include "span.hpp"
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int r;
    Span sp = Span(1000);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & e){
        std::cout << "only one elem" << std::endl;
    }
    for (int i = 0; i < 995; i++){
        r = rand() % 9999 + 1;
        sp.addNumber(r);
    }
    sp.printL();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
