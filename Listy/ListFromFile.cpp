#include "ListFromFile.h"

template <typename T>
ListFromFile<T>::ListFromFile(const std::string &filename) : list(nullptr), size(0) {
    std::ifstream file(filename); // Otwórz plik o podanej nazwie
    if (!file.is_open()) { // Sprawdź, czy udało się otworzyć plik
        std::cerr << "Unable to open file: " << filename << std::endl;
        return;
    }

    file >> size; // Wczytaj rozmiar listy
    list = new T[size]; // Przydziel pamięć na tablicę przechowującą elementy

    // Wczytaj elementy listy z pliku do tablicy
    for (int i = 0; i < size; ++i) {
        file >> list[i];
    }

    file.close(); // Zamknij plik
}

template <typename T>
ListFromFile<T>::~ListFromFile() {
    if (list != nullptr) { // Sprawdź, czy tablica nie jest pusta
        delete[] list; // Zwolnij zaalokowaną pamięć
    }
}

template <typename T>
void ListFromFile<T>::displayList() {
    if (list == nullptr || size == 0) { // Sprawdź, czy lista jest pusta
        std::cout << "List is empty" << std::endl; // Wyświetl komunikat o pustej liście
        return;
    }

    // Wyświetl zawartość listy
    std::cout << "List of " << size << " elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << list[i] << std::endl;
    }
}
