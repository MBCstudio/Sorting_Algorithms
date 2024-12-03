#include <vector>
#include "HibbardShellSort.h"

//
// Created by cinek on 23.04.2024.
//
template <typename T>
void HibbardShellSort<T>::sort(std::vector<T> &vec) {
    int size = vec.size();

    // Generuj sekwencję długości kroków zgodnie z regułą Hibbarda
    int h = 1;
    while (h < size / 3) {
        h = 3 * h + 1;
    }

    // Rozpocznij sortowanie z największego odstępu h
    while (h >= 1) {
        // Wykonaj sortowanie przez wstawianie dla każdej grupy
        for (int i = h; i < size; ++i) {
            T temp = vec[i];
            int j = i;

            // Przesuń elementy większe od temp o h pozycji w prawo
            while (j >= h && vec[j - h] > temp) {
                vec[j] = vec[j - h];
                j -= h;
            }

            // Wstaw temp na odpowiednie miejsce
            vec[j] = temp;
        }

        // Zmniejsz odstęp o 1/3
        h /= 3;
    }
}

template class HibbardShellSort<int>;
template class HibbardShellSort<float>;
template class HibbardShellSort<char>;

#include "HibbardShellSort.h"
