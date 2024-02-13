#include <stdlib.h>

#include "../include/list.h"

void list_destroy(list_t *list, dtor_t destroy) {
  list_foreach(list, i) { node_destroy(i, destroy); }
  free(list);
}
