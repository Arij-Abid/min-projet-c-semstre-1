#ifndef ENTRE_SORTIE_H_INCLUDED
#define ENTRE_SORTIE_H_INCLUDED
#define max 50
#include <stdbool.h>

 // fonction d'affichage de couleurs
void Color(int couleurDuTexte,int couleurDeFond)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int saisie_n()
{
    int n;
     do
    {
        printf("Donner N (N>1) :");
        scanf("%d",&n);
    }while(!(n>1));
     return (n);
}
int saisie_n2()
{ int n;
  do
    {
        printf("Donner N (N>2) :");
        scanf("%d",&n);
    }while(!(n>2));
     return (n);
}


int saisie_x3()
{ int x;
     do
    {
        printf("      Donner un entier x (x>1) :");
        scanf("%d",&x);
    }while(!(x>1));
     return (x);
}
int saisie_entier_N()
{int N;
    do
    {
        printf("     Donner N (N>1) :");
        scanf("%d",&N);
    }while(!(N>1));
    return N;
}
int saisie2()
{
    int n;
    do
    {
       printf("      donner  un entier n (n>10) : ");
       scanf("%d",&n);
    }while(!(n>10));
    return (n);
}
int saisie_1()
{
 int n;
  do
    {
        printf("      Donner un entier > 0 : ");
        scanf("%ld",&n);
    }while(!( n>0));
    return (n);
}

//FONCTION REMPLIR
void remplir(int t[],int n)             // t et n : param�tres formels
{
    int i ;                             // i : variable locale
    for(i=0;i<n;i++)
    {
        printf("      T[%d] :",i);
        scanf("%d",&t[i]);
    }
}
void remplir_tableau ( int T[] , int n)
{
    int i ;
    for (i=0 ; i<n ; i++)
        do
        {
            printf("      T[%d] : ",i);
            scanf("%d" , &T[i]) ;
        }while(!(T[i]>=100 && T[i]<=999));
}
//FONCTION AFFICHER
void afficher(int t[],int n)            // t et n : param�tres formels
{
    int i ;                             // i : variable locale
    printf("      | ");
    for(i=0;i<n;i++)
    {
        printf("%d | ",t[i]);
    }
    printf("\n") ;
}
//FONCTION SAISIE
int saisie_taille()                     // fonction avec retour et sans parametres
{
    int n ;                             // n : variable locale
    do{
        printf("Saisie n (entre 1 et %d): ",max);
        scanf("%d",&n);
     }while(!(n>1 && n<=max));

     return n ;                         // n : resultat de la fonction saisie_taille
}

//FONCTION SAISIE k
int saisie_k(int n)                     // fonction avec retour et sans parametres
{
    int k ;                             // n : variable locale
    do{
        printf("Donner k : ");
        scanf("%d",&k);
     }while(!(k>0 && k<n));

     return k;                         // n : resultat de la fonction saisie_taille
}

//FONCTION TRANSFERE
void transfere(int T1[],int T2[],int n)
{
    int i,j,k ;
    for(i=0,j=0,k=n-1;i<n;i++)
        if(i%2==1)
        {
            T2[k]=T1[i];
            k--;
        }
        else
        {
           T2[j]=T1[i];
            j++;
        }
}

bool symetrique(int T1[],int n)
{
    int i;
    bool ok=true;
    for(i=0;i<n/2;i++)
        if(T1[i]!=T1[n-i-1])
    {
        ok=false;
        break;
    }
    return ok;
}
//tp3
/****FONCTION SAISIE_TAILLE****/
int saisie_taille_entier()
{
    int x;
    do
    {
        printf("      Donner la taille N : ");
        scanf("%d",&x);
    }while(!(x>1 && x<=50));
    return x;
}
int  saisie_k_entier()
{
    int k;
    do
    {   printf ("      Donner k :  ");
        scanf("%d", &k);
    }while(!((k>=2) && (k<=5)));
    return k;
}
int saisie_a()
{ int a;
    do
    {
        printf("\n       Donner  A (A >= 100) :");
        scanf("%d",&a);
    }while(!(100<=a));
     return a;
}




