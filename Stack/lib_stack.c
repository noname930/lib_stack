#include <stdio.h>
#include <stdlib.h>
#include "lib_stack.h"
#include <time.h>



Stack InitStack()
{
    Stack S=malloc(sizeof(struct TStack));
    S->A[0]=0;
    return S;
}



int EmptyStack(Stack S)
{
    if(S->A[0]==0)
        return 1;
    else
        return 0;

}



int FullStack(Stack S)
{
    if(S->A[0]==MAX)
        return 1;
    else
        return 0;

}


void push(Stack S, int key,int* err)
{
    if(!FullStack(S))
    {
        S->A[0]++;
        S->A[S->A[0]]=key;
        *err=0;
    }
    else
        *err=1;

}


int pop(Stack S,int* err)
{
    if(!EmptyStack(S))
    {
        S->A[0]--;
        *err=0;
        return S->A[S->A[0]+1];
    }
    else
    {
        *err=2;
        return 0;
    }

}


void Stampa_Stack(Stack S,int* err)
{
   int key;
   if(!EmptyStack(S))
   {

       key=pop(S,err);
       printf("[%d]",key);
       Stampa_Stack(S,err);

       push(S,key,err);
   }

}


void Random_Stack(Stack S,int n,int* err)
{

    int i;
    for(i=0;i<n;i++)
        push(S,rand()% 100,err);

}
