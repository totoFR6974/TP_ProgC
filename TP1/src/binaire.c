#include <stdio.h>

int main() {
    // Les nombres à tester selon l'énoncé
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    // Petite astuce pour calculer la taille du tableau automatiquement
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int k = 0; k < taille; k++) {
        int nombre = nombres[k];
        printf("Nombre : %d \t Binaire : ", nombre);

        // Un int fait généralement 32 bits. On boucle du bit 31 (gauche) jusqu'à 0 (droite).
        // On va ignorer les 0 initiaux pour faire plus joli, sauf si le nombre est 0.
        int flag_start = 0; 

        for (int i = 31; i >= 0; i--) {
            // Décalage du nombre de 'i' rangs vers la droite
            // Puis masquage avec 1 (& 1) pour isoler le bit
            int bit = (nombre >> i) & 1;

            if (bit == 1) {
                flag_start = 1; // On a trouvé le premier 1, on commence à afficher
            }

            if (flag_start || i == 0) {
                printf("%d", bit);
            }
        }
        printf("\n");
    }

    return 0;
}
