#include <stdlib.h>

#include "../include/morse.h"

morse_t *new_morse(char *src, morse_type_t alloc_type) {
  char *encoded = morse_encode(src);
  if (encoded == NULL)
    return NULL;

  morse_t *morse = malloc(sizeof(*morse));
  if (morse == NULL) {
    free(encoded);
  } else {
    morse->type = alloc_type;
    morse->decoded = src;
    morse->encoded = encoded;
  }

  return morse;
}
