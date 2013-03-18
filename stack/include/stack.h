/**
 * A stack.
 *
 * Pop, push, peek, and maybe is_empty.
 *
 * Resize as necessary (define initial size of stack? yes if it's an
 * array, but no if you're dynamically allocating memory, which is probably
 * what you should do - so a singly linked list).
 */

#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct node {
  int value;
  struct node *next;
} Node;

typedef struct stack {
  Node *head;
  Node *next;
} Stack;

Stack * create_stack(void);
BOOL is_empty(Stack *);
int size(Stack *);
void push(Stack *, int);
void pop(Stack *, Node **);
int peek(Stack *);
void print_stack(Stack *);
void destroy_stack(Stack *);
void sort(Stack *);


