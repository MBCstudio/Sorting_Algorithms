//
// Created by cinek on 21.04.2024.
//
#include <vector>
#include "MeunRandomList.h"

template<typename T>
MeunRandomList<T>::MeunRandomList() : size(0) {}

template<typename T>
std::vector<T> MeunRandomList<T>::run() {

    std::cout << std::endl << "Jaki rozmiar tablicy? ";
    std::cin >> size;

    std::string type_of_list;
    std::cout << std::endl << "Jaki rodzaj ulozenia danych w tablicy? ";
    std::cout << std::endl << "1) Dowolny";
    std::cout << std::endl << "2) Rosnacy";
    std::cout << std::endl << "3) Malejacy";
    std::cout << std::endl << "4) 1/3 Posrotowana" << std::endl;
    std::cin >> type_of_list;

    genericList = RandomList<T>(size);

    if (type_of_list == "1" or type_of_list == "Dowolny") {
        genericList.randomFill();
    } else if (type_of_list == "2" or type_of_list == "Rosnacy") {
        genericList.ascendingFill();
        //genericList.displayList();
    } else if (type_of_list == "3" or type_of_list == "Malejacy") {
        genericList.descendingFill();
    }else if (type_of_list == "4" or type_of_list == "1/3 Posrotowana"){
        genericList.partFill();
    }
    //std::cout<<"Wyszło"<<std::endl;
    return genericList.getList();
}

// Explicit instantiation of the class for specific types
template class MeunRandomList<int>;
template class MeunRandomList<float>;
template class MeunRandomList<char>;

#include "MeunRandomList.h"
