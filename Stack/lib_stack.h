#ifndef lib_stack_h
#define lib_stack_h
#define MAX 128

struct TStack {
  int A[MAX+1];
};

typedef struct TStack *Stack;

//Inizializza lo stack
Stack InitStack();

//Controlla se lo stack e' vuoto
int EmptyStack(Stack S);

//Controlla se lo stack e' pieno
int FullStack(Stack S);

//Inserisce un nuovo elemento (key) nello stack
void push(Stack S, int key,int* err);

//Restituisce l'elemento in cima allo stack
int pop(Stack S,int* err);

//Stampa lo stack
void Stampa_Stack(Stack S,int* err);

//Crea uno stack random di dimensione n
void Random_Stack(Stack S,int n,int* err);


#endif
