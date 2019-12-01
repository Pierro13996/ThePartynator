#include <stdio.h>
#include "fichier.h"
#include <stdlib.h>
#include "struct.h"


int main(int argc, char const *argv[])
{
    FETE * soiree = (struct FETE *)malloc(sizeof(struct FETE));
    FETE * copy = (struct FETE *)malloc(sizeof(struct FETE));

    char * buffer;
    /* code */
    FILE *fp;
    fp = fopen("./test.txt", "wb+");

    if (fp == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }  

    soiree = save_evenement();

    fwrite(soiree, sizeof(struct FETE), 1 , fp);
    fclose(fp);

    FILE * infile  = fopen("./test.txt", "r");

    if (infile == NULL) 
    { 
        fprintf(stderr, "\nError opening file\n"); 
        exit (1); 
    } 

    // fprintf(fp, "%s", "hello world");
    while(fread(copy, sizeof(struct FETE) ,1, infile)){

    printf("%s", copy->date);
    printf("%s", copy->lieu);

    }

    return 0;
}


