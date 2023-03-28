#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "entre_sortie.h"
#include <time.h>
#include <math.h>
void tp2_ex1()
{
long int n,s=0,a;
int i,j,k;
    Color(10,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 1**************************************\n");

 //printf("    *************** code p***************");
    for(i=0;i<=11;i++)
     {
         for(j=0;j<=2;j++)
         {
           printf("*");
         }
         for(k=1;k<=5;k++)
         {
          if(i>=0&&i<2||i>4&&i<=7||i>=2&&i<=4&&k==5)
          {
           printf("**");
          }
          else
          {
           printf("  ");
          }
         }

     printf("\n");
    }
//printf("    *************** code o ***************");
  gotoxy(20,0);
 for(i=0;i<=11;i++)

 {
 for(j=0;j<=2;j++)
 {
  if(i==0&&j<2||i==1&&j<2||i==11&&j<2||i==10&&j<1)
  {
   printf(" ");
  }
  else
  {
   printf("*");
  }
 }
 for(k=1;k<=6;k++)
 {
  if(i>=0&&i<2||i>9&&i<=11)
  {
   printf("**");
  }
  else
  {
   printf("  ");
  }
 }
  for(j=0;j<=2;j++)
 {
  if(i==0&&j>0||i==1&&j>1||i==11&&j>0||i==10&&j>1)
  {
   printf(" ");
  }
  else
  {
   printf("*");
  }

}

 printf("\n");
}


/*
  for(i=0;i<=11;i++)
    {  //gotoxy(50,i);
            for(j=0;j<=2;j++)
             {
                  printf("*");
             }
               for(k=1; k<=5;k++)
                {
                    if(i>=0 && i<2 || i>4 && i<7 || i>=2 && i<=4 && k==5)
                      {
                         printf("**");
                      }
                    else
                      {
                          printf(" ");
                      }
                }

    printf("\n");
    }
    */

  /*

    for(i=1; i<=6; i++)
    {  gotoxy(50,i);
        // Print leading spaces
        for(j=i; j<6; j++)
        {
            printf(" ");
        }
        // Print star
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        // Move to next line
        printf("\n");
    }


*/


    Color(14,0);
  n=saisie_1();
    while(n!=0)
    {
        a= n%10;
        s=s*10+a;
        n=n/10;
    }
    Color(11,0);
    printf("      Le resultat = %ld \n",s);
    Color(13,0);
     printf("\n     **************************************\n     ==> Le role de cet programme est d'inverser l'entier      \n     *****************************************\n\n");
     printf("\n      ");
    Color(15,0);
}
void tp2_ex2()
{
 int n,i;
    float s;
    Color(10,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 2**************************************\n");
    Color(14,0);
    do
    {
      printf("      donner un entier : ");
      scanf("%d",&n);
    }while(n<=2);

       for(s=0,i=1;i<=n;i++)
        s+=(float)1/pow(i,2);
    Color(11,0);
    printf("\n       La somme est egale a %f \n",s);
    printf("\n      ");
    Color(15,0);
}
void tp2_ex3()
{
    int n,i,k=1;
    float s=0;
    Color(10,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 3**************************************\n");
    Color(14,0);
    n=saisie_n2();

 Color(15,0);
    for (i=1;i<=n;i++)
    {
        if (i>1)
        {
        if(k>0)
         printf("+1/%d",i*i);
        else
         printf("-1/%d",i*i);
        }
        else
           printf("1/%d",i*i);

        s=s+ k*(1.0/(i*i));
        k=k*(-1);
    }
     Color(11,0);
    printf(" \n la somme = %f  \n",s);
    printf("\n      ");
    Color(15,0);
}
void tp2_ex4()
{
  int N , x , i , cp, u , d, c ,m;
    Color(10,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 4**************************************\n");
    Color(12,0);
    //gotoxy(10,3);
    N=saisie_entier_N();
    Color(14,0);
    printf("\n     **************************************\n     les entiers de la suite :     \n     *****************************************\n\n");
    Color(13,0);
    for(i=1,cp=0;i<=N; i++)
    {
        do
        {
            printf("     Donner l'entier %d de la suite :",i);
            scanf("%d",&x);
        }while(!(x>=1000 && x<=9999));

        u=x%10;
        d=(x/10)%10;
        c=(x/100)%10;
        m=x/1000;
        if(u%m==0 && d%m==0 && c%m==0)
            cp++;
    }
    Color(11,0);
    if(cp!=0) //if(cp)
        printf("     Resultat : il y a %d entiers valables dans la suite\n",cp);
    else
        printf("     Resultat :  il n'existe pas des entiers valables dans la suite\n");
    printf("\n      ");
    Color(15,0);
}
void tp2_ex5()
{
 int x,cp,i;
    Color(14,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 5**************************************\n");
    Color(10,0);
    printf("\n      ************************************\n      Facteurs premiers      \n      ******************************\n\n");
    Color(13,0);
    x=saisie_x3();
    Color(9,0);
    printf("\n      Resulat : %d = ",x);
    i=2;
    cp=1;
    do
    {
        if (x%i==0)
        {
            if(cp==1)
                printf(" %d ",i);
            else
                printf("* %d",i);

            cp++;
            x=x/i;
        }
        else
            i++;

    }while(x!=1);
    printf("\n\n");
    printf("\n      ");
    Color(15,0);
}
void tp2_ex6()
{
int a,b,i,ok=0,r=0,s,j,n,m;
    Color(14,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 6**************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Afficher tous les entiers palindrome-premiers \n      ********************\n\n");
    Color(13,0);
    a=saisie_a();
 do
    {
        printf("\n       Donner B: ");
        scanf("%d",&b);
    }while(!(a<b));
 Color(7,0);
    for (i=a;i<b;i++)
    {
        m=i;
        s=0;
        while (m!=0)
        {
            n=m%10;
            s=s*10+n;
            m=m/10;

            if( s == i){
                for(j=2,ok=1;j<=i/2;j++)
                    if(i%j==0)
                    {
                        ok=0;
                        r=1;
                        break;
                    }
                    if (ok)
                    {
                        printf("\n      %d est un entier palindrome-premier.\n",i);
                        r=0;
                    }
            }
        }
    }
    if (ok==0 && r==0)
        printf("\n      Il n'y a pas des entiers palindrome-premiers entre %d et %d.\n",a,b);
        printf("\n      ");
        Color(15,0);
}
void tp2_ex7()
{
    long int n,x;
    int pos,ok;
    int rep;
     Color(11,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 7**************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Nombres totalement impaire \n      ********************\n\n");
    Color(13,0);
    n=saisie2();

    ok=1;
    pos=1;
    x=n;
    while(n!=0)//while(nb)
    {
        if( ((n%10)%2==0 && pos%2==1)||((n%10)%2==1 && pos%2==0))
        {
            ok=0;
            break;
        }
        n=n/10;
        pos++;
    }
   Color(14,0);
    printf("      Resultat :\n");
    Color(7,0);
    if(ok)

        printf("      %ld est totalement impair\n",x);
    else
         printf("      %ld est pas totalement impair\n",x);
    Color(15,0);
}
void tp2_ex8()
{
 int  x, ok;//x et ok : variables locaux
    Color(11,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 8**************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Entiers premiers \n      ********************\n\n");
    Color(13,0);
    /*****FONCTION SAISIE******/
    x=saisie_x3();
    Color(14,0);
    /*****FONCTION premier******/
    int premier(int x) // x : parmetre formel
    {
        int i , ok; //i et ok : variables locaux
        for(i=2, ok=1; i<=x/2;i++)
            if(x%i==0)
            {
                ok=0;
                break;
            }
         return ok; // ok : résultat de la fonction
    }
    /*****FONCTION affiche******/
    void affiche(int x )
    {
        if(premier(x)) //if(premier(x)!=0)
            printf("      %d est premier\n",x);
        else
            printf("      %d n'est pas premier\n",x);
    }
    affiche(x);
     printf("\n      ");
     Color(15,0);
}

void tp2_ex9()
{int a, b, d=0, i,r,s,x;
    Color(11,0);
    gotoxy(10,3);
    printf("                           ***************************************************\n");
    printf("      ****************************************TP 2 : Exercice 9**************************************\n");
    Color(10,0);
    printf("\n      ********************\n      Nombre Heureux \n      ********************\n\n");
    Color(12,0);
    do
    {
        printf("\n      Donner A ( A >= 50) : ");
        scanf("%d",&a);
    }while(!(a>=50 && a<=500));

    do
    {
        printf("\n      Donner B ( B > %d et <= 500) : " , a);
        scanf("%d",&b);
    }while(!(b>a && b<=500));
    Color(14,0);
    for(i=a ; i<=b ; i++)
    {
        x=i;
        do
        {
            s=0;
            while(x!=0)
            {
                r=x%10;
                s=s+r*r;
                x=x/10;
            }
            x=s;

        }while(x>9);

        if(x==1)
        {
            if (d==0)
            {
              printf("\n      | ");
              printf("%d | ",i);
              d=1;

            }
            else
                printf("%d | ",i);
         }
}
    if (x==0)
        printf("\n      Pas d'entiers heuruex entre %d et %d.",a,b);

    printf("\n      ");
    Color(15,0);
}












