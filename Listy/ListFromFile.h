#ifndef LISTFROMFILE_H
#define LISTFROMFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

template <typename T>
class ListFromFile {
private:
    int size;
    T *list;
public:
    ListFromFile(const std::string &filename);
    ~ListFromFile();
    void displayList();
    std::vector<T> getList() const {
        return std::vector<T>(list, list + size);
    }
};


#endif // LISTFROMFILE_H
