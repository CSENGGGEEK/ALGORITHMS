#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

// PUSH operation on stack
void push_stackll(struct node **S, int data);
// POP operation on stack
void pop_stackll(struct node **S);
int main(int argc, char const *argv[]) {
  // Top pointer declaration
  struct node *top = NULL;
  push_stackll(&top,1);
  push_stackll(&top,2);
  push_stackll(&top,3);
  push_stackll(&top,4);
  push_stackll(&top,5);
  push_stackll(&top,6);
  return 0;
}

void push_stackll(struct node **S, int data) {
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  new_node->data = data;
  new_node->link = NULL;
  *S = new_node;
}

void pop_stackll(struct node **S){
  *S = (*S)->link;
}

void display_stackll(struct node *S){
  
}
