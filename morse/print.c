#include <stdio.h>

#include "../include/morse.h"

void morse_print(morse_t *morse) {
  printf("{\n"
         "  Decoded: %s\n"
         "  Encoded: %s\n"
         "}\n",
         morse->decoded, morse->encoded);
}
