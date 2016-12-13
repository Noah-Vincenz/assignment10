#include "SomeClass.h"
#include <iostream>

int SomeClass::getX() const {
    return x;
}

// TODO: add code here
void SomeClass::printItOut() const {
    std::cout << x << std::endl;
}