//
// Created by cinek on 23.04.2024.
//

#ifndef PROBA_1_TESTS_H
#define PROBA_1_TESTS_H


#include "../Listy/RandomList.h"
#include <vector>

class tests {
private:
    RandomList<int> randomIntList;
    std::vector<int> sortingList;
public:
    void run();
    bool ifSorted(std::vector<int> vec);

};


#endif //PROBA_1_TESTS_H
