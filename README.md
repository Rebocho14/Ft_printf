*This project has been created as part of the 42 curriculum by <login>.*

# ft_printf

## Description

**ft_printf** is a re-implementation of the C standard library function `printf`.
The goal is to learn how variadic functions work in C and to build a small,
well-structured library (`libftprintf.a`) that formats and prints data to the
standard output.

The function prototype is:

    int ft_printf(const char *format, ...);

It returns the number of characters printed, like the original `printf`.

### Supported conversions

| Specifier | Description                                  |
|-----------|----------------------------------------------|
| `%c`      | Single character                             |
| `%s`      | String                                       |
| `%p`      | Pointer address in hexadecimal               |
| `%d`      | Signed decimal integer                       |
| `%i`      | Signed decimal integer                       |
| `%u`      | Unsigned decimal integer                     |
| `%x`      | Unsigned hexadecimal (lowercase)             |
| `%X`      | Unsigned hexadecimal (uppercase)             |
| `%%`      | Literal percent sign                         |

<!-- If you did the bonus, add the flags/width/precision you support here. -->

### Design overview

<!-- Explain in your own words how your code is organised. Suggestions:
- How the format string is parsed (one pass, character by character).
- How each conversion is dispatched to its own function.
- How the printed-character count is kept and returned.
- How you handle edge cases (NULL strings, NULL pointers, INT_MIN, 0 in hex...). -->

## Instructions

### Requirements

- A C compiler (`cc`) and `make`
- Compiled with `-Wall -Wextra -Werror`

### Compilation

    make        # builds libftprintf.a
    make clean  # removes object files
    make fclean # removes object files and libftprintf.a
    make re     # rebuilds everything

### Usage

Include the header and link the library when compiling your program:

    #include "ft_printf.h"

    int main(void)
    {
        ft_printf("Hello %s, you are %d years old!\n", "world", 42);
        return (0);
    }

    cc main.c -L. -lftprintf -o test

## Resources

- `man 3 printf`, `man 3 stdarg`
- <!-- Add the articles, tutorials and docs you actually used -->

### Use of AI

<!-- Be honest and specific: which tasks AI helped with (e.g. understanding
variadic arguments, reviewing the README) and which parts of the code you
wrote and understood yourself. -->