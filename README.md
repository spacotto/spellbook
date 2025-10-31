# Library 42: Documentation
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

The original 42 project is divided into 3 parts (2 mandatory and 1 bonus).
1. **Part 1:** Recreate a set of functions from the official C library.
2. **Part 2:** Create a customised set of functions.
3. **Part 3:** Create a set functions designed to introduc you to **linked lists**.

> [!WARNING]
> Some fuctions have been changed after passing the Moulinette! They might not be norm-compliant or subject compliant! Never trust other's code blindly!

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
Use `malloc` to implement the two following functions.
| Function Name | Description |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `calloc` | Allocates a block of memory for an array and initialises all bytes to zero. |
| `strdup` | Duplicates a string by allocating new memory and copying the contents. |

## 42 Custom Functions
Create a customised set of functions.

### String Creation and Manipulation [Mandatory]
These functions allocate new memory to create and return modified strings based on input. They don't modify the original strings, which is a common practice to avoid unexpected side effects.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_substr` | Allocates memory (using `malloc(3)`) and returns a substring from the string `s`. The substring starts at index `start` and has a maximum length of `len`. |
| `ft_strjoin` | Allocates memory (using `malloc(3)`) and returns a new string, which is the result of concatenating `s1` and `s2`. |
| `ft_strtrim` | Allocates memory (using `malloc(3)`) and returns a copy of `s1` with characters from `set` removed from the beginning and the end. |
| `ft_split` | Allocates memory (using `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a `NULL` pointer. |
| `ft_itoa` | Allocates memory (using `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| `ft_strmapi` | Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to store the results from the successive applications of `f`. |
| `ft_striteri` | Applies the function `f` to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to `f` so it can be modified if necessary. |

### File Descriptor Output [Mandatory]
These functions write various data types to a specified file descriptor, which can be a file, standard output, or standard error. They are a common way to handle I/O in a modular and consistent manner.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_putchar_fd` | Outputs the character `c` to the specified file descriptor. |
| `ft_putstr_fd` | Outputs the string `s` to the specified file descriptor. |
| `ft_putendl_fd` | Outputs the string `s` to the specified file descriptor followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer `n` to the specified file descriptor. |

### Linked List Functions [Bonus]
These functions are specifically designed to **manage linked lists**, a fundamental data structure in computer science. They handle the creation, deletion, modification, and iteration of individual list nodes (or "links") and the list as a whole.
| Function Name | Description |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew` | Allocates memory (using malloc(3)) and returns a new node. The `content` member variable is initialised with the given parameter `content`. The variable `next` is initialised to NULL. |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds the node `new` at the end of the list. |
| `ft_lstdelone` | Takes a node as a parameter and frees its content using the function `del`. Free the node itself, but does NOT free the next node. |
| `ft_lstclear` | Deletes and frees the given node and all its successors, using the function `del` and `free(3)`. Finally, set the pointer to the list to NULL. |
| `ft_lstiter` | Iterates through the list `lst` and applies the function `f` to the content of each node. |
| `ft_lstmap` | Iterates through the list `lst`, applies the function `f` to each node’s content, and creates a new list resulting from the successive applications of the function `f`. The `del` function is used to delete the content of a node if needed. |
