//
// Created by cinek on 23.04.2024.
//
#include <iostream>
#include "SortMenu.h"
#include "../Sortowanie/InsertionSort.h"
#include "../Sortowanie/HeapSort.h"
#include "../Sortowanie/ClassicShellSort.h"
#include "../Sortowanie/HibbardShellSort.h"
#include "../Sortowanie/QuickSort.h"

template<typename T>
std::vector<T> SortMenu<T>::run(){
    std::string whatSort;
    std::cout << "Wybierz sortowanie: " << std::endl;
    std::cout << "1) Insert Sort" << std::endl;
    std::cout << "2) Heap Sort" << std::endl;
    std::cout << "3) Quick Sort" << std::endl;
    std::cout << "4) Shell Sort (klasyczny)" << std::endl;
    std::cout << "5) Shell Sort (Hibbard)" << std::endl;

    std::cin >> whatSort;

    if (whatSort == "1"){
        InsertionSort<T> insertionSort;
        insertionSort.sort(sortList);
    }else if (whatSort == "2"){
        HeapSort<T> heapSort;
        heapSort.sort(sortList);
    } else if (whatSort == "3"){
        std::string whatPivot;

        std::cout << "Wybierz pivot: " << std::endl;
        std::cout << "1) Lewy" << std::endl;
        std::cout << "2) Srodkowy" << std::endl;
        std::cout << "3) Prawy" << std::endl;
        std::cout << "4) Dowolny" << std::endl;

        std::cin >> whatPivot;

        QuickSort<T> quickSort;
        if (whatPivot == "1"){
            quickSort.quick_sort(sortList,0, sortList.size()-1, 1);
        } else if (whatPivot == "2"){
            quickSort.quick_sort(sortList, 0, sortList.size()-1, 3);
        } else if (whatPivot == "3"){
            quickSort.quick_sort(sortList, 0, sortList.size()-1, 2);
        } else if (whatPivot == "4"){
            quickSort.quick_sort(sortList, 0, sortList.size()-1, 4);
        }
    } else if (whatSort == "4"){
        ClassicShellSort<T> classicShellSort;
        classicShellSort.sort(sortList);
    }else if (whatSort == "5"){
        HibbardShellSort<T> hibbardShellSort;
        hibbardShellSort.sort(sortList);
    } else{
        std::cout<<"Nieprawidłowa komenda"<< std::endl;
    }

    return sortList;
}

//templaty do dzialania tego programu
template class SortMenu<int>;
template class SortMenu<float>;
template class SortMenu<char>;

