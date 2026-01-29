
#include <stdio.h>

int main() {
    // --- Types entiers (caractères) ---
    // Note : Le spécificateur %zu est le standard pour afficher le résultat de sizeof (type size_t).
    // Si %zu ne fonctionne pas sur ton système (très vieux compilateur), utilise %lu.
    
    printf("--- CHAR ---\n");
    printf("Size of char: %zu octet(s)\n", sizeof(char));
    printf("Size of signed char: %zu octet(s)\n", sizeof(signed char));
    printf("Size of unsigned char: %zu octet(s)\n", sizeof(unsigned char));
    printf("\n");

    // --- Types entiers (courts) ---
    printf("--- SHORT ---\n");
    printf("Size of short: %zu octet(s)\n", sizeof(short));
    printf("Size of unsigned short: %zu octet(s)\n", sizeof(unsigned short));
    printf("\n");

    // --- Types entiers (standards) ---
    printf("--- INT ---\n");
    printf("Size of int: %zu octet(s)\n", sizeof(int));
    printf("Size of unsigned int: %zu octet(s)\n", sizeof(unsigned int));
    printf("\n");

    // --- Types entiers (longs) ---
    printf("--- LONG INT ---\n");
    printf("Size of long int: %zu octet(s)\n", sizeof(long int));
    printf("Size of unsigned long int: %zu octet(s)\n", sizeof(unsigned long int));
    printf("\n");

    // --- Types entiers (très longs) ---
    printf("--- LONG LONG INT ---\n");
    printf("Size of long long int: %zu octet(s)\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu octet(s)\n", sizeof(unsigned long long int));
    printf("\n");

    // --- Types à virgule flottante (réels) ---
    // Attention : Pas de version unsigned pour les flottants
    printf("--- FLOAT / DOUBLE ---\n");
    printf("Size of float: %zu octet(s)\n", sizeof(float));
    printf("Size of double: %zu octet(s)\n", sizeof(double));
    printf("Size of long double: %zu octet(s)\n", sizeof(long double));

    return 0;
}
