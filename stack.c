#include <stdio.h>
#include <stdlib.h>

// dynamic stack (type int)
typedef struct {
    int *data;
    int length; // keep track of the size
} Stack;

// create empty stack
Stack NewStack() {
    return (Stack) {(int*)malloc(sizeof(int)*0), 0};
}

void Push(Stack* s, int val) {
    s->data = (int*) realloc (s->data, sizeof(int)*s->length);
    s->data[s->length] = val;
    s->length++;
}

int Pop(Stack* s) {
    int ret = s->data[s->length-1];
    s->data[s->length-1] = -1;
    s->data = (int*) realloc (s->data, sizeof(int)*(s->length-1));
    s->length--;
    return ret;
}

void PrintStack(Stack* s) {
    for (int i = 0; i < s->length; i++) {
        printf("[%i]: %i\n", i, s->data[i]);
    }
}

int main() {

    Stack mystack = NewStack();
    Push(&mystack, 5);
    Push(&mystack, 4);
    Push(&mystack, 3);
    Push(&mystack, 2);
    PrintStack(&mystack);
    printf("%i\n", Pop(&mystack));
    printf("%i\n", Pop(&mystack));
    printf("%i\n", Pop(&mystack));
    printf("%i\n", Pop(&mystack));
    PrintStack(&mystack);
    printf("%i\n", Pop(&mystack));
    printf("%i\n", Pop(&mystack));

    return 0;
}