#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

    char Nom[MAX_CONTACTS][50];
    int Numero[MAX_CONTACTS];
    char Adresse_email[MAX_CONTACTS][50];


int count;

void le_chiose()
{
    printf("1. Ajouter un Contact\n");
    printf("2.Modifier un Contact\n");
    printf("3.Supprimer un Contact\n");
    printf("4.Afficher Tous les Contacts\n");
    printf("5.Rechercher un Contact\n");
}
void ajoute()
{
    int x = 0;
    printf("entre la nombr de contacte ajout :");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("entre nome :");
        scanf("%s",Nom[i]);
        printf("entre numeru :");
        scanf("%d",Numero[i]);
        printf("entre adresse email :");
        scanf("%d",Adresse_email[i]);
        count++;
    }
}

int main()
{

    int choise = 0;
    int i = 0;
    do
    {
        le_chiose();
        le_chiose();
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            ajoute();
            break;

        default:
            break;
            i++;
        }
    } while (i < choise);
}