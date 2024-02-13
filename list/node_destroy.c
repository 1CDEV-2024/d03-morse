#include <stdlib.h>

#include "../include/list/types.h"

void node_destroy(node_t *node, dtor_t destroy) {
  destroy(node->data);
  free(node);
}
