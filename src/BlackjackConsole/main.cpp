#include <iostream>

#include "MaClasse.h"

int main()
{
    MaClasse mc;
    std::cout << "mc.vrai() = " << ((mc.vrai()) ? "vrai" : "faux") << std::endl;
}
