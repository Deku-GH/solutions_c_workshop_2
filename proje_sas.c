#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_reservation 100

struct reservation
{
    char Nome[max_reservation][50];
    char prenome[max_reservation][50];
    int age[max_reservation];
    int telephone[max_reservation];
    char statu[max_reservation][50];
    int id[max_reservation];
    char date[max_reservation][50];
};
struct reservation reservt;

void ajoute()
{
    int x, st;
    char annee[20];
    printf("Combien de rendez-vous allez-vous prendre ?");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("==========================================\n");
        printf("Entrez le nom :\n");
        scanf("%s", &reservt.Nome[i]);
        printf("Entrez le prenom :\n");
        scanf("%s", &reservt.prenome[i]);
        printf("Entrez l'age :\n");
        scanf("%d", &reservt.age[i]);
        printf("Entrez le telephne : \n");
        scanf("%d", &reservt.telephone[i]);
        printf("Statut de réservation :\n");
        printf("1:valider\n");
        printf("2:raporte\n");
        printf("3:annule\n");
        printf("4:trait\n");
        scanf("%d", &st);
        switch (st)
        {
        case 1:
            strcpy(reservt.statu[i], "valider");
            break;
        case 2:
            strcpy(reservt.statu[i], "raporte");
            break;
        case 3:
            strcpy(reservt.statu[i], "annule");
            break;
        case 4:
            strcpy(reservt.statu[i], "trait");
            break;
        default:
            break;
        }

        reservt.id[i] = rand();

        printf("Entrez la date de réservation :");
        scanf("%s", &annee);

        strcpy(reservt.date[i], annee);
        printf("id de reservation : %d\n", reservt.id[i]);
        printf("==========================================\n");
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