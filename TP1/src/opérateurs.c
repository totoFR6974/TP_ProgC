#include <stdio.h>

int main() {
    // Initialisation des variables comme demandé
    int a = 16;
    int b = 3;

    printf("--- Valeurs initiales ---\n");
    printf("a = %d, b = %d\n\n", a, b);

    // 1. Addition
    int addition = a + b;
    printf("1. Addition (a + b) = %d\n", addition);

    // 2. Soustraction
    int soustraction = a - b;
    printf("2. Soustraction (a - b) = %d\n", soustraction);

    // 3. Multiplication
    int multiplication = a * b;
    printf("3. Multiplication (a * b) = %d\n", multiplication);

    // 4. Division
    // Note : Comme a et b sont des entiers, le résultat est la partie entière (tronquée)
    int division = a / b;
    printf("4. Division entiere (a / b) = %d\n", division);

    // 5. Modulo (Le reste de la division)
    // Note : Pour afficher le signe '%' dans un printf, il faut écrire '%%'
    int reste = a % b;
    printf("5. Modulo (a %% b) = %d\n", reste);

    printf("\n--- Comparaisons (0 = Faux, 1 = Vrai) ---\n");

    // 6. Égalité (Opérateur ==)
    // En C, le résultat d'une comparaison est 1 si c'est Vrai, 0 si c'est Faux.
    int estEgal = (a == b);
    printf("6. Est-ce que a == b ? Résultat : %d\n", estEgal);

    // 7. Supériorité (Opérateur >)
    int estSuperieur = (a > b);
    printf("7. Est-ce que a > b ? Résultat : %d\n", estSuperieur);

    return 0;
}
