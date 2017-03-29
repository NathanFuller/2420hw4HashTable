//
// Created by Nathan Fuller on 3/28/17.
//

#include "HashTable.h"

HashTable::HashTable():HashTable(tableSize) {
}

HashTable::HashTable(long size) {
    tableSize = size;
    table.reserve(tableSize);
}

int HashTable::hashFunction(int key) {
    //This is a terrible hash; it is just for while I'm working on the insert() function
    //Never mind, leave the %tableSize. But how to do linear probing and get it back
    return key%tableSize;
}

void HashTable::insert(int key, std::string data) {
    int address = hashFunction(key);
    Veggie myVeg(key, data);
    table[address] = myVeg;
}

void HashTable::printTable() {
    for (int i = 0; i<tableSize; i++){
        std::cout<<i<<"\t"<<table[i].plu<<"\t"<<table[i].name<<"\t"<<table[i].isDeleted<<std::endl;
    }
}


