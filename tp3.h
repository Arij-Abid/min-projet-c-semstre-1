#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "entre_sortie.h"
#include <time.h>
#include <stdbool.h>
#define max 50


 void tp3_ex1()
{
  int N, T1[max],T2[max],n1,n2,k ;

    printf("\n ************************\n  Transfere d'un tableau \n ************************\n\n",130,130);
   // n=recuperation(T,"tab1.txt");
   printf("**** CHARGEMENT DE T1 *****\n");
    n1= saisie_taille() ;
    remplir(T1,n1) ;
    printf("**** CHARGEMENT DE T2 *****\n");
    n2= saisie_taille() ;
    remplir(T2,n2) ;

    printf("\n*** CONTENU DE T1 ***\n");
    afficher(T1,n1);

    printf("\n*** CONTENU DE T2***\n");
    afficher(T2,n2);
    printf("\n*** transfere***\n");
    transfere(T1,T2,N);
    afficher(T1,n1);
}
void tp3_ex1_symetrie()
{
   int  T1[max],n;
    //Color(12,0);
    printf("\n ********************\n  fonction symetrique \n ********************\n\n",130,130);
   // Color(10,0);
    printf(" Tableau 2: \n\n");
   // Color(14,0);
    afficher(T1,n);
   // Color(7,0);
    if(symetrique(T1,n))//ou if(symetrique(t)==true)
       printf("t est symetrique ");
   else
     printf("t est n'est pas symetrique ");
     printf("\n      ");
    Color(15,0);
}
void tp3_exrcice1_inverse()
{

}

