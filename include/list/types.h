#ifndef CDEV_LIST_TYPES_H
#define CDEV_LIST_TYPES_H

#include "../morse/types.h"

typedef struct node_s node_t;
typedef struct list_s list_t;

struct node_s {
  node_t *next;
  morse_t *data;
};

struct list_s {
  node_t *start;
  node_t *end;
};

typedef void (*dtor_t)(morse_t *);

#endif /* ifndef CDEV_LIST_TYPES_H */
