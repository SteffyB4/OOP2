// Lab 1

// problema nr1

#include <stdio.h>

int Atoi(const char *str) {
    int rez = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            rez = rez * 10 + (*str - '0');
        } 
        else {
            break;
        }
        str++;
    }
    return rez;
}

int main() {
    FILE *file = fopen("in.txt", "r");
    if (!file) {
        printf("Eroare la deschiderea fisierului.\n");
        return 1;
    }

    char buffer[100];
    int sum = 0;

    while (fgets(buffer, sizeof(buffer), file)) {
        sum += Atoi(buffer);
    }

    fclose(file);
    
    printf("%d\n", sum);
    return 0;
}


// problema nr2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LENGTH 1000

int comparaCuv(const void *a, const void *b) {
    char *cuv1 = *(char **)a;
    char *cuv2 = *(char **)b;
    
    int len1 = strlen(cuv1);
    int len2 = strlen(cuv2);

    if (len1 != len2) {
        return len2 - len1;
    }
    return strcmp(cuv1, cuv2);
}

int main() {
    char input[MAX_LENGTH];
    char *cuv[MAX_WORDS];
    int nrCuv = 0;

    fgets(input, sizeof(input), stdin);

    char *p = strtok(input, " \t\n");
    while (p != NULL && nrCuv < MAX_WORDS) {
        cuv [nrCuv] = strdup(p);
        nrCuv++;
        p = strtok(NULL, " \t\n");
    }

    qsort(cuv, nrCuv, sizeof(char *), comparaCuv);

    for (int i = 0; i < nrCuv; i++) {
        printf("%s\n", cuv[i]);
        free(cuv[i]);
    }

    return 0;
}


// problema nr3

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int tr = 2; tr < n / 2; tr++)
        if ((n % tr ) == 0)
            return 0;
    return true;
}
int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else 
        std::cout << n << " is NOT prime !";
    return 0;
}