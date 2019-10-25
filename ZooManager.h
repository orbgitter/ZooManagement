//
// Created by Asus on 24-Oct-2019.
//

#ifndef ZOOMANAGEMENT_ZOOMANAGER_H
#define ZOOMANAGEMENT_ZOOMANAGER_H

#include "Animal.h"
#include <list>

class ZooManager : public Animal {
private:
    //Animal* animals;
    int maxSize, currentSize, id;
    list<Animal*> animals;
    Animal newAnimal;


public:
    ZooManager(int _maxSize);
    ZooManager(const ZooManager &source);
    ~ZooManager();
    ZooManager& operator=(const ZooManager& zooManager);
    Animal* getAnimalById(int id);

    void addAnimal(Animal* newAnimal);
    bool removeAnimal(int id);
};


#endif //ZOOMANAGEMENT_ZOOMANAGER_H
