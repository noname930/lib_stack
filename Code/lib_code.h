#ifndef lib_code_h
#define lib_code_h
#define MAX 128


struct TQueue
{
    int A[MAX+2];
};

typedef struct TQueue* Queue;


//Inizializzo la coda
Queue InitQueue();

//Controllo che la coda è vuota
int EmptyQueue(Queue Q);

//Controllo che la coda è piena
int FullQueue(Queue Q);

//Inserisce un nuovo elemento (key) nella coda
void enqueue(Queue Q, int key, int *err);

//Restituisce il primo elemento (head) della coda
int dequeue(Queue Q, int *err);

//Stampa la coda
void Stampa_Queue(Queue Q, int *err);

//Crea una coda random di dimensione n
void Random_Queue(Queue Q, int n, int *err);

#endif
