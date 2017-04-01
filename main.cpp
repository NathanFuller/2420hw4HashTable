//
// Created by Nathan Fuller on 3/28/17.
//
#include "HashTable.h"

int main(){
    HashTable hash;

    hash.insert(4011, "banana");
    hash.insert(4131, "apple fuji");
    hash.insert(4471, "tuna");
    hash.insert(3176, "beans black");
    hash.printTable();
    hash.insert(4693, "chile jalapeno");
    hash.printTable();
    std::cout<<"\n\n";

    hash.insert(4608, "garlic");
    hash.insert(4627, "green kale");
    hash.insert(4885, "basil");
    hash.insert(4536, "bean sprouts");
    hash.printTable();
    hash.insert(4562, "carrots");
     hash.printTable();
    std::cout<<"\n\n";

    hash.insert(4079, "cauliflower");
    hash.insert(4583, "celery");
    hash.insert(4045, "cherries red");
    hash.insert(4282, "grapefruit");
    hash.insert(4305, "limes mex key");
    hash.insert(4051, "mango");
    hash.insert(4050, "melon cantaloupe");
    hash.insert(4943, "nuts walnuts");
    hash.insert(4031, "watermelon reg");
    hash.printTable();
    hash.insert(4260, "coconut white");
    hash.printTable();


    std::cout<<"\n\n\nCalling find(4305). Result: "<<hash.find(4305)<<std::endl;
    std::cout<<"Calling find(4045). Result: "<<hash.find(4045)<<std::endl;
    std::cout<<"Calling find(4051). Result: "<<hash.find(4051)<<std::endl;


    std::cout<<"\n\nDeleting keys 4627, 4079, 4536"<<std::endl;
    hash.remove(4627);
    hash.remove(4079);
    hash.remove(4536);
    hash.printTable();

    return 0;
}