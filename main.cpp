//
// Created by Nathan Fuller on 3/28/17.
//
#include "HashTable.h"

int main(){
    HashTable hash;

    hash.insert(4011, "banana");
    hash.insert(4131, "apple fuji");
    hash.printTable();

    std::cout<<"Calling: find(4131)\nResult: "<<hash.find(4131)<<std::endl;
    std::cout<<"Calling: find(4011)\nResult: "<<hash.find(4011)<<std::endl;

    return 0;
}