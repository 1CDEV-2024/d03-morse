#include "../include/morse.h"
#include <stdlib.h>

void morse_destroy(morse_t *morse) {
  free(morse->encoded);
  if (morse->type == MO_ALLOC_BOTH)
    free(morse->decoded);
}
