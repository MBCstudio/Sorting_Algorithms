#include "RandomList.h"


template<typename T>
RandomList<T>::RandomList() : list(nullptr), size(0) {}

template<typename T>
RandomList<T>::RandomList(int size) : size(size) {
    list = new T[size];
}

//template<typename T>
//RandomList<T>::~RandomList() {
//    delete[] list;
//}

template<typename T>
void RandomList<T>::randomFill() {
    // Inicjalizacja generatora liczb losowych
    std::default_random_engine generator(static_cast<unsigned int>(time(nullptr)));

    // Wypełnianie listy losowymi wartościami w zależności od typu T
    if constexpr (std::is_same_v<T, int>) {
        std::uniform_int_distribution<T> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, float>) {
        std::uniform_real_distribution<float> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, char>) {
        std::uniform_int_distribution<char> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    }
}

template<typename T>
void RandomList<T>::descendingFill() {
    std::default_random_engine generator(static_cast<unsigned int>(time(nullptr)));

    if constexpr (std::is_same_v<T, int>) {
        std::uniform_int_distribution<T> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, float>) {
        std::uniform_real_distribution<float> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, char>) {
        std::uniform_int_distribution<char> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    }

    std::sort(list, list + size, std::greater<T>());
}

template<typename T>
void RandomList<T>::ascendingFill() {
    std::default_random_engine generator(static_cast<unsigned int>(time(nullptr)));

    if constexpr (std::is_same_v<T, int>) {
        std::uniform_int_distribution<T> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, float>) {
        std::uniform_real_distribution<float> distribution(0, 100);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, char>) {
        std::uniform_int_distribution<char> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    }

    std::sort(list, list + size);
}

template<typename T>
void RandomList<T>::partFill() {
    std::default_random_engine generator(static_cast<unsigned int>(time(nullptr)));

    // Wypełnij całą tablicę losowymi wartościami
    if constexpr (std::is_same_v<T, int>) {
        std::uniform_int_distribution<T> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, float>) {
        std::uniform_real_distribution<float> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, char>) {
        std::uniform_int_distribution<char> distribution(0, 1000);
        for (int i = 0; i < size; ++i) {
            list[i] = distribution(generator);
        }
    }

    // Posortuj tylko pierwszą 1/3 tablicy
    std::sort(list, list + size / 3);

    // Wybierz największą wartość z posortowanej części
    T max_value = list[size / 3 - 1];

    // Wypełnij resztę tablicy losowymi wartościami większymi niż max_value
    if constexpr (std::is_same_v<T, int>) {
        std::uniform_int_distribution<T> distribution(max_value + 1, 10000);
        for (int i = size / 3; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, float>) {
        std::uniform_real_distribution<float> distribution(max_value + 1, 1000);
        for (int i = size / 3; i < size; ++i) {
            list[i] = distribution(generator);
        }
    } else if constexpr (std::is_same_v<T, char>) {
        std::uniform_int_distribution<char> distribution(max_value + 1, 10000);
        for (int i = size / 3; i < size; ++i) {
            list[i] = distribution(generator);
        }
    }
}

template<typename T>
void RandomList<T>::displayList() {
    for (int i = 0; i < size; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << "\n";
}