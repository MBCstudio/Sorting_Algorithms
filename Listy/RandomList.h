//
// Created by cinek on 23.03.2024.
//

#ifndef PROBA_1_RANDOMLIST_H
#define PROBA_1_RANDOMLIST_H

#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
#include <limits>

template<typename T>
class RandomList {
private:
    T *list;
    std::vector<T> vec;
    int size;

public:
    RandomList(int size);
    RandomList();
    //~RandomList();
    void randomFill();
    void descendingFill();
    void ascendingFill();
    void partFill();
    void displayList();
    std::vector<T> getList() const {
        return std::vector<T>(list, list + size);
    }

};

#endif //PROBA_1_RANDOMLIST_H
