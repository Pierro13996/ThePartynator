
#include "struct.h"

FETE * save_evenement(){
    int nb_personne;
    FETE * soiree =  (struct FETE *)malloc(sizeof(struct FETE));
    PARTICIPANT * part = (struct PARTICIPANT *)malloc(sizeof(struct PARTICIPANT));;
    printf("Quand? \n");
    scanf("%s", soiree->date);
    printf("Ou? \n");
    scanf("%s", soiree->lieu);
    printf("Combien de personne? \n");
    scanf("%d", &nb_personne);
    for (int i =0 ; i < nb_personne; i++){
        printf("Nom? \n");
        scanf("%s", soiree->participants[i].prenom);
    }
    return soiree;
}