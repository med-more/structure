#include<stdio.h>
#define max 50



// déclarer structure et embraqué
typedef struct 
{
    char rue[100];
    char ville[100];
    char code_postal[10];
}adress;

typedef struct 
{
    char nom[50];
    int age;
    adress add;
}personne;

//la fonction qui permet de creat nouvelle personne 

personne add(){

    personne p;

    printf("entrer le nom :");
    scanf("%s", &p.nom);

    printf("entrer l'age :");
    scanf("%s", &p.age);

    printf("entrer la rue :");
    scanf("%s", &p.add.rue);

    printf("entrer la ville :");
    scanf("%s", &p.add.ville);

    printf("entrer le code postale :");
    scanf("%s", &p.add.code_postal);

    return p;
}
// fonction permet de afficher personne 
void afficher(personne p){

    printf("\nNom : %s\n", p.nom);
    printf("\nAge : %d\n", p.age);
    printf("\nAdress de personne\n");
    printf("\nRue : %s\n", p.add.rue);
    printf("\nVille : %s\n", p.add.ville);
    printf("\ncode postale : %s\n", p.add.code_postal);   
}


//fonction pour modifier 

void edit(personne p[],int index){

    printf("modifier les information de :%s\n", p[index].nom);

        printf("entrer le nouveu nom :");
        scanf("%s", &p[index].nom);

        printf("entrer le nouveu age :");
        scanf("%d", &p[index].age);

        printf("entrer le nouveu rue :");
        scanf("%s", &p[index].add.rue);

        printf("entrer la nouvelle ville :");
        scanf("%s", &p[index].add.ville);

        printf("entrer le nouveu code postale :");
        scanf("%s", &p[index].add.code_postal);
}


//principal
int main(){

    int choix;
    personne personnes[max];
    int nbr_personne=0;

    for (;;)
    {
        printf("\nles choix :\n");
        printf("\n 1.creer personne\n");
        printf("\n 2.Afficher les personnes\n");
        printf("\n 3.Modifier  personne\n");
        printf("\n 4.supprimer  personne\n");
        printf("\n 5.Quitter\n");
        printf("choissir un choix :");
        scanf("%d", &choix); 

        switch (choix)
        {
        case 1:
            personnes [nbr_personne]=add();
            nbr_personne++;
            printf("le personne est bien ajouter");
            break;
        case 2:
            
          for (int i = 0; i < nbr_personne; i++)
          {
           
            printf("\nNom : %s\n", personnes[i].nom);
            printf("\nAge : %d\n", personnes[i].age);
            printf("\nAdress de personne\n");
            printf("\nRue : %s\n", personnes[i].add.rue);
            printf("\nVille : %s\n", personnes[i].add.ville);
            printf("\ncode postale : %s\n", personnes[i].add.code_postal);
          }
          break;
          case 3:

          int index;
          printf("entrer l'index pour modifier :");
          scanf("%d", &index);
          if (index>=0 && index<nbr_personne)
          {
            edit(personnes,index);
          }
          else
          {
            printf("pas de personne a modifier");
          }
        break;

        default:
            break;
        }
    }
    return 0;
}