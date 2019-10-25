//
// Created by Asus on 25-Oct-2019.
//

#include "Zebra.h"

Zebra::Zebra(char *_name, AnimalType _animalType, int _age, Gender _gender, int _NOS):Animal(_name,_animalType,_age,_gender), numOfStrips(_NOS) {}

Zebra::Zebra(Zebra& Z):Animal(getName(), Z.animalType, Z.getAge(), Z.getGender()), numOfStrips(Z.numOfStrips){}   //const Zebra& Z ?