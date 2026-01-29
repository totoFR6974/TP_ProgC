#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '&'; // Change ce caractère pour tester (+, -, *, /, %, &, |, ~)

    printf("Operation : %d %c %d\nResultat : ", num1, op, num2);

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Erreur : Division par zero\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Erreur : Division par zero\n");
            break;
        // Opérateurs bit-à-bit (bitwise)
        case '&':
            printf("%d\n", num1 & num2);
            break;
        case '|':
            printf("%d\n", num1 | num2);
            break;
        case '~':
            // Le ~ s'applique à un seul nombre. On applique sur num1 par défaut.
            printf("%d (Note: ~ s'applique uniquement au premier nombre)\n", ~num1);
            break;
        default:
            printf("Operateur inconnu\n");
    }

    return 0;
}

