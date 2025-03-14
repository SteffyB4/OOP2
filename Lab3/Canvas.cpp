#include "Canvas.h"
#include <iostream>
#include <cmath>

Canvas::Canvas(int latime, int inaltime) : latime(latime), inaltime(inaltime) {
    matrice = new char*[inaltime];
    for (int i = 0; i < inaltime; ++i) {
        matrice[i] = new char[latime];
        for (int j = 0; j < latime; ++j) {
            matrice[i][j] = ' ';
        }
    }
}

Canvas::~Canvas() {
    for (int i = 0; i < inaltime; ++i) {
        delete[] matrice[i];
    }
    delete[] matrice;
}

void Canvas::DeseneazaCerc(int x, int y, int raza, char ch) {
    for (int i = 0; i < inaltime; ++i) {
        for (int j = 0; j < latime; ++j) {
            if (std::sqrt((i - y) * (i - y) + (j - x) * (j - x)) <= raza) {
                matrice[i][j] = ch;
            }
        }
    }
}

void Canvas::UmpleCerc(int x, int y, int raza, char ch) {
    for (int i = 0; i < inaltime; ++i) {
        for (int j = 0; j < latime; ++j) {
            if (std::sqrt((i - y) * (i - y) + (j - x) * (j - x)) <= raza) {
                matrice[i][j] = ch;
            }
        }
    }
}

void Canvas::DeseneazaDreptunghi(int stanga, int sus, int dreapta, int jos, char ch) {
    for (int i = sus; i <= jos; ++i) {
        for (int j = stanga; j <= dreapta; ++j) {
            if (i == sus || i == jos || j == stanga || j == dreapta) {
                matrice[i][j] = ch;
            }
        }
    }
}

void Canvas::UmpleDreptunghi(int stanga, int sus, int dreapta, int jos, char ch) {
    for (int i = sus; i <= jos; ++i) {
        for (int j = stanga; j <= dreapta; ++j) {
            matrice[i][j] = ch;
        }
    }
}

void Canvas::SeteazaPunct(int x, int y, char ch) {
    if (x >= 0 && x < latime && y >= 0 && y < inaltime) {
        matrice[y][x] = ch;
    }
}

void Canvas::DeseneazaLinie(int x1, int y1, int x2, int y2, char ch) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;
    int err = dx - dy;

    while (true) {
        SeteazaPunct(x1, y1, ch);
        if (x1 == x2 && y1 == y2) break;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

void Canvas::Afiseaza() {
    for (int i = 0; i < inaltime; ++i) {
        for (int j = 0; j < latime; ++j) {
            std::cout << matrice[i][j];
        }
        std::cout << std::endl;
    }
}

void Canvas::Sterge() {
    for (int i = 0; i < inaltime; ++i) {
        for (int j = 0; j < latime; ++j) {
            matrice[i][j] = ' ';
        }
    }
}