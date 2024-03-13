//
// Created by zoblaigg on 12/03/24.
//

#include "to_play.h"


void fonction_debut_jeu(){

    printf("\n************************BIENVENUE AU JEU DU PENDU************************\n\n");
    printf("Veuillez deviner les lettres un a un avant que le bonhomme soit ne soit pendu !\n ");

}


char fonction_recup_lettre(char *tab_tmp_f,int taille) {

    char lettre ;
    int i,   tmp;
    do {
        tmp = TRUE;
        printf("\nSaisir une lettre !\n");
        scanf(" %c",&lettre);

        for (i = 0; i < taille; i++) {
            if ( tab_tmp_f[i] == lettre) {
                printf("la lettre '%c' avait deja ete insere\n",lettre);
                tmp = FALSE;
                break;
            }
        }
    } while (tmp == FALSE);

    return lettre;
}

int fonction_verif_lettre(char* mot_tmp,char * mot, char lettre_f){

    //  printf("MON ERRUER 2");
    int i,tmp =FALSE;
    for (i = 0;i<= strlen(mot); i++){
        if(mot[i] == lettre_f){
            mot_tmp[i]=lettre_f;
            tmp=TRUE;
        }
    }
    return tmp;
}


int fonction_verif_mot_complet(char *tab_tmp,char *mot){
    // si valeur = 0 cela signifie que le joueur a trouver toutes les lettres
    int valeur,tmp = FALSE;

    valeur = strcmp(tab_tmp,mot);

    if( valeur == 0){
        tmp = TRUE;
    }
    return tmp ;
}

