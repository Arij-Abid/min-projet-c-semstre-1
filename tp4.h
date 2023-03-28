#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "entre_sortie.h"
#include <stdbool.h>
#define max 50

void tp4_exrcice1()
{int l=24,c=8,i;
int Voix[l][c];
int Sieges[l][c];
int quotient_electoral[l];
void saisie_voix(int l,int c,int Voix[l][c],char* NomFichierVoix)
{
    int i,j;
    char gouvernorats[24][10]={"tunis","ariana","manouba","benArous","Nabeul","Sousse","monastir","mahdia","sfax","gabes","mednine","tataouine","gafsa","tozeur","kebibi","kairouan","tela","siliana","kef","jendouba","beja","kasserine","bizerte","zagouan"};
    char partis_politiques[8][10]={"Annahtha","TAILLAR","UDL  ","FrontP ","JOMH  ","PDM  ","AFEK ","sieges"};
    FILE *F=NULL;
    fflush(stdin);
    F=fopen(NomFichierVoix,"r");
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
              fscanf(F,"%d",&Voix[i][j]);
        }
    fclose(F);
    printf("matrice Voix : \n\n");
    printf("%20s",partis_politiques[0]);
    for(i=1;i<8;i++)
    printf("%8s",partis_politiques[i]);
    printf("\n\n");

    for(i=0;i<l;i++)
        {
            printf("%10s",gouvernorats[i]);
            for(j=0;j<c;j++)
              printf("%8d",Voix[i][j]);
              printf("\n");
        }
    }
}
