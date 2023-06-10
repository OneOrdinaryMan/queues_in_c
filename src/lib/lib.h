#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};
typedef struct Node node;
typedef struct {
  node *head;
  node *tail;
  int size;
} queue;
queue create_queue();
node *create_node(int);
int peek(queue *);
void enqueue(queue *, int);
int dequeue(queue *);
void delete_queue(queue *);
void user_input(queue *);
#endif
