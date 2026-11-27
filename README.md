*This project has been created as part of the 42 curriculum by panibal.*

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
	int main()
		{
		int temp =  ft_printf("%c, %s, %d, %i, %u, %x, %X, %p,%%\n", 'A', "ugabuga", -101, 42, 42, 255, 255, NULL);
		int temp2 =  printf("%c, %s, %d, %i, %u, %x, %X, %p, %%\n", 'A', "ugabuga", -101, 42, 42, 255, 255, NULL);
		printf("%d\n%d", temp, temp2);
		ft_printf("%d\n%d", temp, temp2);
		}

## Resources

- `man 3 printf`, `man 3 stdarg`

### Use of AI

This README was drafted by AI and edited by me 