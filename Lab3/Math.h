#ifndef MATH_H
#define MATH_H

class Math
{
public:
    static int Aduna(int a, int b);
    static int Aduna(int a, int b, int c);
    static int Aduna(double a, double b);
    static int Aduna(double a, double b, double c);
    static int Inmulteste(int a, int b);
    static int Inmulteste(int a, int b, int c);
    static int Inmulteste(double a, double b);
    static int Inmulteste(double a, double b, double c);
    static int Aduna(int numar, ...); // suma unei liste de întregi
    static char* Aduna(const char* sir1, const char* sir2);
};

#endif