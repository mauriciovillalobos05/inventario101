#include <iostream>
#include "inventory.h"
#include "inventory.cpp"

int main() {
    inventory inventory;
    
    std::string name="audifonos";

    inventory.addProduct(name,3);
    return 0;
}
