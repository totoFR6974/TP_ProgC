#include <stdio.h>
#include <math.h> // Pour utiliser M_PI (la valeur précise de pi)

int main() {
    double rayon;
    printf("Entrez la valeur du rayon : ");
    scanf("%lf", &rayon); 
    
   
    double aire;
    double perimetre;

    // Formule: aire = pi * rayon * rayon
    aire = M_PI * rayon * rayon; 
    
    // Formule: périmètre = 2 * pi * rayon
    perimetre = 2 * M_PI * rayon; 
 
    printf("L'aire du cercle = %f\n", aire);
    printf("Le périmètre du cercle = %f\n", perimetre);

    return 0; 
}

