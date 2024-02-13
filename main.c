#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/list/macro.h"
#include "include/list/proto.h"
#include "include/morse/proto.h"
#include "include/morse/types.h"

static node_t *make_node(char *src, morse_type_t alloc_type) {
  node_t *node = new_node();
  if (node == NULL)
    return NULL;

  node->data = new_morse(src, alloc_type);
  if (node->data == NULL) {
    free(node);
    node = NULL;
  }
  return node;
}

static void process_stdin(list_t *list) {
  char *input = NULL;
  size_t bufsize = 0;

  printf("Processing user input...\n");
  while (getline(&input, &bufsize, stdin) != -1) {
    char *copy = strdup(input);
    node_t *node = make_node(copy, MO_ALLOC_BOTH);
    list_append(list, node);
  }
}

static void process_argv(int ac, char **av, list_t *list) {
  printf("Processing program arguments...\n");
  for (size_t i = 0; i < ac; i += 1) {
    node_t *node = NULL;
    node = make_node(av[i], MO_ALLOC_SINGLE);
    list_append(list, node);
  }
}

int main(int ac, char **av) {
  list_t *list = new_list();
  if (list == NULL)
    return 1;

  if (ac > 1)
    process_argv(ac - 1, av + 1, list);
  else
    process_stdin(list);
  list_foreach(list, morse) { morse_print(morse->data); }
  list_destroy(list, morse_destroy);

  return 0;
}
