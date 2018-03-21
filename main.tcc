#include <stdio.h>
#include <stdlib.h>

double conversionFrancsEuros(double somme)
{
    return somme / 6.55957;

}

double conversionEurosFrancs(double somme)
{
    return somme * 6.55957;

}


int main (int argc, char *argv[])
{
    double somme = 0;
    int choixConversion = 0;

    printf("Voulez-vous :\n 1. Convertir Euros vers Francs \n 2. Francs vers Euros \n");
    scanf("%d", &choixConversion);

        if (choixConversion == 1)
        {
            printf("Merci d'entrer la somme a convertir en Francs\n");
            scanf("%lf", &somme);
            printf("La somme en Francs est : %lf", conversionEurosFrancs(somme));
        }
        else if (choixConversion == 2)
        {
            printf("Merci d'entrer la somme a convertir en Euros\n");
            scanf("%lf", &somme);
            printf("La somme en Euros est : %lf", conversionFrancsEuros(somme));
        }
        else printf("Je n'ai pas compris votre choix !\n");


    return 0;
}
