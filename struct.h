#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct PARTICIPANT
{
    char prenom[20];
    char nom[20];
    char mail[100];
    bool organisateur;

} PARTICIPANT;

typedef struct FETE
{
    char date[20]; // format JJ/MM/AAAA
    char lieu[50];
    char heure[50];               // format HH:MM
    PARTICIPANT participants[50]; // projet x ma geule (en vrai c'est la liste des invités)
    char item[][50];              // Liste des courses
} FETE;

FETE * save_evenement();