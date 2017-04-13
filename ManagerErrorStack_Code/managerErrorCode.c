#include <stdio.h>
#include <stdlib.h>


void ManagerErrorCode(int err)
{
 if(err==5)
   printf("\nMessage Error: [Coda Piena - *Enqueue ANNULLATO!*]\n");
 else if(err==6)
   printf("\nMessage Error: [Coda Vuota - *Dequeue ANNULLATO*]\n");
 else if (err==7)
   printf("\nMessage Error: [Coda Vuota in Stampa]\n");
 }