/****FONCTION REMPLIR****/
void remplir_matrice( int M1[][20] , int n)
{
    int i ,j;
    for (i=0 ; i<n ; i++)
        for (j=0 ; j<n ; j++)
        {
            printf("      M1[%d][%d ]: ",i,j) ;
            scanf("%d" , &M1[i][j]) ;
        }
}
/****FONCTION REMPLIR****/
void remplir_matrice_7( int A[][20] , int n)
{
    int i ,j;
    for (i=0 ; i<n ; i++)
        for (j=0 ; j<n ; j++)
        {
            printf("      A[%d][%d ]: ",i,j) ;
            scanf("%d" , &A[i][j]) ;
        }
}
/*******Fonction SAISIE_TAILLE *******/
int  saisie_taille_matrice_7()
{
    int n;
    do
    {   printf("      Donner la taille  de dimension impaire de la matrice :  ");
        scanf("%d", &n);
    }while(!((n>2) && (n<=20)&& n%2==1));
    return n;
}
/******* Fonction AFFICHER **********/
void affiche_matrice(int M1[][20],int n)
{
    int i ,j;
    for (i=0 ; i<n ; i++)
    {
        for (j=0 ; j<n ; j++)
        printf("      %d\t", M1[i][j]);
        printf("\n");
    }
}
void affiche_matrice_7(int A[][20],int n)
{
    int i,j;
    for (i=0 ;i<n ;i++)
    {
        for (j=0;j<n ;j++)
        printf("      %d\t",A[i][j]);
        printf("\n");
    }
}
int symetrique_matrice(int M1[][20],int n)
{
    int i,j,ok=1;
    for(i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
            if(M1[i][j]!=M1[j][i])
        {
            ok=0;
            break;
        }
        if(ok==0)
            break;

    }
    return ok;
}

/****TP4****/
void enregistrement_mat_non_carre(int t[][50], int n, int m, char * nomfichier)
{
    int i,j;
    FILE *file;
    file = fopen(nomfichier,"Voix.txt");
    fprintf(file,"%d\n",n);
    fprintf(file,"%d\n",m);
    for(i =0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            fprintf(file,"%d ",t[i][j]);
        }
        fprintf(file,"\n");
    }
    printf ("\nEnregistrement de la Matrice dans le fichier %s \n",nomfichier);
    fclose(file);

}

int recuperation_mat_non_carre(int t[][50],int *n,int *m, char *nomfichier)
{
    int i,j,x,y,f,w=0;
    FILE *fp;
    fp= fopen(nomfichier,"r");
    if(fp != NULL)
    {
        fscanf(fp,"%d\n",&y);
        fscanf(fp,"%d\n",&f);
        if(y && f)
        {   w=1;
            for(i=1;i<=y;i++)
                for(j=1;j<=f;j++)
                {
                    fscanf(fp,"%d ",&x);
                    t[i-1][j-1]=x;
                }
                *n=y;
                *m=f;

            }
    }
    else
        printf("\n Fichier vide \n");
   return w;
}

int saisie_taille_ex3()
{
    int x;
    do
    {
        printf("      Donner la taille N : ");
        scanf("%d",&x);
    }while(!(x>1 && x<=50));
    return x;
}
int verif(int t[], int i, int x)
{
    int j , ok=0;
    for(j=0; j <i; j++)
        if (t[j]==x)
        {
            ok=1;
            break;
        }
    return ok;
}
/****FONCTION REMPLIR****/
void remplir_ex3 ( int T[] , int n)
{
    int i ;
    for (i=0 ; i<n ; i++)
        do
        {
            printf("T[%d] : ",i) ;
            scanf("%d" , &T[i]) ;
        }while (!(T[i]>0 && verif(T, i, T[i])==0));
}

int posmax(int t[],int n)
{
    int i, pm=0;
    for(i=1; i<n ; i++)
        if(t[i]>t[pm])
            pm=i;
    return pm;
}
void tri(int t[], int B[],int n)
{
    int i, pm;
    for(i=0; i<n ;i++)
    {
        pm=posmax(t, n);
        B[i]=t[pm];
        t[pm]=-1;
    }
}

/******* Fonction AFFICHER **********/
void affiche(int T[],int n)
{
    int i;
    printf("       | ");
    for(i=0; i<n;i++)
        printf("%d | ", T[i]);
    printf("\n");
}

