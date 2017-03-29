//
// Created by Nathan Fuller on 3/28/17.
//

#include "HashTable.h"

HashTable::HashTable():HashTable(tableSize = 10) {
}

HashTable::HashTable(long size) {  //This constructor will need to be completely reworked to support rehashing
    tableSize = size;
    table.reserve(tableSize);
    for (int i=0; i<tableSize; i++){
        table[i] = *(new Veggie);
    }
}

int HashTable::hashFunction(int key) {
    return key%tableSize;
}

int HashTable::collision(int key) {
    return key+1; //This is linear probing
}


void HashTable::insert(int key, std::string data) {
    int address = hashFunction(key);
    while (table[address].plu!=0){
        address = collision(address);
    }
    Veggie myVeg(key, data);
    table[address] = myVeg;
}

void HashTable::printTable() {

    std::cout<<"Address\tKey\tData\tisDeleted"<<std::endl;
    for (int i = 0; i<tableSize; i++){
        std::cout<<i<<"\t"<<table[i].plu<<"\t"<<table[i].name<<"\t"<<table[i].isDeleted<<std::endl;
    }
}

std::string HashTable::find(int key) {
    int adrs = hashFunction(key);
    while (table[adrs].plu!=0){
        if (table[adrs].plu == key){
            return table[adrs].name;
        }
        adrs = collision(adrs);
    }



    return "Item not found";
}




