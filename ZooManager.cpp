//
// Created by Asus on 24-Oct-2019.
//

#include "ZooManager.h"

ZooManager::ZooManager(int _maxSize):animals(_maxSize){
}

ZooManager::ZooManager(const ZooManager &source):animals(source.animals){
}

ZooManager::~ZooManager(){
    if(animals !=0){
        for(int i =0; i< currentSize; i++){
            if(animals[i] !=0)
                delete animals[i];
        }
        delete[] animals;
    }
}

void ZooManager::addAnimal(Animal* newAnimal) {
    animals.push_back(newAnimal);
    //todo else
}

bool ZooManager::removeAnimal(int id) {
    Animal* animalToRemove = 0;
    for(list<Animal*>::iterator it = animals.begin(); it != animals.end(); ++it) {
        if (*it)->getId() == id)
            animalToRemove = *(it);
    }
    if(animalToRemove) {
        animals.remove(animalToRemove);
        return true;
    }
    return false;
}

Animal* ZooManager::getAnimalById(int id){
    for(list<Animal*>::iterator it = animals.begin(); it != animals.end(); ++it) {
        if((*it)-> getId() == id) {
            return *(it);
        }
    }
    return 0;
}

ZooManager& ZooManager::operator=(const ZooManager& zm){
    if(this ==&zm) return *this;
    delete[] name;
    //delete future unique feature for each type of animal that will use dynamic alloc
    name = strdup(zm.name);
    return *this;
}