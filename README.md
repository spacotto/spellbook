# ✨ Spellbook
> [!WARNING]
> This is a personal C Library by a fellow 42 student! Some functions might not be 42norm-compliant or 42subject-compliant! Never trust code blindly!

## Features
- Zero dependencies: Pure C implementation
- Comprehensive: Over 50+ utility functions
- Well-organised: Categorised by functionality
- Memory-safe: Careful attention to allocation and deallocation
- Portable: Standard C library compatible

## Installation
Clone the repository:
```
git clone https://github.com/spacotto/spellbook.git
```

Navigate to the directory
```
cd spellbook
```

Build the library
```
make
```

## Functions List
### Character Validation
These functions check if the corresponding character belongs to a certain ASCII category (e.g., alphabetic, digit). 

```
@@ Function          Description @@
--------------------------------------------------------------------
ft_isalpha        Checks if character is alphabetic (a-z, A-Z)
--------------------------------------------------------------------
ft_isdigit        Checks if character is a digit (0-9)
--------------------------------------------------------------------
ft_isalnum        Checks if character is alphanumeric
--------------------------------------------------------------------
ft_isascii        Checks if character is valid 7-bit ASCII
--------------------------------------------------------------------
ft_isprint        Checks if character is printable (including space)
```

### Counters
Utility functions for counting elements within data structures.

`ft_countdigits`
>Given a signed number and its base, it counts the digits composing it.

`ft_countwords`
>Given a string and a separator, it counts how many words are in the string.

### Type Conversions
#### Character Conversions
`ft_toupper`
>Converts a lowercase letter to its uppercase equivalent.

`ft_tolower`
>Converts an uppercase letter to its lowercase equivalent.

#### String to Number
`ft_atoi`
>Converts a string to an integer.

#### Number to String 
`ft_itoa`
>Allocates memory and converts a signed number to a string.

`ft_itoa_base`
>Allocates memory and converts a signed number to a string according to its base.

`ft_itoa_base_buffer`
>Converts a signed number to a string according to its base without `malloc`.

`ft_utoa`
>Allocates memory and converts an unsigned number to a string.

`ft_utoa_base`
>Allocates memory and converts an unsigned number to a string according to its base.

`ft_utoa_base_buffer`
>Converts an unsigned number to a string according to its base without `malloc`.

## String Manipulation
This category includes functions for handling strings. They are used for copying, comparing, and searching within data.

### String Measure
`ft_strlen`
>Calculates the length of a string, excluding the null terminator.

### String Comparison
`ft_strcmp`
>Compares two strings.

`ft_strncmp`
>Compares two strings up to a specified number of characters.

### String Copy
`ft_strcpy`
>Copies a string.

`ft_strncpy`
>Copies a string up to a specified number of characters.

`ft_strlcpy`
>Copies a string with a size limit, ensuring the destination is null-terminated.

`ft_strdup`
>Duplicates a string by allocating new memory and copying the contents.

### String Aggregation
`ft_strlcat`
>Appends a string with a size limit, ensuring the destination is null-terminated.

`ft_strjoin`
>Allocates memory and returns a new string, which is the result of concatenating `s1` and `s2`.

### String Extraction
`ft_strchr`
>Locates the first occurrence of a character in a string.

`ft_strrchr`
>Locates the last occurrence of a character in a string.

`ft_strnstr`
>Locates the first occurrence of a substring within a string, searching up to a specified length.

`ft_substr`
>Allocates memory and returns a substring from a source, given the substring start and size.

### String
`ft_strtrim`
>Allocates memory and returns a copy of `s1` with characters from `set` removed from the beginning and the end.

### String Separation
`ft_split`
>Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter.

### String
`ft_striteri`
>Applies the function `f` to each character of the string passed as an argument. It acts directly on the source.

`ft_strmapi`
>Applies the function `f` to each character of the string passed as an argument, and returns a new string as a result.

## Memory 
### Memory Manipulation
This category includes functions for handling blocks of memory. They are used for copying, comparing, and searching within data.

`ft_memset`
>Fills a block of memory with a specific byte value.

`ft_bzero`
>Sets a block of memory to all zeros. (Note: This is similar to `memset` with a value of 0).

`ft_memcpy`
>Copies a block of memory from a source to a destination.

`ft_memmove`
>Copies a block of memory, handling overlapping source and destination regions safely.

`ft_memchr`
>Scans a block of memory for the first occurrence of a specific character.

`ft_memcmp`
>Compares two blocks of memory.

### Memory Allocation
This category includes functions for memory allocation and management.

`ft_arena`
>Arena memory allocation.

`ft_calloc`
>Allocates a block of memory for an array and initialises all bytes to zero.

## Output to File Descriptor (FD)
These functions write various data types to a specified file descriptor, which can be a file, standard output, or standard error. They are a common way to handle I/O in a modular and consistent manner.

`ft_putchar_fd`
>Outputs the character `c` to the specified file descriptor.

`ft_putstr_fd`
>Outputs the string `s` to the specified file descriptor.

`ft_putendl_fd`
>Outputs the string `s` to the specified file descriptor followed by a newline.

`ft_putnbr_fd`
>Outputs the integer `n` to the specified file descriptor.

`ft_putnbr_base_fd`
>Converts a signed number to the corresponding written output according to its base.

## Linked Lists
These functions are specifically designed to teach you the basics of **linked lists**, a fundamental data structure in computer science. They teach you the creation, deletion, modification, and iteration of individual list nodes (or "links") and the list as a whole. All these functions are based on the same given structure.

`ft_lstnew`
>Creates a new node.

`ft_lstadd_front`
>Adds the node `new` at the beginning of the list.

`ft_lstsize`
>Counts the number of nodes in the list.

`ft_lstlast`
>Returns the last node of the list.

`ft_lstadd_back`
>Adds the node `new` at the end of the list.

`ft_lstdelone`
>Takes a node as a parameter and frees its content using the function `del`. Free the node itself, but does NOT free the next node.

`ft_lstclear`
>Deletes and frees the given node and all its successors, using the function `del` and `free(3)`. Finally, set the pointer to the list to NULL.

`ft_lstiter`
>Iterates through the list `lst` and applies the function `f` to the content of each node.

`ft_lstmap`
>Iterates through the list `lst`, applies the function `f` to each node’s content, and creates a new list as a result.

## Variadic Functions
Functions that take a variable number of arguments.

`ft_printf`
>Replicates the behaviour of the real printf as far as concerns the following flags: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`.
