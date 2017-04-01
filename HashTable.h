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
    bool remove(int key);

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
    int collision(int key, int persInc);
    int personalizedIncrememter(int key);

    //Veggie* findRecord(int key); //This one will be used by remove() and insert()

    struct Veggie{
        Veggie(int myPlu, std::string myName):
                plu(myPlu),
                name(myName),
                isDeleted(false){}
        Veggie():
                plu(0),
                name(""),
                isDeleted(false){}
        int plu;
        std::string name;
        bool isDeleted;
    };

    long tableSize = 10;
    int itemsStored = 0;

    Veggie* table;


};


#endif //MAKEHERE_HASHTABLE_H
