#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct {
  int top;
  int data[MAX_STACK_SIZE];
} Stack;

void initializeStack(Stack *s) {
  s->top = -1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

void push(Stack *s, int data) {
  if (s->top == MAX_STACK_SIZE - 1) {
    printf("Stack overflow\n");
    return;
  }

  s->top++;
  s->data[s->top] = data;
}

int pop(Stack *s) {
  if (isEmpty(s)) {
    printf("Stack underflow\n");
    return -1;
  }

  int data = s->data[s->top];
  s->top--;
  return data;
}

void printDistinctElements(Stack *s) {
  int seen[MAX_STACK_SIZE] = {0};

  while (!isEmpty(s)) {
    int data = pop(s);

    if (!seen[data]) {
      printf("%d    ", data);
      seen[data] = 1;
    }
  }

  printf("\n");
}

int main() {
  Stack s;
  initializeStack(&s);

  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int data;
    printf("Enter element %d: ", i + 1);
    scanf("%d", &data);
    push(&s, data);
  }
    printf("Distinct Elements of stack are  : ");
  printDistinctElements(&s);

  return 0;
}


