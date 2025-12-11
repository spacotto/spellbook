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
Function               Description
_______________________________________________________________________________________
ft_isalpha             Checks if character is alphabetic (a-z, A-Z)
_______________________________________________________________________________________
ft_isdigit             Checks if character is a digit (0-9)
_______________________________________________________________________________________
ft_isalnum             Checks if character is alphanumeric
_______________________________________________________________________________________
ft_isascii             Checks if character is valid 7-bit ASCII
_______________________________________________________________________________________
ft_isprint             Checks if character is printable (including space)
```

### Counters
Utility functions for counting elements within data structures.

```
Function               Description
_______________________________________________________________________________________
ft_countdigits         Counts digits in a signed number for a given base
_______________________________________________________________________________________
ft_countwords          Counts words in a string using a delimiter
```

### Type Conversions
#### Character Conversions
```
Function               Description
_______________________________________________________________________________________
ft_toupper             Converts lowercase letter to uppercase
_______________________________________________________________________________________
ft_tolower             Converts uppercase letter to lowercase
```

#### String to Number
```
Function               Description
_______________________________________________________________________________________
ft_atoi                Converts string to integer
```

#### Number to String
```
Function               Description
_______________________________________________________________________________________
ft_itoa                Converts signed integer to string (with allocation)
_______________________________________________________________________________________
ft_itoa_base           Converts signed integer to string in specified base
_______________________________________________________________________________________
ft_itoa_base_buffer    Base conversion without malloc
_______________________________________________________________________________________
ft_utoa                Converts unsigned integer to string
_______________________________________________________________________________________
ft_utoa_base           Converts unsigned integer to string in specified base
_______________________________________________________________________________________
ft_utoa_base_buffer    Unsigned base conversion without malloc
```

### String Operations
#### Measurement
```
Function               Description
_______________________________________________________________________________________
ft_strlen              Returns string length (excluding null terminator)
```

#### Comparison
```
Function               Description
_______________________________________________________________________________________
ft_strcmp              Compares two strings
_______________________________________________________________________________________
ft_strncmp             Compares up to n characters of two strings
```

#### Copying
```
Function               Description
_______________________________________________________________________________________
ft_strcpy              Copies a string
_______________________________________________________________________________________
ft_strncpy             Copies up to n characters
_______________________________________________________________________________________
ft_strlcpy             Size-bounded string copy with null-termination
_______________________________________________________________________________________
ft_strdu p             Duplicates string with memory allocation
```

#### Concatenation
```
Function               Description
_______________________________________________________________________________________
ft_strlcat             Size-bounded string concatenation
_______________________________________________________________________________________
ft_strjoin             Joins two strings into newly allocated memory
```

#### Searching
```
Function               Description
_______________________________________________________________________________________
ft_strchr              Finds first occurrence of character
_______________________________________________________________________________________
ft_strrchr             Finds last occurrence of character
_______________________________________________________________________________________
ft_strnstr             Finds substring within length limit
_______________________________________________________________________________________
ft_substr              Extracts substring with allocation
```

#### Modification
```
Function               Description
_______________________________________________________________________________________
ft_strtrim             Removes specified characters from both ends
_______________________________________________________________________________________
ft_split               Splits string by delimiter into array
_______________________________________________________________________________________
ft_striteri            Applies function to each character (in-place)
_______________________________________________________________________________________
ft_strmapi             Applies function to create new modified string
```

### Memory Management
#### Memory Manipulation
```
Function               Description
_______________________________________________________________________________________
ft_memset              Fills memory block with specific byte value
_______________________________________________________________________________________
ft_bzero               Sets memory block to zero
_______________________________________________________________________________________
ft_memcpy              Copies memory block
_______________________________________________________________________________________
ft_memmove             Safely copies overlapping memory regions
_______________________________________________________________________________________
ft_memchr              Searches for character in memory blockn
_______________________________________________________________________________________
ft_memcmp              Compares two memory blocks
```

#### Memory Allocation
```
Function               Description
_______________________________________________________________________________________
ft_arena               Arena-based memory allocation
_______________________________________________________________________________________
ft_calloc              Allocates zero-initialized memory
```

### File Descriptor Output
Functions for writing to file descriptors (stdout, stderr, files).

```
Function               Description
_______________________________________________________________________________________
ft_putchar_fd          Outputs single character to fd
_______________________________________________________________________________________
ft_putstr_fd           Outputs string to fd
_______________________________________________________________________________________
ft_putendl_fd          Outputs string with newline to fd
_______________________________________________________________________________________
ft_putnbr_fd           Outputs integer to fd
_______________________________________________________________________________________
ft_putnbr_base_fd      Outputs number in specified base to fd
```

### Linked Lists
Complete linked list implementation with node management.

```
Function               Description
_______________________________________________________________________________________
ft_lstnew              Creates new list node
_______________________________________________________________________________________
ft_lstadd_front        Adds node to list beginning
_______________________________________________________________________________________
ft_lstsize             Returns number of nodes in list
_______________________________________________________________________________________
ft_lstlast             Returns last node of list
_______________________________________________________________________________________
ft_lstadd_back         Adds node to list end
_______________________________________________________________________________________
ft_lstdelone           Deletes single node with content cleanup
_______________________________________________________________________________________
ft_lstclear            Deletes and frees entire list
_______________________________________________________________________________________
ft_lstiter             Applies function to each node's content
_______________________________________________________________________________________
ft_lstmap              Creates new list by applying function to each node
```

### Variadic Functions
```
Function               Description
_______________________________________________________________________________________
ft_printf              Printf implementation supporting: %c, %s, %p, %d, %i, %u, %x, %X
```
