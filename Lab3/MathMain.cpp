#include "Math.h"
#include <iostream>

int main() {
    std::cout << "Aduna 2 si 3: " << Math::Aduna(2, 3) << std::endl;
    std::cout << "Aduna 2, 3 si 4: " << Math::Aduna(2, 3, 4) << std::endl;
    std::cout << "Aduna 2.5 si 3.5: " << Math::Aduna(2.5, 3.5) << std::endl;
    std::cout << "Aduna 2.5, 3.5 si 4.5: " << Math::Aduna(2.5, 3.5, 4.5) << std::endl;
    std::cout << "Inmulteste 2 si 3: " << Math::Inmulteste(2, 3) << std::endl;
    std::cout << "Inmulteste 2, 3 si 4: " << Math::Inmulteste(2, 3, 4) << std::endl;
    std::cout << "Inmulteste 2.5 si 3.5: " << Math::Inmulteste(2.5, 3.5) << std::endl;
    std::cout << "Inmulteste 2.5, 3.5 si 4.5: " << Math::Inmulteste(2.5, 3.5, 4.5) << std::endl;
    std::cout << "Suma listei de intregi: " << Math::Aduna(3, 1, 2, 3) << std::endl;
    
    const char* sir1 = "Hello, ";
    const char* sir2 = "World!";
    char* rezultat = Math::Aduna(sir1, sir2);
    std::cout << "Concatenare siruri: " << rezultat << std::endl;
    delete[] rezultat;

    return 0;
}