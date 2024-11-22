//
// Created by maugv on 22/11/2024.
//

#ifndef INVENTARIO_INVENTORY_H
#define INVENTARIO_INVENTORY_H

#include <iostream>
#include <unordered_map>

class inventory {
private:
    std::unordered_map<std::string,int> product;
public:
    void addProduct(std::string& name, int quantity);
    int getProduct(std::string& name);
    bool removeProduct(std::string& name);
};


#endif //INVENTARIO_INVENTORY_H
