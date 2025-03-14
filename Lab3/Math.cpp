#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <iostream>

int Math::Aduna(int a, int b) {
    return a + b;
}

int Math::Aduna(int a, int b, int c) {
    return a + b + c;
}

int Math::Aduna(double a, double b) {
    return static_cast<int>(a + b);
}

int Math::Aduna(double a, double b, double c) {
    return static_cast<int>(a + b + c);
}

int Math::Inmulteste(int a, int b) {
    return a * b;
}

int Math::Inmulteste(int a, int b, int c) {
    return a * b * c;
}

int Math::Inmulteste(double a, double b) {
    return static_cast<int>(a * b);
}

int Math::Inmulteste(double a, double b, double c) {
    return static_cast<int>(a * b * c);
}

int Math::Aduna(int numar, ...) {
    va_list args;
    va_start(args, numar);
    int suma = 0;
    for (int i = 0; i < numar; ++i) {
        suma += va_arg(args, int);
    }
    va_end(args);
    return suma;
}

char* Math::Aduna(const char* sir1, const char* sir2) {
    if (sir1 == nullptr || sir2 == nullptr) {
        return nullptr;
    }
    char* rezultat = new char[strlen(sir1) + strlen(sir2) + 1];
    strcpy(rezultat, sir1);
    strcat(rezultat, sir2);
    return rezultat;
}