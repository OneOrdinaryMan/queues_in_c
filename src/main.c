#include "lib/lib.h"
#include <stdio.h>
int main() {
  queue input_queue = create_queue();
  enqueue(&input_queue, 5);
  enqueue(&input_queue, 6);
  printf("%d", dequeue(&input_queue));
  printf("%d", peek(&input_queue));
  delete_queue(&input_queue);
  return 0;
}
