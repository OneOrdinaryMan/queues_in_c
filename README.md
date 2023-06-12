# Queues in C
Queues are __Last In First Out(LIFO)__ type data structures. They are linked list based. They contain following functions,

- [x] Peek
- [x] Enqueue
- [x] Dequeue
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
## Enqueue function
Enqueuing the value means adding a node at the tail of the function. The old tail's next points to new tails address. The new tails address is given to queue.
If the size of the queue is zero, the head and tail of the queue is the address of the new node. size is incremented at the end of the function.

__Psuedo Code__
```c
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
```
## Dequeue function
Dequeueing the value means removing the node from the head and returning the value stored in the node. New head is the next value of the current. Empty queue returns 0.

__Psuedo Code__
```c
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
```
# Licence
This project is licenced under <mark>GPL3.0 or later</mark> licence. Feel free to use the code.
