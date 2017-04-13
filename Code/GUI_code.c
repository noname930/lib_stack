#include <stdio.h>
#include <stdlib.h>
#include "lib_code.c"
#include "../ManagerErrorStack_Code/managerErrorCode.c"

Queue menuCode(Queue Q, int *scelta)
{

  char c;
  int err,elemento;

  printf("\n-----------------------------------------------");
  printf("\nSELEZIONA L'OPERAZIONE CHE VUOI ESEGUIRE:");
  printf("\n[1] Inizializza La Coda\n[2] Randomizza la Coda\n[3] Inserisci Elemento nella Coda\n[4] Elimina l'ultimo elemento della Coda\n[5] Stampa la Coda\n[6] Pulisci Schermata\n[0] Exit\n");
  printf("\n------------------------------------------------");
  printf("\n\n==> ");

  scanf("%d",scelta);

  switch (*scelta)
    {
        case 1:  Q=InitQueue();
                 break;

        case 2:  printf("\n\nQuanti Elementi Vuoi Inserire?\n==> ");
                 scanf("%d", &elemento);
                 Random_Queue(Q,elemento,&err);
                 ManagerErrorCode(err);
                 break;

        case 3:  printf("\n\nInserire il Valore dell'Elemento: ");
                 scanf("%d", &elemento);
                 enqueue(Q,elemento, &err);
                 ManagerErrorCode(err);
                 break;

        case 4:   dequeue(Q,&err);
                  ManagerErrorCode(err);
                  break;

        case 5:   printf("\n\nStampa Stack:");
                  Stampa_Queue(Q,&err);
                  printf("\n\n");
                  ManagerErrorCode(err);
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

  return Q;

}
