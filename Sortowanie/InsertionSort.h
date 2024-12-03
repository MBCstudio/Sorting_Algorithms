//
// Created by cinek on 03.04.2024.
//

#ifndef PROBA_1_INSERTIONSORT_H
#define PROBA_1_INSERTIONSORT_H


#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
class InsertionSort {
private:
//    int size;
//    T *list;

public:
    InsertionSort();
    void sort(std::vector<T> &vec);
    void displayList();
};

#endif //PROBA_1_INSERTIONSORT_H
