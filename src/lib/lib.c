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

queue create_queue() {
  queue return_queue;
  return_queue.head = NULL;
  return_queue.tail = NULL;
  return_queue.size = 0;
  return return_queue;
}
node *create_node(int value) {
  node *return_node = malloc(sizeof(node));
  return_node->value = value;
  return_node->next = NULL;
  return return_node;
}
int peek(queue *input_queue) {
  if (input_queue->size == 0) {
    printf("queue empty.\n");
    return 0;
  }
  int return_value = input_queue->head->value;
  return return_value;
}
void enqueue(queue *, int);
int dequeue(queue *);
void delete_queue(queue *input_queue) {
  while (input_queue->size > 0) {
    dequeue(input_queue);
  }
}
