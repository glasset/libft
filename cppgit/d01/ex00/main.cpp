#include "Pony.hpp"

Pony* ponyOnTheHeap(){

    Pony*   tata = new Pony("red", "tata");
    return tata;
}

Pony ponyOnTheStack(){

    Pony    toto = Pony("yellow", "toto");
    return toto;
}

int     main(){

    Pony* tata = ponyOnTheHeap();
    Pony  toto = ponyOnTheStack();

    tata->setLogin("onTheHeap");

    toto.setLogin("onTheStack");

    std::cout << tata->getLogin() << " login of tata" << std::endl;
    std::cout << toto.getLogin() << " login of toto" << std::endl;
    delete tata;
    return 0;
}
