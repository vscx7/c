#include <stdio.h>

#define MAX_SIZE 10

// Define the stack structure
typedef struct Stack {
  int top;
  int arr[MAX_SIZE];
} Stack;

// Push an element to the stack
void push(Stack *s, int element) {
  if (s->top == MAX_SIZE - 1) {
    printf("Stack Overflow\n");
    return;
  }
  s->top++;
  s->arr[s->top] = element;
}

// Pop an element from the stack
int pop(Stack *s) {
  if (s->top == -1) {
    printf("Stack Underflow\n");
    return -1;
  }
  int element = s->arr[s->top];
  s->top--;
  return element;
}

// Display the stack
void display(Stack *s) {
  if (s->top == -1) {
    printf("Stack is empty\n");
    return;
  }
  printf("Stack: ");
  for (int i = s->top; i >= 0; i--) {
    printf("%d ", s->arr[i]);
  }
  printf("\n");
}

int main() {
  // Create an empty stack
  Stack s;
  s.top = -1;

  // Push some elements
  push(&s, 1);
  push(&s, 2);
  push(&s, 3);

  // Display the stack
  display(&s);

  // Pop an element
  int popped_element = pop(&s);
  printf("Popped element: %d\n", popped_element);

  // Display the stack again
  display(&s);

  return 0;
}
