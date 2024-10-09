#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char titre[100][100] = {};
char auteur[100][100] = {};
float prix[100] = {};
int Quantite[100] = {};
int count;
void affiche(int choise)
{
    printf("1.Ajouter un livre au stock.\n");
    printf("2.Afficher tous les livres disponibles.\n");
    printf("3.Rechercher un livre par son titre.\n");
    printf("4.Mettre à jour la quantité d'un livre \n");
    printf("5.Supprimer un livre du stock.\n");
    printf("6.Afficher le nombre total de livres en stock.\n");
}
void ajoute()
{
    int x;
    printf("nombre de livre ajoute :  ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("===============================\n");
        printf("le livre numero %d \n", i + 1);
        printf("entre le titre :\n");
        scanf("%s", &titre[i]);
        printf("entre le auteur :\n");
        scanf("%s", &auteur[i]);
        printf("entre le prix :\n");
        scanf("%f", &prix[i]);
        printf("entre le Quantite:\n");
        scanf("%d", &Quantite[i]);
        count += 1;
    }
}

void affiche_tableaux()
{
    for (int i = 0; i < count; i++)

    {

        printf("===============================\n");
        printf("le livre numero %d \n", i + 1);
        printf(" titre %s \n", titre[i]);
        printf(" auteur %s \n", auteur[i]);
        printf(" prix %f \n", prix[i]);
        printf(" Qauntite %d \n", Quantite[i]);
        printf("===============================\n");
    }
}

void rechercher()
{
    char titr[100];
    printf("entre le titre :");
    scanf("%s", &titr);
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(titr, titre[i]) == 0)
        {

            printf(" titre %s \n", titre[i]);
            printf(" auteur %s \n", auteur[i]);
            printf(" prix %f \n", prix[i]);
            printf(" Qauntite %d \n", Quantite[i]);
        }
        else
            printf("no");
    }
}
void la_Quantite()
{
    char titr[100];
    int Qaunt;
    printf("entre le titre :");
    scanf("%s", &titr);
    printf(" new Qauntite = ");
    scanf("%d", &Qaunt);
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(titr, titre[i]) == 0)
        {

            Quantite[i] = Qaunt;
        }
        else
            printf("no");
    }
}
void delete()
{
    char post[60];
    printf("entre le titre de livre \n");

    scanf("%s", &post);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(titre[i], post))
        {
            for (int j = i + 1; j < count - 1; j++)
            {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                Quantite[j] = Quantite[j + 1];
                count--;
            }
        }
    }
}
void totale()
{
    printf(" le nombre totale de livre: %d \n", count);
    for (int i = 0; i < count; i++)

    {

        printf("===============================\n");
        printf("le livre numero %d \n", i + 1);
        printf(" titre %s \n", titre[i]);
        printf("auteur: %s",auteur[i]);
        printf("le prix : %d \n",prix[i]);
        printf(" Qauntite %d \n", Quantite[i]);
        printf("===============================\n");
    }
}
int main()
{
    int choise, actions, x;
    // affiche(choise);

    int i = 0;
    do
    {
        affiche(choise);
        printf("choise une option :");
        scanf("%d", &choise);

        switch (choise)
        {

        case 1:
        {
            ajoute();
        }

        break;
        case 2:

        {
            affiche_tableaux();
        }
        break;

        case 3:
        {
            rechercher();
        }
        break;
        case 4:
        {
            la_Quantite();
        }
        break;
        case 5:
        {
            delete ();
        }
        break;

        case 6:
            totale();
            break;
        default:printf("havr a cood day");
            break;
            i++;
        }
    } while (i < choise );
}