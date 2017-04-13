#include <stdio.h>
#include <stdlib.h>


void ManagerErrorStack(int err)
{
 if(err==1)
   printf("\nMessage Error: [Stack Pieno - *PUSH ANNULLATO!*]\n");
 else if(err==2)
   printf("\nMessage Error: [Stack Vuoto - *POP ANNULLATO*]\n");
}
