#include <stdio.h>
#include <stdlib.h>
#include "lib_code.h"


Queue InitQueue()
{
    Queue Q = malloc(sizeof(struct TQueue));
    Q->A[0] = 0;
    Q->A[MAX] = 1;
    return Q;
}



int EmptyQueue(Queue Q)
{
    if(Q->A[0]==0)
        return 1;
    else
        return 0;
}



int FullQueue(Queue Q)
{
      if( Q->A[0] == Q->A[MAX])
          return 1;
      else
          return 0;
}




void enqueue(Queue Q, int key, int *err)
{
    if (!FullQueue(Q))
    {
        Q->A[Q->A[MAX]] = key;    // Inserisci valore in coda
        if (EmptyQueue(Q))
        {
            Q->A[0] = 1;              // Se e' vuota, sposto la testa in prima posizione
        }
        Q->A[MAX] = (Q->A[MAX]%(MAX-1))+1;
        *err = 0;
    }
    else
        *err = 5;

}




int dequeue(Queue Q, int *err)
{
    int key = 0;
    if (!EmptyQueue(Q))
    {
        key = Q->A[Q->A[0]];            // Prendo il valore in 'head' della coda
        Q->A[0] = (Q->A[0] % (MAX-1)) + 1;
        if (FullQueue(Q))
        {
            Q->A[0] = 0;
            Q->A[MAX] = 1;
        }
        *err = 0;
    }
    else
        *err = 6;

    return key;
}



void Stampa_Queue(Queue Q, int *err)
{
    int key;
    if (!EmptyQueue(Q))
    {
        key = dequeue(Q, err);
        printf("%d ", key);
        Stampa_Queue(Q, err);
        enqueue(Q, key, err);
    }
    else
        *err = 7;
}




void Random_Queue(Queue Q, int n, int *err)
{
    int i = 0;
    for (i = 0; i <= n; i++)
        enqueue(Q, rand() % 100, err);

}
