//
// Created by cinek on 23.04.2024.
//

#ifndef PROBA_1_SORTMENU_H
#define PROBA_1_SORTMENU_H


#include <vector>

template<typename T>
class SortMenu {
private:
    std::vector<T> sortList;

public:
    void setVector(const std::vector<T> &vec) {
        sortList = vec;
    }
    std::vector<T> run();
};


#endif //PROBA_1_SORTMENU_H
