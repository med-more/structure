#include<stdio.h>
#include<string.h>

 struct personne
{
    char nom[50];
    int age;
    struct Ad adress; 
};

 struct Ad
{
    char rue[50];
    char ville[60];
    char code_postale[50];
};

int main(){


for (int i = 0; i < 5; i++)
{
 struct personne p1[i];
 printf("entrer le nom :\n");
scanf("%s", &p1[i].nom);

printf("entrer le l'age :\n");
scanf("%s", &p1[i].age);

printf("entrer le rue :\n");
scanf("%s", &p1[i].adress.rue);

printf("entrer la ville :\n");
scanf("%s", &p1[i].adress.ville);

printf("entrer le code postale :\n");
scanf("%s", &p1[i].adress.code_postale); 
}

printf("------------------les information----------------");

for (int i = 0; i < 5; i++)
{
 struct personne p1[i];

 printf("Nom: %s\n", p1[i].nom);
 printf("age: %s\n", p1[i].age);
 printf("adress: %s\n", p1[i].adress.rue);
 printf("ville: %s\n", p1[i].adress.ville);
 printf("code postale: %s\n", p1[i].adress.code_postale);
}



}

