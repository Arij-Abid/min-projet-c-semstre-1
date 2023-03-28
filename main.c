#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <myconio.h>
#include <stdio.h>
#include <windows.h>
#include "tp2.h"
#include "tp3.h"
#include "tp4.h"



/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void addmenus(HWND);
void CreateBtt(HWND hwnd) ;

HWND hname ,hage,hout,hogo,Add,Finnish;
 HDC hdc;
HMENU hmenu ;

HBITMAP hlogoImage , hgenerateImage;
int intro=1 ;
char ch[30] ;
long p ;
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("My project");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */

    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    //wincl.hIconSm = LoadIcon(NULL, MAKEINTRESOURCE("c"));
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND+7;


    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Mini Projet C"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1250,                 /* The programs width */
           768,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{static HBITMAP  hBmp;


   /* if(intro)
    {
        system("start test.exe") ;
        intro=0;
    }*/

    switch (message)                  /* handle the messages */
    {

        case WM_COMMAND:
        switch(wParam)
        {
       case 0:
               ShellExecute(0,"open","TP2.pdf",NULL,NULL,1);
                break;
        case 1:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp2_ex1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 2:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp2_ex2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 3:
             //   system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp2_ex3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 4:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(10,3);
                tp2_ex4();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 5:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp2_ex5();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 6:
              //  system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp2_ex6();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 7:
              //  system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp2_ex7();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 8:
              //  system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp2_ex8();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 9:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp2_ex9();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 10:
               ShellExecute(0,"open","TP3.pdf",NULL,NULL,1);
               break;

        case 11:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp3_ex1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 12:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp3_ex1_symetrie();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

                //*******************
        case 16:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                 gotoxy(25,0);
                tp3_exrcice2_element_superieur();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
         case 17:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp3_exrcice2_occurence();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 18:
               // system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp3_exrcice2_plateau();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;


        case 21:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tp3_exrcice3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 22:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp3_exrcice4();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 23:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(40,0);
                tp3_exrcice5();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 24:
              //  system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(40,0);
                tp3_exrcice6();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
       case 25:
                //system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(40,0);
                tp3_exrcice7();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 26:
               ShellExecute(0,"open","TP4.pdf",NULL,NULL,1);
                break;
        case 27:
              //  system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,0);
                tp4_exrcice1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 40:
                if (MessageBox(hwnd,"       Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                {

                    DestroyWindow(hwnd);
                    system("cls");
                }
            break;



        }
    case WM_CREATE :
        addmenus(hwnd);
//         CreateBtt(hwnd) ;
            /*****************ajouter fond **********************/
            hBmp=LoadImage(NULL,"pr.bmp",IMAGE_BITMAP,1370,700,LR_LOADFROMFILE);

            break;

        case WM_PAINT :
            {



         PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);

            DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

            EndPaint(hwnd, &ps);}
        break;
        case WM_DESTROY:
            PostQuitMessage (0);        /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

void addmenus(HWND hwnd)
{
    hmenu=CreateMenu();
    HMENU htp=CreateMenu();
    HMENU htp1=CreateMenu();
    HMENU hex3=CreateMenu();
    HMENU hex4=CreateMenu();
    HMENU htp2=CreateMenu();
    HMENU htp3=CreateMenu();


    //AppendMenu(hmenu,MF_STRING,0,"création du repertoire");
    /*******************************************************/
    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp,"TP2");
    AppendMenu(htp,MF_STRING,0,"Ennoné");

    AppendMenu(htp,MF_STRING,1,"EXERCICE 1");
    AppendMenu(htp,MF_STRING,2,"EXERCICE 2");
     AppendMenu(htp,MF_STRING,3,"EXERCICE 3");
   // AppendMenu(htp,MF_POPUP,(UINT_PTR)hex3,"EXERCICE 3");
      // AppendMenu(hex3,MF_STRING,3,"PARTIE 1"); /*Sous partie de l'ex3*/
        /*AppendMenu(hex3,MF_STRING,3,"PARTIE 2");
        AppendMenu(hex3,MF_STRING,3,"PARTIE 3");*/
    AppendMenu(htp,MF_STRING,4,"EXERCICE 4");
    AppendMenu(htp,MF_STRING,5,"EXERCICE 5");
    AppendMenu(htp,MF_STRING,6,"EXERCICE 6");
    AppendMenu(htp,MF_STRING,7,"EXERCICE 7");
    AppendMenu(htp,MF_STRING,8,"EXERCICE 8");
    AppendMenu(htp,MF_STRING,9,"EXERCICE 9");
/***************************************************************/

     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"TP3");
      AppendMenu(htp1,MF_STRING,10,"Ennoné");
    AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex3,"EXERCICE 1");
    AppendMenu(hex3,MF_STRING,11,"Transfere"); /*Sous partie de l'ex3*/
    AppendMenu(hex3,MF_STRING,12,"Symetrique");
    AppendMenu(hex3,MF_STRING,13,"Inverse");
     AppendMenu(hex3,MF_STRING,14,"Rotation");
      AppendMenu(hex3,MF_STRING,15,"Insertion");

      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex4,"EXERCICE 2");
      AppendMenu(hex4,MF_STRING,16,"Transfere"); /*Sous partie de l'ex3*/
      AppendMenu(hex4,MF_STRING,17,"Occurence");
      AppendMenu(hex4,MF_STRING,18,"Plateau");

      AppendMenu(htp1,MF_STRING,21,"EXERCICE 3");
      AppendMenu(htp1,MF_STRING,22,"EXERCICE 4");
      AppendMenu(htp1,MF_STRING,23,"EXERCICE 5");
      AppendMenu(htp1,MF_STRING,24,"EXERCICE 6");
      AppendMenu(htp1,MF_STRING,25,"EXERCICE 7");
/***************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp3,"TP4");
      AppendMenu(htp3,MF_STRING,26,"Ennoné");
      AppendMenu(htp3,MF_STRING,27,"EXERCICE 1");
      AppendMenu(htp3,MF_STRING,28,"EXERCICE 2");
      AppendMenu(htp3,MF_STRING,29,"EXERCICE 3");
       AppendMenu(htp3,MF_STRING,30,"EXERCICE 4");
      AppendMenu(htp3,MF_STRING,31,"EXERCICE 5");
      AppendMenu(htp3,MF_STRING,32,"EXERCICE 6");

/***************************************************************/
    AppendMenu(hmenu,MF_STRING,10,"Quitter");
    SetMenu(hwnd,hmenu);
}

