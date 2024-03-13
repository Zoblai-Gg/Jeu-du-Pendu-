//
// Created by zoblaigg on 12/03/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef CPI_TO_PLAY_H
#define CPI_TO_PLAY_H
#define NB_CHANCE 7
#define FALSE 0
#define TRUE 1

char fonction_recup_lettre(char *tab_tmp_f,int taille);
int fonction_verif_lettre(char* mot_tmp,char * mot, char lettre);
void fonction_debut_jeu();
int fonction_verif_mot_complet(char *tab_tmp,char *mot);


#endif //CPI_TO_PLAY_H
