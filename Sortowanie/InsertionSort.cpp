#include "InsertionSort.h"

template <typename T>
InsertionSort<T>::InsertionSort() {}

template <typename T>
void InsertionSort<T>::sort(std::vector<T> &vec) {
    int size = vec.size(); // Pobierz rozmiar wektora
    for (int i = 1; i < size; ++i) { // Iteruj przez elementy wektora zaczynając od drugiego
        T key = vec[i]; // Przechowaj aktualny element jako klucz
        int j = i - 1; // Przechodź wstecz przez posortowaną sekwencję zaczynając od poprzednika klucza

        // Przesuń elementy większe od klucza o jeden indeks w prawo
        // aż znajdziesz odpowiednie miejsce dla klucza lub dojdziesz do początku wektora
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j]; // Przesuń większy element o jeden indeks w prawo
            j = j - 1; // Przejdź do poprzedniego elementu w posortowanej sekwencji
        }
        vec[j + 1] = key; // Wstaw klucz na właściwe miejsce w posortowanej sekwencji
    }
}

//template <typename T>
//void InsertionSort<T>::displayList() {
//    if (list == nullptr || size == 0) {
//        std::cout << "List is empty" << std::endl;
//        return;
//    }
//
//    std::cout << "List of " << size << " elements:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        std::cout << list[i] << std::endl;
//    }
//}

template class InsertionSort<int>;
template class InsertionSort<float>;
template class InsertionSort<char>;