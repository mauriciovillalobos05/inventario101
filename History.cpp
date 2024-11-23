//
// Created by maugv on 22/11/2024.
//

#include "History.h"

void History::addRecord(const std::string &record) {
    records.push_back(record);
}

void History::showHistory() {
    std::cout<<"history: "<<std::endl;
    for(auto& record:records){
        std::cout<<record<<std::endl;
    }
}