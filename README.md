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
_________________________________________________________________________
ft_isalpha             Checks if character is alphabetic (a-z, A-Z)
_________________________________________________________________________
ft_isdigit             Checks if character is a digit (0-9)
_________________________________________________________________________
ft_isalnum             Checks if character is alphanumeric
_________________________________________________________________________
ft_isascii             Checks if character is valid 7-bit ASCII
_________________________________________________________________________
ft_isprint             Checks if character is printable (including space)
```

### Counters
Utility functions for counting elements within data structures.

```
Function               Description
_________________________________________________________________________
ft_countdigits         Counts digits in a signed number for a given base
_________________________________________________________________________
ft_countwords          Counts words in a string using a delimiter
```

### Type Conversions
#### Character Conversions
```
Function               Description
_________________________________________________________________________
ft_toupper             Converts lowercase letter to uppercase
_________________________________________________________________________
ft_tolower             Converts uppercase letter to lowercase
```

#### String to Number
```
Function               Description
_________________________________________________________________________
ft_atoi                Converts string to integer
```

#### Number to String
```
Function               Description
_________________________________________________________________________
ft_itoa                Converts signed integer to string (with allocation)
_________________________________________________________________________
ft_itoa_base           Converts signed integer to string in specified base
_________________________________________________________________________
ft_itoa_base_buffer    Base conversion without malloc
_________________________________________________________________________
ft_utoa                Converts unsigned integer to string
_________________________________________________________________________
ft_utoa_base           Converts unsigned integer to string in specified base
_________________________________________________________________________
ft_utoa_base_buffer    Unsigned base conversion without malloc
```

### String Operations
#### Measurement
```
FunctionDescription
_________________________________________________________________________
ft_strlenReturns string length (excluding null terminator)
```

#### Comparison
```
FunctionDescription
_________________________________________________________________________
ft_strcmpCompares two strings
_________________________________________________________________________
ft_strncmpCompares up to n characters of two strings
```

#### Copying
```
FunctionDescription
_________________________________________________________________________
ft_strcpyCopies a string
_________________________________________________________________________
ft_strncpyCopies up to n characters
_________________________________________________________________________
ft_strlcpySize-bounded string copy with null-termination
_________________________________________________________________________
ft_strdupDuplicates string with memory allocation
```

#### Concatenation
```
FunctionDescription
_________________________________________________________________________
ft_strlcatSize-bounded string concatenation
_________________________________________________________________________
ft_strjoinJoins two strings into newly allocated memory
```

#### Searching
```
FunctionDescription
_________________________________________________________________________
ft_strchrFinds first occurrence of character
_________________________________________________________________________
ft_strrchrFinds last occurrence of character
_________________________________________________________________________
ft_strnstrFinds substring within length limit
_________________________________________________________________________
ft_substrExtracts substring with allocation
```

#### Modification
```
FunctionDescription
_________________________________________________________________________
ft_strtrimRemoves specified characters from both ends
_________________________________________________________________________
ft_splitSplits string by delimiter into array
_________________________________________________________________________
ft_striteriApplies function to each character (in-place)
_________________________________________________________________________
ft_strmapiApplies function to create new modified string
```

### Memory Management
#### Memory Manipulation
```
FunctionDescription
_________________________________________________________________________
ft_memsetFills memory block with specific byte value
_________________________________________________________________________
ft_bzeroSets memory block to zero
_________________________________________________________________________
ft_memcpyCopies memory block
_________________________________________________________________________
ft_memmoveSafely copies overlapping memory regions
_________________________________________________________________________
ft_memchrSearches for character in memory blockn
_________________________________________________________________________
ft_memcmpCompares two memory blocks
```

#### Memory Allocation
```
FunctionDescription
_________________________________________________________________________
ft_arenaArena-based memory allocation
_________________________________________________________________________
ft_callocAllocates zero-initialized memory
```

### File Descriptor Output
Functions for writing to file descriptors (stdout, stderr, files).

```
FunctionDescription
_________________________________________________________________________
ft_putchar_fdOutputs single character to fd
_________________________________________________________________________
ft_putstr_fdOutputs string to fd
_________________________________________________________________________
ft_putendl_fdOutputs string with newline to fd
_________________________________________________________________________
ft_putnbr_fdOutputs integer to fd
_________________________________________________________________________
ft_putnbr_base_fdOutputs number in specified base to fd
```

### Linked Lists
Complete linked list implementation with node management.

```
FunctionDescription
_________________________________________________________________________
ft_lstnewCreates new list node
_________________________________________________________________________
ft_lstadd_frontAdds node to list beginning
_________________________________________________________________________
ft_lstsizeReturns number of nodes in list
_________________________________________________________________________
ft_lstlastReturns last node of list
_________________________________________________________________________
ft_lstadd_backAdds node to list end
_________________________________________________________________________
ft_lstdeloneDeletes single node with content cleanup
_________________________________________________________________________
ft_lstclearDeletes and frees entire list
_________________________________________________________________________
ft_lstiterApplies function to each node's content
_________________________________________________________________________
ft_lstmapCreates new list by applying function to each node
```

### Variadic Functions
```
FunctionDescription
_________________________________________________________________________
ft_printfPrintf implementation supporting: %c, %s, %p, %d, %i, %u, %x, %X
```
