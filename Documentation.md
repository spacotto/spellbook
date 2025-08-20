# Mandatory part
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

## Libc Functions
Recreate a set of functions from the official C library.

### Memory Manipulation Functions
This group includes functions that operate on a block of memory, which can be any data type, not just strings. These functions are often used for low-level data handling.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `memset` | Fills a block of memory with a specified byte value. |
| `bzero` | Sets a block of memory to all zeros (a specific case of `memset`). |
| `memcpy` | Copies a specified number of bytes from a source memory area to a destination memory area. |
| `memccpy` | Copies bytes from one memory area to another until a specified character is found or a limit is reached. |
| `memmove` | Copies bytes from one memory area to another, handling overlapping source and destination regions safely. |
| `memchr` | Locates the first occurrence of a specific byte within a given memory block. |
| `memcmp` | Compares a specified number of bytes from two memory areas. |

### String Manipulation Functions
These functions are specifically designed to work with null-terminated strings (character arrays ending with `\0`). They handle common string operations like copying, concatenating, and searching.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `strlen` | Calculates the length of a null-terminated string, excluding the null byte. |
| `strdup` | Duplicates a string by allocating new memory and copying the original string's content. |
| `strcpy` | Copies the null-terminated string pointed to by `src` into the array pointed to by `dest`. |
| `strncpy` | Copies a specified number of characters from a source string to a destination string. |
| `strcat` | Appends the `src` string to the `dest` string. |
| `strncat` | Appends a specified number of characters from the `src` string to the `dest` string. |
| `strlcat` | Appends a null-terminated string to another, ensuring the destination buffer is not overrun. |
| `strchr` | Locates the first occurrence of a character within a string. |
| `strrchr` | Locates the last occurrence of a character within a string. |
| `strstr` | Finds the first occurrence of a substring (needle) within another string (haystack). |
| `strnstr` | Finds the first occurrence of a substring within a specified number of characters of another string. |
| `strcmp` | Compares two null-terminated strings lexicographically. |
| `strncmp` | Compares a specified number of characters from two null-terminated strings. |

### Character and Conversion Functions
This category includes functions that check the properties of individual characters or convert a string to a numeric value. They are useful for validating input and parsing data.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `atoi` | Converts a null-terminated string representing an integer to its `int` equivalent. |
| `isalpha` | Checks if a character is an alphabetic letter (uppercase or lowercase). |
| `isdigit` | Checks if a character is a decimal digit (0-9). |
| `isalnum` | Checks if a character is an alphanumeric character (either a letter or a digit). |
| `isascii` | Checks if a character is an ASCII character (within the 0-127 range). |
| `isprint` | Checks if a character is a printable character (including space). |
| `toupper` | Converts a lowercase letter to its uppercase equivalent. |
| `tolower` | Converts an uppercase letter to its lowercase equivalent. |

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
