//
// Created by Nathan Fuller on 3/28/17.
//

#ifndef MAKEHERE_HASHTABLE_H
#define MAKEHERE_HASHTABLE_H


#include <string>
#include <iostream>
#include <vector>

class HashTable {
public:
    HashTable();
    void insert(int key, std::string data);
    std::string find(int key); //Returns the associated data
    void printTable();


private:
   /* ~HashTable(){
        for (int i = 0; i<tableSize; i++){
            delete table[i];
        }
        delete table;
    }*/

    int hashFunction(int key);
    void rehash();
    HashTable(long size);

    struct Veggie{
        Veggie(int myPlu, std::string myName):
                plu(myPlu),
                name(myName),
                isDeleted(false){}
        Veggie():isDeleted(false){}
        int plu;
        std::string name;
        bool isDeleted;
    };

    long tableSize = 10;

    std::vector<Veggie> table;


};


#endif //MAKEHERE_HASHTABLE_H
