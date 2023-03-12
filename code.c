/*
NAME: calculatrice
GOAL: calcul et affichage arithm�tique
AUTHOR:AKAKPO Franck
DATE: 10/03/2023
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<clocale>

int main()
{

    int nb_aleatoire, nb_utilisateur, cpt;

    setlocale(LC_CTYPE,"");

    printf("Programme jeu de devinette\n");
    srand(time(0));
    nb_aleatoire = rand() % 101;
    cpt = 0;
    do {
        printf("Devinez le nombre entre 0 et 100 :\n");
        scanf("%d", &nb_utilisateur);
        if (nb_utilisateur < nb_aleatoire)
        {
            printf("Le nombre est plus grand.\n");
        }
        else if (nb_utilisateur > nb_aleatoire)
        {
            printf("Le nombre est plus petit.\n");
        }
        else if (nb_utilisateur == nb_aleatoire)
        {
            printf("Bravo, vous avez r�ussi � deviner le nombre !\n");
        }
        cpt++;
    } while (nb_utilisateur != nb_aleatoire && cpt < 10);

    if (cpt == 10) {
        printf("Dommage, vous n'avez pas r�ussi � deviner le nombre en moins de 10 essais.\n");
    }
    return 0;
}
