#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choix;
    const int MAX = 100 ,MIN = 0;
    int nombreMystere;
    int nombreDeviner = 256;
    int i = 0;


   printf("Single player tape 1 \n");
   printf("Multiplayer tape 2\n");
   scanf("%d",&choix);

    switch (choix) {
        case 1:
            printf("Nombre choisi aléatoirement ...\n");
            srand(time(NULL));
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
            break;
        case 2:
            do {
                printf("Choisir un nombre entre 1 et 100: \n");
                scanf("%d", &nombreMystere);
            }while (nombreMystere<0||nombreMystere>101);
            break;
        default:
            printf("Choisir un vrai nombre de la liste !");
    }
    while (nombreMystere != nombreDeviner){
        printf("Quel est le nombre ?\n");
        scanf("%d",&nombreDeviner);
        nombreMystere>nombreDeviner? printf("C'est Plus !\n") : printf("C'est moins\n");
        i++;
    }
    printf("Et c'est win ! en %d essai",i);

}
