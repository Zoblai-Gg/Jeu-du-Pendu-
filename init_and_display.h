//
// Created by zoblaigg on 12/03/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef CPI_INIT_AND_DISPLAY_H
#define CPI_INIT_AND_DISPLAY_H

char ** fonction_creation_dico(int taille);
//void fonction_liberation(char *** dico,int taille);
char* fonction_pioche_alea(char **dico,int max);
void fonction_affich_bonhomme(int cpt_f);
void fonction_affiche(char *tab_tmp,int taille);
#endif //CPI_INIT_AND_DISPLAY_H
