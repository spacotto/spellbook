# Library 42: Documentation
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

## Libc Functions
Recreate a set of functions from the official C library.

### Find and Convert Characters [Mandatory]
These functions are used to check if a character belongs to a certain type (e.g., alphabetic, digit) or to convert its case.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `isalpha` | Checks if a character is an alphabet (a-z, A-Z). |
| `isdigit` | Checks if a character is a decimal digit (0-9). |
| `isalnum` | Checks if a character is alphanumeric (a-z, A-Z, 0-9). |
| `isascii` | Checks if a character is a 7-bit ASCII character. |
| `isprint` | Checks if a character is printable, including space. |
| `toupper` | Converts a lowercase letter to its uppercase equivalent. |
| `tolower` | Converts an uppercase letter to its lowercase equivalent. |
| `atoi` | Converts a string to an integer. |

### String and Memory Manipulation [Mandatory]
This category includes functions for handling strings and blocks of memory. They are used for copying, comparing, and searching within data.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `strlen` | Calculates the length of a string, excluding the null terminator. |
| `memset` | Fills a block of memory with a specific byte value. |
| `bzero` | Sets a block of memory to all zeros. (Note: This is similar to `memset` with a value of 0). |
| `memcpy` | Copies a block of memory from a source to a destination. |
| `memmove` | Copies a block of memory, handling overlapping source and destination regions safely. |
| `strlcpy` | Copies a string with a size limit, ensuring the destination is null-terminated. |
| `strlcat` | Appends a string with a size limit, ensuring the destination is null-terminated. |
| `strchr` | Locates the first occurrence of a character in a string. |
| `strrchr` | Locates the last occurrence of a character in a string. |
| `strncmp` | Compares two strings up to a specified number of characters. |
| `memchr` | Scans a block of memory for the first occurrence of a specific character. |
| `memcmp` | Compares two blocks of memory. |
| `strnstr` | Locates the first occurrence of a substring within a string, searching up to a specified length. |

### `malloc` Functions [Mandatory]
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `calloc` | Allocates a block of memory for an array and initialises all bytes to zero. |
| `strdup` | Duplicates a string by allocating new memory and copying the contents. |

## 42 Custom Functions
Create a customised set of functions.

### 

### Linked List Functions [Bonus]
These functions are specifically designed to **manage linked lists**, a fundamental data structure in computer science. They handle the creation, deletion, modification, and iteration of individual list nodes (or "links") and the list as a whole.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `name` | description |
