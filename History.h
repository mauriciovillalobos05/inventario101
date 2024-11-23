//
// Created by maugv on 22/11/2024.
//

#ifndef INVENTARIO_HISTORY_H
#define INVENTARIO_HISTORY_H

#include <iostream>
#include <list>

class History {
private:
    std::list<std::string> records;
public:
    void addRecord(const std::string& record);
    void showHistory();
};


#endif //INVENTARIO_HISTORY_H
