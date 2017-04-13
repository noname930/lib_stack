
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Code/lib_code.h"
#include "../ManagerErrorStack_Code/managerErrorCode.h"
#include "../Code/GUI_code.c"



void clear_screen()
{
#ifdef WINDOWS
    std:system("cls");
#else
    std:system ("clear");
#endif
}


int main(int argc, char const *argv[]) {

srand(time(NULL));

int scelta,err,elemento;
char c;
Queue Q=InitQueue();

do{

    clear_screen();
    Q=menuCode(Q,&scelta);

   } while (scelta!=0);



  return 0;
}
