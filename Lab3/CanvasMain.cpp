#include "Canvas.h"
#include <iostream>

int main() {
    Canvas canvas(20, 10);

    canvas.DeseneazaCerc(10, 5, 4, 'O');
    canvas.UmpleCerc(10, 5, 3, 'o');
    canvas.DeseneazaDreptunghi(2, 2, 18, 8, 'X');
    canvas.UmpleDreptunghi(3, 3, 17, 7, 'x');
    canvas.SeteazaPunct(5, 5, 'P');
    canvas.DeseneazaLinie(1, 1, 18, 8, 'L');

    canvas.Afiseaza();
    canvas.Sterge();

    return 0;
}