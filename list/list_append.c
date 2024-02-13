#include "../include/list.h"

list_t *list_append(list_t *list, node_t *node) {
  if (list->start == NULL && list->end == NULL) {
    list->start = node;
    list->end = node;
  } else {
    list->end->next = node;
    list->end = node;
  }
  return list;
}
