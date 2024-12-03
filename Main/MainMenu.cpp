//
// Created by cinek on 11.04.2024.
//

#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu() : actionMenu() {}

void MainMenu::runMenu() {
    int choice = -1; //-1=statrowy, 0=break
    std::string type_of_data;
    while (1) {
        // Menu
        std::cout << "======================" << std::endl;
        std::cout << "=========MENU=========" << std::endl;
        std::cout << "======================" << std::endl;

        std::cout << "Wybierz typ danych:" << std::endl;
        std::cout << "1) Intager" << std::endl;
        std::cout << "2) Float" << std::endl;
        std::cout << "3) Char" << std::endl;
        std::cout << "4) Wyjscie z programu" << std::endl;

        std::cin >> type_of_data;

        while (1){
            if (type_of_data == "Intager" or type_of_data == "1"){
                ActionMenu<int> actionMenu;
                actionMenu.runActionMenu();
            } else if (type_of_data == "Float" or type_of_data == "2"){
                ActionMenu<float> actionMenu;
                actionMenu.runActionMenu();
            } else if (type_of_data == "Char" or type_of_data == "3"){
                ActionMenu<char> actionMenu;
                actionMenu.runActionMenu();
            } else if (type_of_data == "4"){
                exit(0);
            }
            else{
                std::cout<< std::endl << "Niepoprawny typ danych" << std::endl;
                break;
            }
        }
        if (type_of_data == "4"){
            break;
        }
    }
}

