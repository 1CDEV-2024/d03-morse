#ifndef CDEV_LIST_MACRO_H
#define CDEV_LIST_MACRO_H

#include <stddef.h>

#include "types.h"

#define list_foreach(list, iterator)                                           \
  for (node_t *iterator = list->start, *next = NULL;                           \
       next = (iterator != NULL) ? iterator->next : NULL, iterator != NULL;    \
       iterator = next)

#endif /* ifndef CDEV_LIST_MACRO_H */
