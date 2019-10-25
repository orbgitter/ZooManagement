//
// Created by Asus on 24-Oct-2019.
//

#include "Animal.h"

int Animal::idGenerator =0;  // why needing "int Animal::" and not without it ?

Animal::Animal():Animal("bla",Zebra,-1,Male){
}

Animal::Animal(char* _name, AnimalType _animalType, int _age, Gender _gender):
name(_name), age(_age), at(_animalType), gender(_gender), id(++idGenerator){
    name = strdup(_name);
}

Animal::Animal(const Animal& source)
:age(source.age),at(source.at), gender(source.gender){
name = new char[strl(source.name)+1];
strcpy(this->name, source.name);
}

Animal::~Animal(){
    if(name !=0)
        delete name;
    --idGenerator;
}


Animal& Animal::operator=(const Animal& source){
    if(this==&source) return *this;
    if(name !=0)
        delete name;

    name = strdup(source.name);
    age = source.age;
    at = source.at;
    gender = source.gender;

    return *this;
}

char* getName(){
    return name;
}

int getAge(){
    return age;
}

int getId(){
    return id;
}

AnimalType getAnimalType(){
    return at;
}

Gender getGender(){
    return gender;
}

void setName(char* _name){
    name = strdup(_name);
}


void setAge(int _age){
    age = _age;
}

void setAnimalType(AnimalType _at){
    at = _at;
}

void setGender(Gender _gender){
    gender = _gender;
}


