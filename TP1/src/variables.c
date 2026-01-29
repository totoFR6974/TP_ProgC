#include <stdio.h>

int main() {
    // --- 1. CHAR (Caractères) ---
    // %c pour un caractère, %d ou %hhu pour sa valeur numérique ASCII
    char c = 'A';
    unsigned char uc = 200; // Les unsigned char vont de 0 à 255
    
    printf("--- CHAR ---\n");
    printf("char: %c (valeur ASCII: %d)\n", c, c);
    printf("unsigned char: %u\n\n", uc);


    // --- 2. SHORT (Entiers courts) ---
    // %hd pour short (signed), %hu pour unsigned short
    short s = -32000;
    unsigned short us = 65000;

    printf("--- SHORT ---\n");
    printf("short: %hd\n", s);
    printf("unsigned short: %hu\n\n", us);


    // --- 3. INT (Entiers standards) ---
    // %d pour int, %u pour unsigned int
    int i = -1024;
    unsigned int ui = 4000000000; // Un grand nombre positif

    printf("--- INT ---\n");
    printf("int: %d\n", i);
    printf("unsigned int: %u\n\n", ui);


    // --- 4. LONG INT (Entiers longs) ---
    // %ld pour long, %lu pour unsigned long
    // Note le suffixe 'L' pour dire au compilateur que c'est un long
    long l = -2000000000L;
    unsigned long ul = 3000000000UL;

    printf("--- LONG INT ---\n");
    printf("long int: %ld\n", l);
    printf("unsigned long int: %lu\n\n", ul);


    // --- 5. LONG LONG INT (Entiers très longs) ---
    // %lld pour long long, %llu pour unsigned long long
    // Suffixe 'LL'
    long long ll = -9000000000000000000LL;
    unsigned long long ull = 18000000000000000000ULL;

    printf("--- LONG LONG INT ---\n");
    printf("long long int: %lld\n", ll);
    printf("unsigned long long int: %llu\n\n", ull);


    // --- 6, 7, 8. FLOTTANTS (Nombres à virgule) ---
    // %f pour float, %lf pour double, %Lf pour long double
    float f = 3.14159f;       // Suffixe 'f' pour float
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846L; // Suffixe 'L' majuscule

    printf("--- FLOTTANTS ---\n");
    printf("float: %f\n", f);
    // %.15lf demande d'afficher 15 chiffres après la virgule pour voir la précision
    printf("double: %.15lf\n", d); 
    printf("long double: %.20Lf\n", ld);

    return 0;
}