void insertion(int t[], int n)
{
    int j,pos,val;
    printf("Donner val : ");
    scanf("%d",&val);
    do
    {
        printf("Donner pos (pos>=0 et pos<=%d) : ",n);
        scanf("%d",&pos);
    }while(!(pos>=0 && pos <=n));

    for(j=n; j>pos ; j--)
        t[j]=t[j-1];
    t[pos]=val;

}
int minimum(int t[],int n)
{
    int i,min=t[0];
    for(i=1; i<n;i++)
        if(t[i]<min)
            min =t[i];
    return min;
}
void recherche1(int t[],int n)
{
    int A,i,V[50],nv=0;
   Color(13,0);
    printf("      Donner A : ");
    scanf("%d",&A);

    for (i=0; i<n ;i++)
    {
        if(t[i]>A)
        {
            V[nv]=t[i];
            nv++;
        }
    }
    if(nv)
    {   Color(7,0);
        printf("      Les entiers qui sont > de %d dans le tableau  T sont :",      A);
        printf("\n      ");
         Color(3,0);
         affiche(V,nv);
         Color(7,0);
         printf("      Le plus petit des entiers qui sont > de %d = %d",      A,minimum(V,nv));

    }
    else
        printf("      Il n'existe pas des entiers qui sont > a %d\n",      A);


}
int compter(int t[], int n , int x)
{
    int cp=0, i;
    for(i=0; i<n ; i++)
        if(t[i]==x)
            cp++;
    return cp;
}
void recherche2(int t[],int n)
{
    int i,cp,m_max,y;
    m_max= compter(t,n,t[0]);
    y=t[0];
    for(i=1;i<n;i++)
    {
        cp=compter(t,n,t[i]);
        if(cp>m_max)
        {
            m_max=cp;
            y=t[i];
        }
    }
    printf("      l'entier qui apparait le plus dan T = %d est son nombre d'occurrences. = %d\n",y,m_max);
}

void recherche3(int t[],int n)
{
    int i ,cp=1,lmax=1,posd,posf;
    for(i=1;i<n;i++)
    {
        if(t[i]-t[i-1]==0)
        {
            cp++;
            if(cp>lmax)
            {
                lmax=cp;
                posd=i-cp+1;
                posf=i;
            }
        }
        else
            cp=1;
    }
    if(lmax>1)

    { printf(" Resulat :\n");
        printf("      Le plus long plateau commence par %d se termine par %d et de longueur %d\n",posd+1,posf+1,lmax);
    }
    else

        printf("      Il n'existe pas une s%cquence d'entiers cons%ccutifs dans T\n",130,130);
}

/*************Exersice 6 tp 3************/
void rechercher_colonne(int M2[][max],int l,int c)
{
    int j,i,q,verif_m=0 ,min,f,val;

    for (i=0 ; i<l ; i++)
        {
            min = M2[i][0];
            f = 0;
            for (j=0 ; j<c ; j++)
                if (min > M2[i][j])
                {
                    min = M2[i][j];
                    f=j;
                }
            val = M2[0][f];
            for (q=0 ; q<l ; q++)
            {
                if (val < M2[q][f])
                    val = M2[q][f];
            }
            if ( val == min)
            {
                verif_m= 1;
                printf("\n      M2 (%d,%d) = %d est un point COL \n\n",i,f,val);
                for (j=f+1;j<c;j++)
                    if (min == M2[i][j])
                    {
                        printf("\n      M2 (%d,%d) = %d est un point COL \n\n",i,j,val);
                    }
            }
        }

    if (!(verif_m==1))
    {
        printf("\n      M2 n'a aucun point COL \n\n");
    }

}
int saisir_Nombre_lignes_matrice()
{
    int l;
     printf("      saisir les nombres des lignes: ");
     scanf("%d",&l);
   return l;
}
int saisir_Nombre_colonne_matrice()
{
 int c;
  printf("      saisir le nombres des colonnes: ");
  scanf("%d",&c);
  return c;
}

void remplir_mat(int M2[][max],int l,int c)
{
    int i ,j;

    for (i=0 ; i<l ; i++)
       for (j=0 ; j<c; j++)
        {
         printf("      Element M2[%d][%d] : ",i,j);
         scanf("%d", &M2[i][j]);
        }
}
 void affiche_mat(int M2[][max],int l,int c)
 {int i,j;
     for (i=0; i<l;i++)
    {
     for (j=0; j<c;j++)
         printf("      %7d", M2[i][j]);
     printf("\n");
    }
 }
#endif // ENTRE_SORTIE_H_INCLUDED

