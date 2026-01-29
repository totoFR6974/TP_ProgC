#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    // Boucle principale pour chaque niveau (ligne)
    for (i = 1; i <= n; i++) {
        
        // 1. Afficher les espaces pour centrer
        // Plus on descend (i augmente), moins on a d'espaces (n - i)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Afficher les nombres croissants (de 1 à i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Afficher les nombres décroissants (de i-1 à 1)
        // Cette boucle ne s'exécute que si i > 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passage à la ligne suivante
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}
