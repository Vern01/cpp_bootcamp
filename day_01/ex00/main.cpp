#include "Pony.hpp"

int     main()
{
    Pony ponyMaker = Pony("The Pony Maker");
    Pony *ponyHeap = ponyMaker.ponyOnTheHeap("Heapels");
    Pony ponyStack = ponyMaker.ponyOnTheStack("Stackels");

    delete ponyHeap;

    std::cout << "...A few seconds later.." << std::endl;

    return 0;
}