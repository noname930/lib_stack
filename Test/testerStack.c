#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Stack/lib_stack.h"
#include "../ManagerErrorStack_Code/managerErrorStack.h"
#include "../Stack/GUI_Stack.c"


void clear_screen()
{
#ifdef WIN32
   std:system("cls");
#else
    std:system ("clear");
#endif
}

int main(int argc, char const *argv[]) {

srand(time(NULL));

int scelta,err,elemento;
char c;
Stack S=InitStack();

do{

    clear_screen();
    S=menuStack(S,&scelta);

   } while (scelta!=0);



  return 0;
}
