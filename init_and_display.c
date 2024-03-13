//
// Created by zoblaigg on 12/03/24.
//

#include "init_and_display.h"
#include "to_play.h"

void fonction_affiche(char *tab_tmp,int taille){
    int i;
    for(i =0;i< taille; i++){
        printf(" %c ",tab_tmp[i]);
    }
    printf("\n");

}
char ** fonction_creation_dico(int taille)
{
    int i=0;
    char mot_tmp[20];

    char **dico= (char **)malloc(taille*sizeof(char *));
    if(dico == NULL){
        printf("ERREUR malloc");
        exit(EXIT_FAILURE);
    }
    for(i = 0;i< taille; i++){
        printf("Veuillez saisir le mot numero %d\n",i+1);
        scanf("%s",mot_tmp);
        dico[i] = (char *)malloc((strlen(mot_tmp)+1)*sizeof(char));
        strcpy(dico[i],mot_tmp);
    }

    return dico;
}

void fonction_liberation(char *** dico,int taille){
    int i;
    for(i = 0;i <taille; i++){
        printf(" jr suis rentré \n");
        free(*dico[i]);
    }
    free(dico);

    return;
}

char* fonction_pioche_alea(char **dico,int max)
{
    int nombre_alea;
    nombre_alea= rand()%max ;
    return dico[nombre_alea];
}
void fonction_affich_bonhomme(int cpt_f) {

    int i, valeur = 2;

    if (cpt_f == 0) {
        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 5; i++) {
            if (i == 0) { printf(" ||\t\t |\n"); }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 1) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 5; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 2) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 4; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 3) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 1; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
                printf(" ||");
                printf(" \t\t/\n");
                printf(" ||");
                printf(" \t       /\n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 4) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 1; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
                printf(" ||");
                printf(" \t\t/ \\ \n");
                printf(" ||");
                printf(" \t       /   \\ \n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 5) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 1; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
                printf(" ||");
                printf(" \t\t/|\\ \n");
                printf(" ||");
                printf(" \t       / | \\ \n");
                printf(" ||");
                printf(" \t         | \n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 6) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 1; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
                printf(" ||");
                printf(" \t\t/|\\ \n");
                printf(" ||");
                printf(" \t       / | \\ \n");
                printf(" ||");
                printf(" \t         | \n");
                printf(" ||");
                printf(" \t\t/ \n");
                printf(" ||");
                printf(" \t       / \n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    } else if (cpt_f == 7) {

        for (i = 0; i < valeur + 3; i++) {
            printf(" == ");
        }
        printf("\n");
        for (i = 0; i < valeur + 1; i++) {
            if (i == 0) {
                printf(" ||\t\t |\n ||");
                printf(" \t\t 0\n");
                printf(" ||");
                printf(" \t\t |\n");
                printf(" ||");
                printf(" \t\t/|\\ \n");
                printf(" ||");
                printf(" \t       / | \\ \n");
                printf(" ||");
                printf(" \t         | \n");
                printf(" ||");
                printf(" \t\t/ \\ \n");
                printf(" ||");
                printf(" \t       /   \\ \n");
            }
            printf(" || \n");
        }
        printf("========================\n");
    }

    return;
}