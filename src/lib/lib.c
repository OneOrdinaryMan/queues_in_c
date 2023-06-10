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

void enqueue(queue *input_queue, int value) {
  node *new_node = create_node(value);

  if (input_queue->size == 0) {
    input_queue->head = new_node;
    input_queue->tail = new_node;
    input_queue->size++;
    return;
  }

  node *current_tail = input_queue->tail;
  input_queue->tail = new_node;
  current_tail->next = new_node;
  input_queue->size++;
}

void user_input(queue *input_queue) {
  int value;
  while (scanf("%d", &value) != EOF) {
    enqueue(input_queue, value);
  }
}

int dequeue(queue *input_queue) {
  if (input_queue->size == 0) {
    printf("Queue empty.\n");
    return 0;
  }
  node *current_head = input_queue->head;
  input_queue->head = current_head->next;
  int return_value = current_head->value;
  free(current_head);
  input_queue->size--;
  return return_value;
}

void delete_queue(queue *input_queue) {
  while (input_queue->size > 0) {
    dequeue(input_queue);
  }
}
