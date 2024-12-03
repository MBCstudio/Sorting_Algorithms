#include "ClassicShellSort.h"

class vector;


//
// Created by cinek on 23.03.2024.
//
template <typename T>
void ClassicShellSort<T>::sort(std::vector<T> &vec) {
    int size = vec.size();

    // Rozpocznij z dużym odstępem, a następnie zmniejszaj odstęp
    for (int gap = size / 2; gap > 0; gap /= 2) {
        // Przesuwaj się przez każdą grupę liczb z danym odstępem
        for (int start = 0; start < gap; ++start) {
            // Wykonaj sortowanie przez wstawianie dla każdej grupy
            for (int i = start + gap; i < size; i += gap) {
                T temp = vec[i];
                int j = i;

                // Przesuń elementy większe od temp o gap pozycji w prawo
                while (j >= gap && vec[j - gap] > temp) {
                    vec[j] = vec[j - gap];
                    j -= gap;
                }

                // Wstaw temp na odpowiednie miejsce
                vec[j] = temp;
            }
        }
    }
}

template class ClassicShellSort<int>;
template class ClassicShellSort<float>;
template class ClassicShellSort<char>;
#include "ClassicShellSort.h"
