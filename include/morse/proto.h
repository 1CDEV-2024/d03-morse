#ifndef CDEV_MORSE_PROTO_H
#define CDEV_MORSE_PROTO_H

#include "types.h"
#include <stddef.h>

/**
 * Create a new morse object containing decoded and encoded string
 *
 * `decoded` - String to encode
 * `alloc`   - Whether `decoded` has been dynamically allocated or not
 */
morse_t *new_morse(char *decoded, morse_type_t alloc);

/**
 * Get the pointer to the first non space element of a string
 */
char *trim_left(char *src);

/**
 * Remove the trailing spaces of a string
 */
char *trim_right(char *src);

/**
 * Allocate the space for a string big enough to contain
 * the morse-encoded version of `src`
 */
char *morse_allocate_string(char *src);

/**
 * Return the encoded version of `src`
 */
char *morse_encode(char *src);

/**
 * Get the `morse_t` structure corresponding to the given character `c`
 */
morse_char_t *morse_get_char(char c);

/**
 * Write into `dst` the given `morse_t`'s value
 */
size_t morse_copy_char(char *dst, const morse_char_t *c);

/**
 * Print the contents of a morse object
 */
void morse_print(morse_t *morse);

/**
 * Destroy a morse object safely
 */
void morse_destroy(morse_t *morse);

#endif /* ifndef CDEV_MORSE_PROTO_H */
