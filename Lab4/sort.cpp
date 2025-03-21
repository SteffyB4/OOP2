#include "Sort.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <cstring>

// Constructor cu valori random
Sort::Sort(int count, int min, int max) {
    srand(time(0));
    for (int i = 0; i < count; ++i) {
        elements.push_back(min + rand() % (max - min + 1));
    }
}

// Constructor cu lista de ini?ializare
Sort::Sort(std::initializer_list<int> initList) : elements(initList) {}

// Constructor cu vector existent
Sort::Sort(const std::vector<int>& vec, int count) {
    for (int i = 0; i < count; ++i) {
        elements.push_back(vec[i]);
    }
}

// Constructor cu parametri variadici
Sort::Sort(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i) {
        elements.push_back(va_arg(args, int));
    }
    va_end(args);
}

// Constructor cu ?ir de caractere
Sort::Sort(const std::string& str) {
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, ',')) {
        elements.push_back(std::stoi(token));
    }
}

// Metoda InsertSort
void Sort::InsertSort(bool ascendent) {
    for (size_t i = 1; i < elements.size(); ++i) {
        int key = elements[i];
        int j = i - 1;
        while (j >= 0 && ((ascendent && elements[j] > key) || (!ascendent && elements[j] < key))) {
            elements[j + 1] = elements[j];
            --j;
        }
        elements[j + 1] = key;
    }
}

// Metoda QuickSort
void Sort::QuickSort(bool ascendent) {
    QuickSortHelper(0, elements.size() - 1, ascendent);
}

void Sort::QuickSortHelper(int low, int high, bool ascendent) {
    if (low < high) {
        int pi = Partition(low, high, ascendent);
        QuickSortHelper(low, pi - 1, ascendent);
        QuickSortHelper(pi + 1, high, ascendent);
    }
}

int Sort::Partition(int low, int high, bool ascendent) {
    int pivot = elements[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if ((ascendent && elements[j] < pivot) || (!ascendent && elements[j] > pivot)) {
            ++i;
            std::swap(elements[i], elements[j]);
        }
    }
    std::swap(elements[i + 1], elements[high]);
    return i + 1;
}

// Metoda BubbleSort
void Sort::BubbleSort(bool ascendent) {
    for (size_t i = 0; i < elements.size() - 1; ++i) {
        for (size_t j = 0; j < elements.size() - i - 1; ++j) {
            if ((ascendent && elements[j] > elements[j + 1]) || (!ascendent && elements[j] < elements[j + 1])) {
                std::swap(elements[j], elements[j + 1]);
            }
        }
    }
}

// Metoda Print
void Sort::Print() {
    for (int elem : elements) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Metoda GetElementsCount
int Sort::GetElementsCount() {
    return elements.size();
}

// Metoda GetElementFromIndex
int Sort::GetElementFromIndex(int index) {
    if (index >= 0 && index < elements.size()) {
        return elements[index];
    }
    throw std::out_of_range("Index out of range");
}