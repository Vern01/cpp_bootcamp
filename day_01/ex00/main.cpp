#include "Pony.hpp"

int     main()
{
    Pony derp1 = Pony("Stackels");
    Pony *derp2 = new Pony("Heapels");

    delete derp2;

    std::cout << "...A few seconds later.." << std::endl;

    return 0;
}