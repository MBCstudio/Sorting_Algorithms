cmake_minimum_required(VERSION 3.27)
project(proba_1)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(proba_1
        Main.cpp
        Listy/RandomList.cpp
        Listy/RandomList.h
        Listy/ListFromFile.h
        Sortowanie/QuickSort.cpp
        Listy/ListFromFile.cpp
        Sortowanie/QuickSort.h
        Sortowanie/InsertionSort.cpp
        Sortowanie/InsertionSort.h
        Sortowanie/HeapSort.cpp
        Sortowanie/HeapSort.h
        Main/MainMenu.cpp
        Main/MainMenu.h
        Main/ActionMenu.cpp
        Main/ActionMenu.h
        Main/MeunRandomList.cpp
        Main/MeunRandomList.h
        Main/SortMenu.cpp
        Main/SortMenu.h
        Sortowanie/ClassicShellSort.cpp
        Sortowanie/ClassicShellSort.h
        Sortowanie/HibbardShellSort.cpp
        Sortowanie/HibbardShellSort.h
        testy/tests.cpp
        testy/tests.h
)
