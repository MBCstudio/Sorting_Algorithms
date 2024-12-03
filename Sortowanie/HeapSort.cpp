#include "HeapSort.h"

template <typename T>
void HeapSort<T>::sort(std::vector<T> &vec) {
    int size = vec.size();
    // Budowanie kopca (od połowy, bo liście nie wymagaja naprawy)
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(vec, size, i);
    }

    // Wyciąganie elementów z kopca i sortowanie
    for (int i = size - 1; i > 0; i--) {
        std::swap(vec[0], vec[i]); // Zamiana roota z ostatnim elementem (najwiekszy zamieniamy z najmenjszym)
        heapify(vec, i, 0); // Przywrócenie właściwości kopca dla zmniejszonego kopca
    }
}

template <typename T>
void HeapSort<T>::heapify(std::vector<T> &vec, int size, int i) {
    int largest = i; // Przyjmijmy, że największy element jest początkowo na pozycji i
    int left = 2 * i + 1; // Indeks lewego dziecka węzła i
    int right = 2 * i + 2; // Indeks prawego dziecka węzła i

    // Sprawdź, czy lewe dziecko istnieje i czy jest większe od węzła i
    if (left < size && vec[left] > vec[largest]) {
        largest = left; // Jeśli tak, zaktualizuj indeks największego elementu
    }

    // Sprawdź, czy prawe dziecko istnieje i czy jest większe od węzła i lub lewego dziecka
    if (right < size && vec[right] > vec[largest]) {
        largest = right; // Jeśli tak, zaktualizuj indeks największego elementu
    }

    // Jeśli największy element nie jest węzłem i, zamień te elementy miejscami i rekurencyjnie napraw kopiec
    if (largest != i) {
        std::swap(vec[i], vec[largest]);
        heapify(vec, size, largest);
    }
}

template class HeapSort<int>;
template class HeapSort<float>;
template class HeapSort<char>;