#include <stdlib.h>
#include <string.h>

#include "../include/list.h"

static const node_t INIT = {
    .data = NULL,
    .next = NULL,
};

node_t *new_node(void) {
  node_t *node = malloc(sizeof(*node));

  if (node != NULL)
    memcpy(node, &INIT, sizeof(*node));

  return node;
}
