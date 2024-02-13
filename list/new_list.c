#include <stdlib.h>
#include <string.h>

#include "../include/list.h"

const list_t INIT = {
    .start = NULL,
    .end = NULL,
};

list_t *new_list(void) {
  list_t *list = malloc(sizeof(*list));

  if (list != NULL)
    memcpy(list, &INIT, sizeof(*list));

  return list;
}