void tp3_exrcice2_element_superieur()
{
 int t[max];
    int n;
    Color(14,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 2**************************************\n");
    Color(10,0);
    printf("\n      ********************\n      REMPLISSAGE DE A \n      ********************\n\n");
    Color(13,0);
    n=saisie_taille_ex3();
    Color(7,0);
    remplir(t,n);

    printf("\n*** CONTENU DE T ***\n");
    Color(14,0);
    affiche(t,n);
     printf("\n      ");
   Color(7,0);
    recherche1(t, n);
     printf("\n      ");
    //recherche2(t, n);
     printf("\n      ");
     Color(15,0);
}
void tp3_exrcice2_occurence()
{
    int t[max],n;
    Color(14,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 2**************************************\n");
    Color(10,0);
    printf("\n      ********************\n     les nombres d'occurences de T \n      ********************\n\n");
    Color(13,0);
    n=saisie_taille_ex3();
    remplir(t,n);
    printf("\n      *** CONTENU DE T ***\n");
    Color(14,0);
    affiche(t,n);
    printf("\n      ");
    Color(7,0);
     printf("\n      ");
    Color(12,0);
    recherche2(t,n);
    printf("\n      ");
     Color(15,0);

}
void tp3_exrcice2_plateau()
{
    int t[max],n;
    Color(14,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      **************************************** TP 3 : Exercice 2 **************************************\n");
    Color(10,0);
    printf("\n      ********************\n     les nombres plateau de T \n      ********************\n\n");
    Color(13,0);
    n=saisie_taille_ex3();
    Color(7,0);
    remplir(t,n);
    Color(13,0);
    printf("\n      *** CONTENU DE T ***\n");
    Color(14,0);
    affiche(t,n);
     printf("\n      ");
    Color(7,0);
     printf("\n      ");
    Color(12,0);
     recherche3(t, n);
     printf("\n      ");
     Color(15,0);
}
void tp3_exrcice3()
{
int t[max],B[max];
    int n;
    printf("\n***REMPLISSAGE DE A***\n");
    n=saisie_taille_ex3();
    remplir_ex3(t,n);
    printf("\n*** CONTENU DE T ***\n");
    affiche(t,n);
    tri(t,  B, n);
    printf("\n*** CONTENU DE B ***\n");
    affiche(B,n);

    //recherche1(t, n);
    //recherche2(t, n);
    //recherche3(t, n);
     printf("\n      ");
     Color(15,0);
}

void tp3_exrcice4()
{
 int T[max],n,k;
    Color(12,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 4 **************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Nombres k-pp (presque premiers) \n      ********************\n\n");
    Color(13,0);
    n=saisie_taille_entier();
    remplir_tableau(T,n);
     Color(14,0);
    /*******Fonction SAISIE_K *******/
    k=saisie_k_entier();
    Color(7,0);
void recherche (int T[],int n,int k)
{
    int i,cp = 0,x,v[50],nv,j,m;
    for(i=0 ; i<n ; i++)
    {
        x = T[i];
        nv = 0 ;
        j = 2;
        do
        {
            if ( (x % j) == 0)
            {
              v[nv]= j;
              nv++;
              x = x/j;

            }
            else
                j++;
        }while(x!=1);
        if (nv == k)
        {
            cp++ ;
            Color(11,0);
            if (cp == 1)
                printf("      les %d pp  de T sont : \n ",k);
                printf("      %d = %d ",T[i],v[0]);
            for (m=1;m<nv;m++)
                printf("*%d",v[m]);
            printf("      \n");
        }
    }

    if(cp==0)
         printf("      Il n'existe pas des %d pp  dans T \n ",k);
}

    printf("\n      *****CONTENU DE T AVANT TRI****\n");
    Color(14,0);
   afficher(T,n);
   recherche(T,n,k);
   printf("\n      ");
    Color(15,0);

}
void tp3_exrcice5()
{
    int m1[20][20],n;
    Color(12,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 5 **************************************\n");
    Color(10,0);
    printf("\n      ********************\n      REMPLISSAGE DE M1 \n      ********************\n\n");
    Color(13,0);
    n=saisie_taille_entier();
    Color(14,0);
    remplir_matrice(m1,n);
    Color(13,0);
    printf("\n      *** CONTENU DE M1 ***\n");
    Color(11,0);
    affiche_matrice(m1,n);
    printf("\n");
    if(symetrique_matrice(m1,n))
        printf("      M1 est symetrique\n");
    else
        printf("      M1 n'est pas symetrique\n");
    printf("\n      ");
    Color(15,0);

}
void tp3_exrcice6()
{
int l,c,m[max][max],i,j;
    Color(12,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 6 **************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Affichage les colonnes  M 2 \n      ********************\n\n");
    Color(13,0);
    l=saisir_Nombre_lignes_matrice("lignes\0");
    Color(14,0);
    c=saisir_Nombre_colonne_matrice("colonnes\0");
    printf("\n");
    Color(11,0);
    remplir_mat(m,l,c);
    Color(7,0);
    printf("\n      **********************CONTENU DE M 2 *********************\n");
    Color(14,0);
    affiche_mat(m,l,c);
     Color(7,0);
    printf("\n      *********************** Resultats *********************\n");
    Color(10,0);
    rechercher_colonne(m,l,c);
    printf("\n      ");
    Color(15,0);

}
void tp3_exrcice7()
{
    int A[20][20],n;
   Color(13,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 3 : Exercice 7 **************************************\n");
    Color(10,0);
    printf("\n      ********************\n    Matrice Magique \n      ********************\n\n");
    Color(14,0);
    n=saisie_taille_matrice_7();
    Color(12,0);
    remplir_matrice_7(A,n);
    Color(14,0);
    printf("\n      ********************* CONTENU DE A ******************\n");
    Color(12,0);
    affiche_matrice_7(A,n);
    int somme_ligne(int A[][20],int n,int L)
{
     int j, s=0;
     for(j=0;j<n;j++)
        s=s+A[L][j];
     return s;
}
int somme_colonne (int A[][20],int n,int C)
{
     int i, s=0;
     for(i=0;i<n;i++)
        s=s+A[i][C];
     return s;
}
int somme_diag1(int A[][20],int n)
{
     int i, s=0;
     for(i=0;i<n;i++)
        s=s+A[i][i];
     return s;
}
int somme_diag2(int A[][20],int n)
{
     int i,s=0;
     for(i=0;i<n;i++)
        s=s+A[i][n-i-1];
     return s;
}

void magique(int A[][20],int n)
{
    int i,j,s=somme_ligne( A,n,0),ok=1;
    for(i=1; i<n ; i++)
        if(s!=somme_ligne( A,n,i))
        {
            ok=0;
            break;
        }
    if(ok)
    {
        for(j=0; j<n ; j++)
            if(s!=somme_colonne ( A,n,j))
            {
                ok=0;
                break;
            }
        if(s!=somme_diag1( A,n))
            ok=0;
        if(s!=somme_diag2( A,n))
            ok=0;
    }
    if(ok)
        printf("      A est magique\n");
    else
        printf("      A est non magique\n");

}   printf("\n");
    Color(3,0);
    magique(A,n);
    printf("\n      ");
    Color(15,0);
}
