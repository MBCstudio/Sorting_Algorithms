//
// Created by cinek on 21.04.2024.
//

#ifndef PROBA_1_MEUNRANDOMLIST_H
#define PROBA_1_MEUNRANDOMLIST_H


#include <vector>
#include <string>
#include "../Listy/RandomList.h"
#include "../Listy/RandomList.cpp"

template<typename T>
class MeunRandomList {
private:
    int size;
    RandomList<T> genericList;

public:
    MeunRandomList();
    std::vector<T> run();
};

#endif //PROBA_1_MEUNRANDOMLIST_H
