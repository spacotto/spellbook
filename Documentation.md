# Mandatory part
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

## Libc Functions
Recreate a set of functions from the official C library.

### Memory Manipulation Functions
This group includes functions that operate on a block of memory, which can be any data type, not just strings. These functions are often used for low-level data handling.
- `memset`: Fills a block of memory with a specific byte value.
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
  
### String Manipulation Functions
These functions are specifically designed to work with null-terminated strings (character arrays ending with `\0`). They handle common string operations like copying, concatenating, and searching.
- strlen
- strdup
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- strchr
- strrchr
- strstr
- strnstr
- strcmp
- strncmp

### Character and Conversion Functions
This category includes functions that check the properties of individual characters or convert a string to a numeric value. They are useful for validating input and parsing data.
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

## 42 Custom Functions
Create specific functions 

- ft_memalloc
- ft_memdel
- ft_strnew
- ft_strdel
- ft_strclr
- ft_striter
- ft_striteri
- ft_strmap
- ft_strmapi
- ft_strequ
- ft_strnequ
- ft_strsub
- ft_strjoin
- ft_strtrim
- ft_strsplit
- ft_itoa
- ft_putchar
- ft_putstr
- ft_putendl
- ft_putnbr
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
