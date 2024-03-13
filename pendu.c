#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "init_and_display.h"
#include "to_play.h"
#define NB_CHANCE 7
#define FALSE 0
#define TRUE 1





int main (void){

    srand(time(NULL));
    int nb_mot,i,j,k;
    char ** dictionnaire = NULL;
    char* mot_a_devine;

    do {
        printf("Vous voulez un dictonnaire de combien de mots ?\n");
        scanf("%d",&nb_mot);
    } while (nb_mot <1);

    dictionnaire = fonction_creation_dico(nb_mot);
    mot_a_devine = fonction_pioche_alea(dictionnaire,nb_mot);

    char lettre ;
    int t_mot_dev= strlen(mot_a_devine),tmp_l,tmp_m,cpt=0;
    char  *tab_tmp=(char*)malloc((t_mot_dev+1)*sizeof(char));

    for(i=0;i <= strlen(mot_a_devine); i++){
        if(i == strlen(mot_a_devine)){
            tab_tmp[i] = '\0';
        }
        else{
            tab_tmp[i] = '_';
        }
    }
    fonction_affich_bonhomme(cpt);
    fonction_affiche(tab_tmp,t_mot_dev);

    do
    {
        lettre =fonction_recup_lettre(tab_tmp,t_mot_dev);
        tmp_l=fonction_verif_lettre(tab_tmp,mot_a_devine,lettre);

        if( tmp_l == FALSE){
            cpt++;
            printf("Dommage la lettre '%c' ne fait pas parti du mot\n",lettre);
            fonction_affich_bonhomme(cpt);
            fonction_affiche(tab_tmp,t_mot_dev);

        }
        else{

            printf("Bravo la lettre '%c' fait  parti du mot\n",lettre);
            fonction_affich_bonhomme(cpt);
            fonction_affiche(tab_tmp,t_mot_dev);
        }
        tmp_m =fonction_verif_mot_complet(tab_tmp,mot_a_devine);
        if(tmp_m == TRUE){
            printf("\nBravo vous avez devine toutes les lettres du mot\n");
            break;
        }
        if(cpt == NB_CHANCE){
            printf("Dommage,nombre d'essai depasse\n" );
        }

    }while(cpt != NB_CHANCE );

    free(mot_a_devine);
   // fonction_liberation(&dictionnaire,nb_mot);
    return 0;
}



