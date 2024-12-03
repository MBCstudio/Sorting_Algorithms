//
// Created by cinek on 11.04.2024.
//

#ifndef PROBA_1_MAINMENU_H
#define PROBA_1_MAINMENU_H

#include <iostream>
#include "../Main/ActionMenu.h."
//#include "../Listy/RandomList.h"
//#include "../Listy/RandomList.cpp"
//#include "../Listy/ListFromFile.h"
//#include "../Listy/ListFromFile.cpp"
//#include "../Sortowanie/QuickSort.h"
//#include "../Sortowanie/QuickSort.cpp"
//#include "../Sortowanie/HeapSort.h"
//#include "../Sortowanie/HeapSort.cpp"

class MainMenu {
private:
    ActionMenu<int> actionMenu;
public:
    MainMenu();
    void runMenu();
};

#endif //PROBA_1_MAINMENU_H

