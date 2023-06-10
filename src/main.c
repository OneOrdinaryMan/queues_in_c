#include "lib/lib.h"
#include <stdio.h>
int main() {
  queue input_queue = create_queue();
  user_input(&input_queue);
  printf("%d\n", dequeue(&input_queue));
  printf("%d\n", peek(&input_queue));
  delete_queue(&input_queue);
  return 0;
}
