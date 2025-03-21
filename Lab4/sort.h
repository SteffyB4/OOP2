#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>
#include <cstdarg>

class Sort {
    std::vector<int> elements;

public:
    // Constructori
    Sort(int count, int min, int max); // Constructor cu valori random
    Sort(std::initializer_list<int> initList); // Constructor cu lista de ini?ializare
    Sort(const std::vector<int>& vec, int count); // Constructor cu vector existent
    Sort(int count, ...); // Constructor cu parametri variadici
    Sort(const std::string& str); // Constructor cu ?ir de caractere

    // Metode
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);

private:
    void QuickSortHelper(int low, int high, bool ascendent);
    int Partition(int low, int high, bool ascendent);
};

#endif // SORT_H