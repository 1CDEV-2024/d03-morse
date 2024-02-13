#include <string.h>

char *trim_left(char *src) {
  while (*src == ' ')
    src += 1;
  return src;
}

char *trim_right(char *src) {
  size_t len = strlen(src);

  for (char *end = src + (len - !!len); *end == ' ' || *end == '\n'; end -= 1)
    *end = '\0';
  return src;
}
