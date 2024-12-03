//
// Created by cinek on 04.04.2024.
//

#ifndef PROBA_1_HEAPSORT_H
#define PROBA_1_HEAPSORT_H


#include <iostream>
#include <vector>

template <typename T>
class HeapSort {
public:
    void sort(std::vector<T> &vec);

private:
    void heapify(std::vector<T> &vec, int size, int i);
};

#endif //PROBA_1_HEAPSORT_H
