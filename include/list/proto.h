#ifndef CDEV_LIST_PROTO_H
#define CDEV_LIST_PROTO_H

#include "types.h"

/**
 * Creates a new empty list
 */
list_t *new_list(void);

/**
 * Append an element to the list and returns the pointer
 * to the list (`list`)
 */
list_t *list_append(list_t *list, node_t *node);

/**
 * Destroy all elements in a list and the list itself
 */
void list_destroy(list_t *list, dtor_t destroy);

/**
 * Creates a new empty node
 */
node_t *new_node(void);

/**
 * Destroy a node
 */
void node_destroy(node_t *node, dtor_t destroy);

#endif /* ifndef CDEV_LIST_PROTO_H */
