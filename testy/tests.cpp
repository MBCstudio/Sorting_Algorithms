#include "tests.h"
#include "../Sortowanie/InsertionSort.h"
#include "../Sortowanie/HeapSort.h"
#include "../Sortowanie/ClassicShellSort.h"
#include "../Sortowanie/HibbardShellSort.h"
#include "../Sortowanie/QuickSort.h"
#include <chrono>

//
// Created by cinek on 23.04.2024.
//
void tests::run(){


    //INSERT SORT
    std::cout << "Sortowanie Insert Sort dla losowych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            InsertionSort<int> insertionSort;
            insertionSort.sort(sortingList);\

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }


    std::cout << "Sortowanie Insert Sort dla rosnacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            InsertionSort<int> insertionSort;
            insertionSort.sort(sortingList);\

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Insert Sort dla malejacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            InsertionSort<int> insertionSort;
            insertionSort.sort(sortingList);\

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Insert Sort dla posortowanej lisy w 1/3" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            InsertionSort<int> insertionSort;
            insertionSort.sort(sortingList);\

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }


    //HEAP SORT
    std::cout << "Sortowanie Heap Sort dla rosnacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        //std::cout<<i<<std::endl;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            std::cout<<j<<std::endl;
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //std::cout<<"Zatrzymanie_1"<<std::endl;
            //przepisywanie do wektora
            sortingList = randomIntList.getList();
            //std::cout<<"Zatrzymanie_2"<<std::endl;

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HeapSort<int> heapSort;
            heapSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        } else if (i == 10){
            std::cout<<std::endl<<"10%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Heap Sort dla malejacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HeapSort<int> heapSort;
            heapSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout<<std::endl<<"HeapSort dla losowych danych"<<std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HeapSort<int> heapSort;
            heapSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Heap Sort dla 1/3 posortowanej" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HeapSort<int> heapSort;
            heapSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }



    //CLASSIC SHELL SORT
    std::cout << "Sortowanie classic  Sort dla losowych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            ClassicShellSort<int> classicShellSort;
            classicShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie classic Sort dla rosnacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            ClassicShellSort<int> classicShellSort;
            classicShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie classic Sort dla malejacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            ClassicShellSort<int> classicShellSort;
            classicShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie classic  Sort dla 1/3 posortowanej" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            ClassicShellSort<int> classicShellSort;
            classicShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    //HIBBARD SORT
    std::cout << "Sortowanie hibbard Sort dla losowych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HibbardShellSort<int> hibbardShellSort;
            hibbardShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie hibbard Sort dla rosnacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HibbardShellSort<int> hibbardShellSort;
            hibbardShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie hibbard Sort dla malejacych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HibbardShellSort<int> hibbardShellSort;
            hibbardShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie hibbard Sort dla 1/3 posrotowanej" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            HibbardShellSort<int> hibbardShellSort;
            hibbardShellSort.sort(sortingList);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }


    //QUICK SORT
    //PIVOT 1
    std::cout << "Sortowanie Quick sort dla lewego pivota dla losowych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 1);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla lewego pivota dla rosnacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 1);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla lewego pivota dla malejacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 1);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla lewego pivota dla 1/3 posortownych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 1);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    //PIVOT_2 (Prawy)
    std::cout << "Sortowanie Quick sort dla prawego pivota dla losowych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 2);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla prawego pivota dla malejacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 2);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla prawego pivota dla rosnacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 2);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla prawego pivota dla 1/3 posortowanych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 2);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    //PIVOT_3 (Srodkowy)
    std::cout << "Sortowanie Quick sort dla srodkowego pivota dla losowych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 3);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla srodkowego pivota dla malejacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 3);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla srodkowego pivota dla rosnacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 3);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla srodkowego pivota dla 1/3 posortowanych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 3);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    //PIVOT_4 (Losowy)
    std::cout << "Sortowanie Quick sort dla losowego pivota dla losowych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.randomFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 4);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla losowego pivota dla malejacych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.descendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 4);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla losowego pivota dla rosnacyuch danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.ascendingFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 4);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

    std::cout << "Sortowanie Quick sort dla losowego pivota dla 1/3 posortownych dnaych danych" << std::endl;
    for (int i = 0; i < 100; i++) {int size=8000;
        int sum_8000 = 0;
        int sum_16000 = 0;
        int sum_32000 = 0;
        int sum_64000 = 0;
        int sum_128000 = 0;
        int sum_256000 = 0;
        int sum_512000 = 0;

        for (int j = 0; j < 7; j++) {
            //genreowanie tablicy intow posortowanych losowo zaczynajc od 1000 idac w gore o x2
            randomIntList = RandomList<int>(size);
            randomIntList.partFill();
            //przepisywanie do wektora
            sortingList = randomIntList.getList();

            //sortowanie

            // Pomiar czasu przed sortowaniem
            auto start_time = std::chrono::high_resolution_clock::now();

            QuickSort<int> quickSort;
            quickSort.quick_sort(sortingList,0, sortingList.size()-1, 4);

            // Pomiar czasu po sortowaniu
            auto end_time = std::chrono::high_resolution_clock::now();

            //std::cout<<std::endl<<ifSorted(sortingList)<<std::endl;
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
            if (size == 8000){
                sum_8000 += duration.count();
            } else if (size == 16000){
                sum_16000 += duration.count();
            }else if (size == 32000){
                sum_32000 += duration.count();
            }else if (size == 64000){
                sum_64000 += duration.count();
            }else if (size == 128000){
                sum_128000 += duration.count();
            }else if (size == 256000){
                sum_256000 += duration.count();
            }else if (size == 512000){
                sum_512000 += duration.count();
            }
            //std::cout<<"Czas sortowania dla tablicy Int o wieloksci: "<< size<< std::endl << duration.count() << "ms" << std::endl;
            size = size *2;
        }
        if (i == 50){
            std::cout<<std::endl<<"50%"<<std::endl;
        }
        if (i == 99){
            std::cout<<"Czas sortowania tablicy dla 8000 elementow (srednia ze 100 pomiarow) to: "<< sum_8000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 16000 elementow (srednia ze 100 pomiarow) to: "<< sum_16000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 32000 elementow (srednia ze 100 pomiarow) to: "<< sum_32000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 64000 elementow (srednia ze 100 pomiarow) to: "<< sum_64000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 128000 elementow (srednia ze 100 pomiarow) to: "<< sum_128000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 256000 elementow (srednia ze 100 pomiarow) to: "<< sum_256000/100 <<std::endl;
            std::cout<<"Czas sortowania tablicy dla 512000 elementow (srednia ze 100 pomiarow) to: "<< sum_512000/100 <<std::endl;

        }
    }

}

bool tests::ifSorted(std::vector<int> vec) {
    for (int i = 0; i < vec.size()+1; i++) {int size=8000;
        if (vec[i] > vec[i+1]){
            return false;
        }
        return true;
    }
}

#include "tests.h"
