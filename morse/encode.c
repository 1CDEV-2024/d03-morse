#include "../include/morse.h"

const morse_char_t SEPARATOR = {
    .value = " / ",
    .length = 3,
};

static void encode_into(char *dst, char *src) {
  const morse_char_t *morse = NULL;

  while (*src) {
    morse = morse_get_char(*src);
    dst += morse_copy_char(dst, morse);
    if (*src == ' ') {
      src = trim_left(src);
      continue;
    }
    if (*(++src) != '\0' && *src != ' ')
      dst += morse_copy_char(dst, &SEPARATOR);
  }
}

char *morse_encode(char *src) {
  char *dst = NULL;

  src = trim_left(src);
  src = trim_right(src);
  dst = morse_allocate_string(src);
  if (dst == NULL)
    return NULL;
  encode_into(dst, src);
  return dst;
}
