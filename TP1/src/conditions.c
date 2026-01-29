#include <stdio.h>

int main() {
    int somme = 0;

    // 1. Parcourir de 1 à 1000
    for (int i = 1; i <= 1000; i++) {
        
        // 2. Si divisible par 11 -> on saute (continue)
        if (i % 11 == 0) {
            continue; 
        }

        // 3. Si divisible par 5 OU 7 -> on ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // 4. Si la somme dépasse 5000 -> on arrête tout (break)
        if (somme > 5000) {
            printf("Limite de 5000 atteinte au nombre %d !\n", i);
            break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
