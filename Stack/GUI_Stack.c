#include <stdio.h>
#include <stdlib.h>
#include "lib_stack.c"
#include "../ManagerErrorStack_Code/managerErrorStack.c"

Stack menuStack(Stack S, int *scelta)
{

  char c;
  int err,elemento;

  printf("\n-----------------------------------------------");
  printf("\nSELEZIONA L'OPERAZIONE CHE VUOI ESEGUIRE:");
  printf("\n[1] Inizializza Lo Stack\n[2] Randomizza lo Stack\n[3] Inserisci Elemento nello Stack\n[4] Elimina la Testa dello Stack\n[5] Stampa lo Stack\n[6] Pulisci Schermata\n[0] Exit\n");
  printf("\n------------------------------------------------");
  printf("\n\n==> ");

  scanf("%d",scelta);

  switch (*scelta)
    {
        case 1:  S=InitStack();
                 break;

        case 2:  printf("\n\nQuanti Elementi Vuoi Inserire?\n==> ");
                 scanf("%d", &elemento);
                 Random_Stack(S,elemento,&err);
                 ManagerErrorStack(err);
                 break;

        case 3:  printf("\n\nInserire il Valore dell'Elemento: ");
                 scanf("%d", &elemento);
                 push(S,elemento, &err);
                 ManagerErrorStack(err);
                 break;

        case 4:   pop(S,&err);
                  ManagerErrorStack(err);
                  break;

        case 5:   printf("\n\nStampa Stack:");
                  Stampa_Stack(S,&err);
                  printf("\n\n");
                  ManagerErrorStack(err);
                  break;

        case 6:   system("clear");
                  break;

        case 0:  printf("\n\nFine Programma\n\n");
                  break;


        default:  printf("\nOPZIONE ERRATA\n");
                  break;


      }

   if(*scelta!=0)
   {
       printf("\nPremi un tasto e invio per continuare...");
       fflush(stdin);
       while(scanf("\n%c", &c) > 1);


   }

  return S;

}
