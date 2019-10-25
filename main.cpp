#include <iostream>
#include "MenuManager.h"
#include "ZooManager.h"


using namespace std;

void printMainMenu() {
    cout<<"Welcome to the zoo, please choose an option:" << endl;
    cout<<"1 for creating and adding an animal, 2 for deleting an animal, 3 for showing the current zoo status, 4 for exit program";
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    char option = 0;

    const char ADD_ANIMAL_MENU_OPTION = '1';
    const char REMOVE_ANIMAL_MENU_OPTION ='2';
    const char SHOW_ANIMALS_MENU_OPTION = '3';
    const char EXIT_MENU_OPTION = '4';

    while(option != EXIT_MENU_OPTION) {
        printMainMenu();
        cin>>option;
        switch (option) {
            case ADD_ANIMAL_MENU_OPTION:
                break;
            case REMOVE_ANIMAL_MENU_OPTION:
                break;
            case SHOW_ANIMALS_MENU_OPTION:
                break;
            case EXIT_MENU_OPTION:
                break;
            default:
                cout << "Please enter a valid option" << endl;
        }
    }
    return 0;
}