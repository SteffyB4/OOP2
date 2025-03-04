// Lab 01 Extra
// source.cpp

#include "header.h"

int Sum(int a, int b) { return a + b; } //a+b
int Dif(int a, int b) { return a - b; } //a-b
int Mul(int a, int b) { return a * b; } //a*b
int Div(int a, int b) { return a / b; } //a/b

int main(int argc, char* argv[])
{
    char input[] = "---H***E+++L+++L///O---P+++O/+-**O---";
    func Operatori[4] = {Sum, Dif, Mul, Div}; //fara 65 si 0
    int S = 0; // initializare cu 0 + V neutilizat
    Content x = {0, 0}; // 2 intregi
    int idx = 0;

    for (int i = 0; i < strlen(input); i++) // declaram i cu int
    {
        switch (input[i] - 42)
        {
            case INMULTIRE:
                idx = 2;
                x.p1 = 3;
                x.p2 = 3;
                break; // break
            case SUMA:
                idx = 0;
                x.p1 = 7;
                x.p2 = 5;
                break; // break
            case DIFERENTA:
                idx = 1;
                x.p1 = 10;
                x.p2 = 1;
                break; // break
            case IMPARTIRE:
                idx = 3;
                x.p1 = 8;
                x.p2 = 4;
                break; // break
        }

       int S = S + Operatori[idx](x.p1, x.p2);
    }

    printf("S = %d\n", S); //%d

    return 0;
}