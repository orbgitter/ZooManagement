//
// Created by Asus on 24-Oct-2019.
//

#ifndef ZOOMANAGEMENT_ANIMAL_H
#define ZOOMANAGEMENT_ANIMAL_H

#include <string.h>
#include <iostream>

using namespace std;

typedef enum animalType{Zebra, Monkey, Camel} AnimalType;
typedef enum gender{Male, Female} Gender;

class Animal {

private:
    char* name;
    int age;
    int id;
    static int idGenerator;
    AnimalType at;
    Gender  gender;

public:
    Animal();
    Animal(char *_name, AnimalType _animalType, int _age, Gender _gender);
    Animal(const Animal& source);
    ~Animal();
    Animal& operator=(const Animal& source);
    //friend ostream& operator<<(ostream& os, const Animal& s1);
    //friend istream& operator>>(istream& os, const Animal& s1);

    virtual string makeSound() const = 0;
    char* getName();
    int getAge();
    int getId();
    AnimalType getAnimalType();
    Gender getGender();
    void setName(char* _name);
    void setAge(int age);
    void setAnimalType(AnimalType _at);
    void setGender(Gender _gender);

};

#endif //ZOOMANAGEMENT_ANIMAL_H
