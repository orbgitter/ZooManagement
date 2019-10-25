//
// Created by Asus on 25-Oct-2019.
//

#ifndef ZOOMANAGEMENT_ZEBRA_H
#define ZOOMANAGEMENT_ZEBRA_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Zebra : public Animal {
private:
    int numOfStrips;

public:
    Zebra(char *_name, AnimalType _animalType, int _age, Gender _gender, int _NOS);
    Zebra();
    ~Zebra();
    Zebra(Zebra& source);
    Zebra &operator=(Zebra &);
    void makeNoise();


};


#endif //ZOOMANAGEMENT_ZEBRA_H
