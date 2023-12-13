#include <stdio.h>
#include <stdlib.h>

// Define a node structure
typedef struct Node {
  int data;
  struct Node *next;
} Node;

// Define the stack structure
typedef struct Stack {
  Node *top;
  int size;
} Stack;

// Create a new node
Node* create_node(int data) {
  Node *new_node = (Node*)malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// Push an element to the stack
void push(Stack *s, int data) {
  Node *new_node = create_node(data);
  new_node->next = s->top;
  s->top = new_node;
  s->size++;
}

// Pop an element from the stack
int pop(Stack *s) {
  if (s->top == NULL) {
    printf("Stack Underflow\n");
    return -1;
  }
  Node *temp = s->top;
  int data = temp->data;
  s->top = s->top->next;
  free(temp);
  s->size--;
  return data;
}

// Display the stack
void display(Stack *s) {
  if (s->top == NULL) {
    printf("Stack is empty\n");
    return;
  }
  Node *temp = s->top;
  printf("Stack: ");
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  // Create an empty stack
  Stack s;
  s.top = NULL;
  s.size = 0;

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
