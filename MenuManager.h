//
// Created by Asus on 24-Oct-2019.
//

#ifndef ZOOMANAGEMENT_MENUMANAGER_H
#define ZOOMANAGEMENT_MENUMANAGER_H

#include "ZooManager.h"

class MenuManager {
private:
    int option = 0;
    int size;

    char* name;
    int age, NOS, gender, at;
    static int idGenerator;

public:
    MenuManager(int _maxSize):animals(_maxSize){}
    void createAnimal();
    void printAddAnimalMenu();
};


#endif //ZOOMANAGEMENT_MENUMANAGER_H
