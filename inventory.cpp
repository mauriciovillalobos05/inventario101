//
// Created by maugv on 22/11/2024.
//

#include "inventory.h"

void inventory::addProduct(std::string &name, int quantity) {
    product[name]+=quantity;
}

int inventory::getProduct(std::string &name) {
    auto id=product.find(name);
    if(id!=product.end()){
        return id->second;
    }
    return -1;
}

bool inventory::removeProduct(std::string &name) {
    return product.erase(name)>0;
}