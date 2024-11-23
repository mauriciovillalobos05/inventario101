#include <iostream>
#include "inventory.h"
#include "inventory.cpp"
#include "History.h"
int main() {
    inventory inventory;
    History history;

    std::string name="audifonos";

    inventory.addProduct(name,3);
    history.addRecord(name);
    return 0;
}
