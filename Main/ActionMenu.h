//
// Created by cinek on 11.04.2024.
//

#ifndef PROBA_1_ACTIONMENU_H
#define PROBA_1_ACTIONMENU_H

#include <iostream>
//#include "../Listy/RandomList.h"
//#include "../Listy/RandomList.cpp"
#include "../Listy/ListFromFile.h"
#include "../Listy/ListFromFile.cpp"

template<typename T>
class ActionMenu {
private:
    //RandomList<T> genericList;
    //std::vector<T> generatedList;
    bool if_list_rendered;
    bool if_list_loaded;
    bool if_sorted;
    std::string file_name;

public:
    ActionMenu();
    void runActionMenu();
    bool ifSorted(std::vector<T> vec);
};


#endif //PROBA_1_ACTIONMENU_H