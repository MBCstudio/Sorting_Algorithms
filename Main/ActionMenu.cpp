//
// Created by cinek on 11.04.2024.
//

#include "ActionMenu.h"
#include "MainMenu.h"
#include "MeunRandomList.h"
#include "SortMenu.h"
#include "../testy/tests.h"

template<typename T>
ActionMenu<T>::ActionMenu() : if_list_rendered(false), if_list_loaded(false), file_name("") {}

template<typename T>
void ActionMenu<T>::runActionMenu() {
    std::vector<T> genList;
    std::vector<T> copyList;
    std::vector<T> loadList;
    int choice;

    while (1){
        std::cout << "1) Wygeneruj tablice" << std::endl;
        std::cout << "2) Wczytaj liste z pliku" << std::endl;
        std::cout << "3) Wyswietl liste przed sortowaniem" << std::endl;
        std::cout << "4) Posortuj liste" << std::endl;
        std::cout << "5) Wyswietl liste po sortowaniu" << std::endl;
        std::cout << "6) Sprawdz czy lista zostala posorotwana prawidlowo" << std::endl;
        std::cout << "7) Strefa testow" << std::endl;
        std::cout << "8) Cofnij (do wyboru typu zmiennej)" << std::endl;

        std::cin >> choice;

        // Obsługa klawiszy
        if (choice == 1) {
            MeunRandomList<T> renderMenu;
            genList = renderMenu.run();

            if_list_loaded = false;
            if_list_rendered = true;

            copyList = genList;
        } else if (choice == 2) {
            std::cout << std::endl << "Wpisz sciezke pliku: ";
            std::cin >> file_name;
            loadList = ListFromFile<T>(file_name).getList();
            copyList = loadList;
            if_list_rendered = false;
            if_list_loaded = true;
        } else if (choice == 3) {
            if (if_list_loaded or if_list_rendered){
                for (int i = 0; i < copyList.size(); i++) {
                    std::cout<<copyList[i]<<" ";
                }
                std::cout<<std::endl;
            } else if (!if_list_rendered and !if_list_loaded){
                std::cout<< std::endl << "Nie zaladowano, ani nie stworzono zandej listy";
            } else{
                std::cout<< std::endl << "Błąd!";
            }

        } else if (choice == 4) {
            SortMenu<T> sortMenu;
            if (if_list_loaded){
                sortMenu.setVector(loadList);
                loadList = sortMenu.run();
            } else if(if_list_rendered){
                sortMenu.setVector(genList);
                genList = sortMenu.run();
            }
        } else if (choice == 5) {
            if (!if_list_rendered and !if_list_loaded and !if_sorted){
                std::cout<<std::endl<<"Nie wygenerowana, wczytano lub posortowano listy";
            }else if (if_list_rendered){
                for (int i = 0; i < genList.size(); i++) {
                    std::cout<<genList[i]<<" ";
                }
                std::cout<<std::endl;
            } else if (if_list_loaded){
                for (int i = 0; i < loadList.size(); i++) {
                    std::cout<<loadList[i]<<" ";
                }
                std::cout<<std::endl;
            }
        }else if (choice == 6){
            if (if_list_loaded){
                std::cout<<ifSorted(loadList)<< std::endl;
                } else if (if_list_rendered){
                std::cout<<ifSorted(genList)<< std::endl;
            }
        } else if (choice == 7){
            tests test;
            test.run();
        }else if (choice == 8) {
            MainMenu menu;
            menu.runMenu();
        } else {
            std::cout << "Nieznana komenda" << std::endl;
        }
    }

}

template <typename T>
bool ActionMenu<T>::ifSorted(std::vector<T> vec) {
    for (int i = 0; i < vec.size()+1; i++) {
        if (vec[i] > vec[i+1]){
            return false;
        }
        return true;
    }
}

// Explicit instantiation of the ActionMenu class for int, float, and char
template class ActionMenu<int>;
template class ActionMenu<float>;
template class ActionMenu<char>;
