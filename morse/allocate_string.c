#include <stdio.h>
#include <stdlib.h>

#include "../include/morse.h"

static size_t morse_get_length(char *input) {
  char *src = input;
  size_t i = 0;

  while (1) {
    switch (*input++) {
    case 'A' ... 'Z':
      i += MORSE_LETTER_LENGTH;
      break;
    case '0' ... '9':
      i += MORSE_NUMBER_LENGTH;
      break;
    case ' ':
      i += 3;
      break;
    case '\0':
      return i;
    default:
      i = input - 1 - src;
      fprintf(stderr,
              "[ERROR] Invalid character found.\n"
              "      |   Char: %c\n"
              "      |   Pos: %zu\n"
              "      |   In: %s\n",
              src[i], i, src);
      return 0;
    }
  }
}

char *morse_allocate_string(char *input) {
  char *morse = NULL;
  size_t len = morse_get_length(input);

  if (len == 0)
    return NULL;
  morse = calloc(len, sizeof(*morse));
  return morse;
}
