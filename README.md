# Queues in C
***
Queues are __Last In First Out(LIFO)__ type data structures. They are linked list based. They contain following functions,

- [x] Peek
- [ ] Enqueue
- [ ] Dequeue
***
## Queue Data Structure
Queue data structure contains size of the queue and the pointer to the head node as well as pointer to tail node.
Each node contains its value and the pointer to the next node.

__Psuedo Code__
```c
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
```
***
## Peek function
Peek function returns the value of head without destroying the node. Returns 0 when queue is empty.

__Pseudo Code__
```c
int peek(queue *input_queue) {
  if (input_queue->size == 0) {
    printf("queue empty.\n");
    return 0;
  }
  int return_value = input_queue->head->value;
  return return_value;
}
```
***
## Enqueue function
***
## Dequeue function
***
