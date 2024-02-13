#ifndef CDEV_MORSE_TYPES_H
#define CDEV_MORSE_TYPES_H

typedef struct {
  unsigned char length;
  const char *const value;
} morse_char_t;

typedef enum {
  /** Only `decoded` has been dynamically allocated. */
  MO_ALLOC_SINGLE,

  /** Both `decoded` and `encoded` were dynanically allocated. */
  MO_ALLOC_BOTH,
} morse_type_t;

typedef struct {
  char *decoded;
  char *encoded;
  morse_type_t type;
} morse_t;

#endif /* ifndef CDEV_MORSE_TYPES_H */
