//
// Created by Nathan Fuller on 3/28/17.
//

#include "HashTable.h"

HashTable::HashTable():HashTable(tableSize = 10) {
}

HashTable::HashTable(long size) {
    tableSize = size;
    table.reserve(tableSize);
    for (int i=0; i<tableSize; i++){
        table[i] = *(new Veggie);
    }

    //Here's what needs to happen: After insert puts something in, it will check if the table is more than
    //half full. (Maybe keep track of how many are assigned in a member variable of HashTable that insert()
    //will increment.)
    //If the table is more than half full, it will call rehash(), which will create a new table twice the
    //size, move everything to its new position in the table, and then delete the old one.
    //Note: I *was* thinking about making this constructor create the new table, but I don't think that's
    //what we want to do anymore. I may go back to that.
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




