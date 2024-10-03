#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_reservation 100

char Nome[max_reservation][50];
char prenome[max_reservation][50];
int age[max_reservation];
int telephone[max_reservation];
char statu[max_reservation][50];
int id[max_reservation];
char date[max_reservation][50];

void ajoute()
{
    int x, st;
    char annee[20];
    printf("Combien de rendez-vous allez-vous prendre ?");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("entez le nome \n");
        scanf("%s", &Nome[i]);
        printf("entez prenome \n");
        scanf("%s", &prenome[i]);
        printf("entez age \n");
        scanf("%d", &age[i]);
        printf("entez le telephne \n");
        scanf("%d", &telephone[i]);
        printf("entez le nome \n");
        scanf("%d", &st);
        switch (st)
        {
        case 1:
            strcpy(statu[i], "valider");
            break;
        case 2:
            strcpy(statu[i], "raporte");
            break;
        case 3:
            strcpy(statu[i], "annule");
            break;
        case 4:
            strcpy(statu[i], "trait");
            break;
        default:
            break;
        }

        id[i] = rand();

        printf("entrez la date :");
        scanf("%s", &annee);

        strcpy(date[i], annee);
    }
}

void affiche_choix()
{

    printf("1:ajoute une réservation\n");
    printf("2:modifier ou supprimer Une réservation \n");
    printf("3:affiche les détails d'une réservation\n");
    printf("4:tre des réservation \n");
    printf("5:recherche des réservation \n");
    printf("6: statistiques \n");
}

int main()
{
    int choise;
    int i = 0;
    do
    {
        affiche_choix();
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            ajoute();
            break;
        }

        i++;
    } while (i < choise);
}