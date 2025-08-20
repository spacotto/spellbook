# Library 42: Documentation
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

## Libc Functions
Recreate a set of functions from the official C library.

### Memory Manipulation Functions [Mandatory]
This group includes functions that operate on a block of memory, which can be any data type, not just strings. These functions are often used for low-level data handling.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `memset` | Fills a block of memory with a specified byte value. |
| `bzero` | Sets a block of memory to all zeros (a specific case of `memset`). |
| `memcpy` | Copies a specified number of bytes from a source memory area to a destination memory area. |
| `memmove` | Copies bytes from one memory area to another, handling overlapping source and destination regions safely. |
| `memchr` | Locates the first occurrence of a specific byte within a given memory block. |
| `memcmp` | Compares a specified number of bytes from two memory areas. |

### String Manipulation Functions [Mandatory]
These functions are specifically designed to work with null-terminated strings (character arrays ending with `\0`). They handle common string operations like copying, concatenating, and searching.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `strdup` | Duplicates a string by allocating new memory and copying the original string's content. |
| `strlcat` | Appends a null-terminated string to another, ensuring the destination buffer is not overrun. |
| `strchr` | Locates the first occurrence of a character within a string. |
| `strrchr` | Locates the last occurrence of a character within a string. |
| `strnstr` | Finds the first occurrence of a substring within a specified number of characters of another string. |
| `strncmp` | Compares a specified number of characters from two null-terminated strings. |

### Character and Conversion Functions [Mandatory]
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
Create a customised set of functions.

### Memory Management Functions [Mandatory]
This category includes functions responsible for allocating, deallocating, and initialising memory. These are fundamental for managing resources in C.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_memalloc` | Allocates a fresh memory area and initializes it to zero. Returns `NULL` on allocation failure. |
| `ft_memdel` | Frees a memory area using `free(3)` and sets the pointer to `NULL`. |
| `ft_strnew` | Allocates a new string, initialized with null characters (`\0`) and ending with a null terminator. Returns `NULL` on allocation failure. |
| `ft_strdel` | Frees a string using `free(3)` and sets its pointer to `NULL`. |

### String Manipulation Functions (Advanced) [Mandatory]
This group encompasses functions that perform various operations on strings, often involving memory allocation for new strings, character-by-character processing, or complex parsing.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_strclr` | Sets every character of a given string to the null character (`\0`). |
| `ft_striter` | Applies a given function `f` to each character of a string, allowing modification of characters via address. |
| `ft_striteri` | Applies a given function `f` to each character of a string, passing both the character's address and its index. |
| `ft_strmap` | Applies a given function `f` to each character of a string to create and return a new "fresh" string with the results. |
| `ft_strmapi` | Applies a given function `f` to each character of a string, passing its index, to create and return a new "fresh" string. |
| `ft_strequ` | Performs a lexicographical comparison between two strings; returns `1` if identical, `0` otherwise. |
| `ft_strnequ` | Performs a lexicographical comparison between two strings up to `n` characters; returns `1` if identical, `0` otherwise. |
| `ft_strsub` | Allocates and returns a "fresh" substring from a given string, starting at `index` and of `len` size. Returns `NULL` on allocation failure. |
| `ft_strjoin` | Allocates and returns a "fresh" string resulting from the concatenation of two given strings. Returns `NULL` on allocation failure. |
| `ft_strtrim` | Allocates and returns a copy of a string with leading and trailing whitespace characters (` `, `\n`, `\t`) removed. Returns `NULL` on allocation failure. |
| `ft_strsplit` | Allocates and returns an array of "fresh" strings obtained by splitting a string using a specified delimiter character. Returns `NULL` on allocation failure. |
| `ft_itoa` | Allocates and returns a "fresh" string representation of a given integer, supporting negative numbers. Returns `NULL` on allocation failure. |

### Output Functions [Mandatory]
This group focuses on functions that print characters, strings, or numbers to standard output or a specified file descriptor.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_putchar` | Outputs a single character to the standard output. |
| `ft_putstr` | Outputs a null-terminated string to the standard output. |
| `ft_putendl` | Outputs a null-terminated string to the standard output, followed by a newline character. |
| `ft_putnbr` | Outputs an integer to the standard output. |
| `ft_putchar_fd`| Outputs a single character to a specified file descriptor. |
| `ft_putstr_fd`| Outputs a null-terminated string to a specified file descriptor. |
| `ft_putendl_fd`| Outputs a null-terminated string to a specified file descriptor, followed by a newline character. |
| `ft_putnbr_fd`| Outputs an integer to a specified file descriptor. |

### Linked List Functions [Bonus]
These functions are specifically designed to **manage linked lists**, a fundamental data structure in computer science. They handle the creation, deletion, modification, and iteration of individual list nodes (or "links") and the list as a whole.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew` | Allocates a new list link and initializes its content, content size, and `next` pointer. Returns `NULL` on allocation failure. |
| `ft_lstdelone` | Frees a single list link's content and the link itself, then sets the link's pointer to `NULL`. The `next` pointer is not affected. |
| `ft_lstdel` | Frees a list starting from a given link and all of its successors. The starting link's pointer is set to `NULL`. |
| `ft_lstadd` | Adds a new link to the beginning of a linked list. |
| `ft_lstiter` | Iterates through a linked list, applying a specified function to each link. |
| `ft_lstmap` | Creates a new linked list by applying a function to each link of an existing list. Returns `NULL` if allocation fails. |
