//
// Created by cinek on 03.04.2024.
//

#ifndef PROBA_1_QUICKSORT_H
#define PROBA_1_QUICKSORT_H

#include <iostream>
#include <vector>

template<typename T>
class QuickSort {
public:
    int partition(std::vector<T>& data, int left, int right, int type);
    void quick_sort(std::vector<T>& data, int l, int p, int type);
};


#endif //PROBA_1_QUICKSORT_H
