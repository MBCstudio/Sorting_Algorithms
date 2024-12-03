#include <algorithm>
#include "QuickSort.h"

template<typename T>
int QuickSort<T>::partition(std::vector<T>& data, int left, int right, int type) {
    // Zmienne lokalne
    T pivot;
    size_t pivot_index;

    // Wybór pivota na podstawie typu
    if (type == 1) {
        pivot_index = left;
    } else if (type == 2) {
        pivot_index = right;
    } else if (type == 3) {
        pivot_index = (left + right) / 2;
    } else if (type == 4) {
        // Losowy pivot
        pivot_index = left + rand() % (right - left + 1);
    }

    // Ustawienie pivota
    pivot = data[pivot_index];

    int l = left; int r = right;
    while (true) {
        // Przesuwaj indeks l w prawo aż data[l] będzie większe lub równe od pivota
        while (data[l] < pivot) ++l;
        // Przesuwaj indeks r w lewo aż data[r] będzie mniejsze lub równe od pivota
        while (data[r] > pivot) --r;

        // Jeśli indeks l jest mniejszy niż r zamień elementy data[l] i data[r]
        // oraz przesuń l w prawo i r w lewo
        if (l < r) {
            std::swap(data[l], data[r]);
            ++l;
            --r;
        } else {
            // Jeśli indeks l przekroczył indeks r zwróć r jako indeks pivota po podziale
            if (r == right) r--;
            return r;
        }
    }
}

template<typename T>
void QuickSort<T>::quick_sort(std::vector<T>& data, int l, int p, int type) {
    // Jeśli lewy indeks jest większy lub równy prawemu, zakończ funkcję
    if (l >= p) return;

    // Podziel wektor na części i zwróć indeks pivota
    int m = partition(data, l, p, type);

    // Sortuj lewą część
    quick_sort(data, l, m, type);
    // Sortuj prawą część
    quick_sort(data, m + 1, p, type);
}


template class QuickSort<int>;
template class QuickSort<float>;
template class QuickSort<char>;


