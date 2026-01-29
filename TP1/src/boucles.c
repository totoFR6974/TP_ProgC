#include <stdio.h>

int main() {
    int compteur = 5;

    printf("--- Version avec boucle FOR ---\n");
    // Boucle externe : gère les lignes (i)
    for (int i = 0; i < compteur; i++) {
        // Boucle interne : gère les colonnes (j)
        // Note : j va jusqu'à i car c'est un triangle (ligne 0 = 1 étoile, ligne 1 = 2 étoiles...)
        for (int j = 0; j <= i; j++) {
            
            // Condition pour afficher '*' :
            // 1. Première colonne (j==0)
            // 2. Dernière colonne de la ligne actuelle (j==i)
            // 3. Dernière ligne du triangle (i==compteur-1)
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n"); // Saut de ligne après chaque rangée
    }

    printf("\n--- Version avec boucle WHILE ---\n");
    int i = 0;
    while (i < compteur) {
        int j = 0;
        while (j <= i) {
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
