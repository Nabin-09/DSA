#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void push(int data) {
  if (top == MAX_STACK_SIZE - 1) {
    printf("Stack overflow\n");
    return;
  }

  top++;
  stack[top] = data;
}

int pop() {
  if (top == -1) {
    printf("Stack underflow\n");
    return -1;
  }

  int data = stack[top];
  top--;
  return data;
}

void print_distinct_elements() {
  int i, j;

  for (i = 0; i <= top; i++) {
    int flag = 0;

    for (j = 0; j < i; j++) {
      if (stack[i] == stack[j]) {
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
      printf("%d ", stack[i]);
    }
  }

  printf("\n");
}

void print_stack() {
  int i;

  for (i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }

  printf("\n");
}

int main() {
  int n, data;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &data);
    push(data);
  }

  print_distinct_elements();

  printf("The original stack is: ");
  print_stack();

  return 0;
}
