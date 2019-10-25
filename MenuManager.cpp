//
// Created by Asus on 24-Oct-2019.
//
#include <iostream>
#include "MenuManager.h"
#include "Animal.h"
#include "Zebra.h"
using namespace std;

void MenuManager::printAddAnimalMenu(){
    cout<< "You chose to add an animal." << endl;
    cout<<"1 for creating a zebra/n 2 for creating a monkey/n 3 for creating a camel/n 4 to go back to main menu.";
}

void MenuManager::createAnimal(){
    printAddAnimalMenu();
    cin >> option;
    while(option != EXIT_MENU_OPTION){
        switch(option){
            case CREATE_ZEBRA_OPTION:
                cout<<"please enter name ";
                cin>> name;
                cout<<"please enter animal type";
                cin>> at;
                cout<<"please enter age ";
                cin>> age;
                cout<<"please enter gender ";
                cin>> gender;
                cout<<"please enter num of strips ";
                cin>>NOS;
                newAnimal = Zebra(name,at,age,gender,NOS);
                zm.addAnimal(newAnimal);
                break;
            //case CREATE_MONKEY_OPTION:
              /*  cout<<"please enter ";
                cin>>
                   cout<<"please enter ";
                cin>>
                   cout<<"please enter ";
                cin>>
                   zm.addAnimal(newAnimal);
                break;
            case CREATE_CAMEL_OPTION:
                cout<<"1 for one hump camel, 2 for two hump camel, 3 to exit" << endl;
                cin>> option;
                while(option!= EXIT_MENU_OPTION){
                    case CREATE_ONE_HUMP_CAMEL_OPTION:
                        cout<<"please enter ";
                    cin>>
                       cout<<"please enter ";
                    cin>>
                       zm.addAnimal(newAnimal);
                        break;
                    case CREATE_TWO_HUMP_CAMEL_OPTION:
                        cout<<"please enter ";
                    cin>>
                       cout<<"please enter ";
                    cin>>
                       zm.addAnimal(newAnimal);
                        break;
                }*/
            case CREATE_ONE_HUMP_CAMEL_OPTION:
                break;
        }
    }
}