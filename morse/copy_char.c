#include <string.h>

#include "../include/morse.h"

size_t morse_copy_char(char *dst, const morse_char_t *c) {
  strcpy(dst, c->value);
  return c->length;
}
