#include <string.h>

#include "../include/morse/types.h"

#define _(str)                                                                 \
  { .length = strlen((str)), .value = (str), }

const morse_char_t SPACE = {
    .value = " | ",
    .length = 3,
};

const morse_char_t MORSE_LETTERS[] = {
    /* A */ _(". -"),
    /* B */ _("- . . ."),
    /* C */ _("- . - . "),
    /* D */ _("- . ."),
    /* E */ _("."),
    /* F */ _(". . - ."),
    /* G */ _("- - ."),
    /* H */ _(". . . ."),
    /* I */ _(". ."),
    /* J */ _(". - - -"),
    /* K */ _("- . -"),
    /* L */ _(". - . ."),
    /* M */ _("- -"),
    /* N */ _("- ."),
    /* O */ _("- - -"),
    /* P */ _(". - - ."),
    /* Q */ _("- - . -"),
    /* R */ _(". - ."),
    /* S */ _(". . ."),
    /* T */ _("-"),
    /* U */ _(". . -"),
    /* V */ _(". . . -"),
    /* W */ _(". - -"),
    /* X */ _("- . . -"),
    /* Y */ _("- . - -"),
    /* Z */ _("- - . ."),
};

const morse_char_t MORSE_NUMBERS[] = {
    /* 0 */ _("- - - - -"),
    /* 1 */ _(". - - - -"),
    /* 2 */ _(". . - - -"),
    /* 3 */ _(". . . - -"),
    /* 4 */ _(". . . . -"),
    /* 5 */ _(". . . . ."),
    /* 6 */ _("- . . . ."),
    /* 7 */ _("- - . . ."),
    /* 8 */ _("- - - . ."),
    /* 9 */ _("- - - - ."),
};

const morse_char_t *morse_get_char(char c) {
  switch (c) {
  case ' ':
    return &SPACE;
  case '0' ... '9':
    return &MORSE_NUMBERS[c - '0'];
  case 'A' ... 'Z':
    return &MORSE_LETTERS[c - 'A'];
  default:
    return NULL;
  }
}
