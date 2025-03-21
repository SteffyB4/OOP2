#include "Sort.h"
#include <iostream>

int main() {
    // Exemplu de utilizare a clasei Sort

    // Constructor cu valori random
    Sort s1(10, 1, 100);
    std::cout << "Lista initiala (random): ";
    s1.Print();
    s1.InsertSort(true);
    std::cout << "Dupa InsertSort (ascendent): ";
    s1.Print();

    // Constructor cu lista de ini?ializare
    Sort s2 = { 5, 3, 8, 1, 2 };
    std::cout << "Lista initiala (initializer list): ";
    s2.Print();
    s2.QuickSort(false);
    std::cout << "Dupa QuickSort (descendent): ";
    s2.Print();

    // Constructor cu vector existent
    std::vector<int> vec = { 9, 4, 7, 2, 5 };
    Sort s3(vec, vec.size());
    std::cout << "Lista initiala (vector existent): ";
    s3.Print();
    s3.BubbleSort(true);
    std::cout << "Dupa BubbleSort (ascendent): ";
    s3.Print();

    // Constructor cu parametri variadici
    Sort s4(5, 10, 20, 30, 40, 50);
    std::cout << "Lista initiala (variadici): ";
    s4.Print();
    s4.InsertSort(false);
    std::cout << "Dupa InsertSort (descendent): ";
    s4.Print();

    // Constructor cu ?ir de caractere
    Sort s5("10,40,100,5,70");
    std::cout << "Lista initiala (?ir de caractere): ";
    s5.Print();
    s5.QuickSort(true);
    std::cout << "Dupa QuickSort (ascendent): ";
    s5.Print();

    return 0;
}