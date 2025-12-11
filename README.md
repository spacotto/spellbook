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
FunctionDescriptionft_strlenReturns string length (excluding null terminator)
```

#### Comparison
```
FunctionDescriptionft_strcmpCompares two stringsft_strncmpCompares up to n characters of two strings
```

#### Copying
```
FunctionDescriptionft_strcpyCopies a stringft_strncpyCopies up to n charactersft_strlcpySize-bounded string copy with null-terminationft_strdupDuplicates string with memory allocation
```

#### Concatenation
```
FunctionDescriptionft_strlcatSize-bounded string concatenationft_strjoinJoins two strings into newly allocated memory
```

#### Searching
```
FunctionDescriptionft_strchrFinds first occurrence of characterft_strrchrFinds last occurrence of characterft_strnstrFinds substring within length limitft_substrExtracts substring with allocation
```

#### Modification
```
FunctionDescriptionft_strtrimRemoves specified characters from both endsft_splitSplits string by delimiter into arrayft_striteriApplies function to each character (in-place)ft_strmapiApplies function to create new modified string
```

### Memory Management
#### Memory Manipulation
```
FunctionDescriptionft_memsetFills memory block with specific byte valueft_bzeroSets memory block to zeroft_memcpyCopies memory blockft_memmoveSafely copies overlapping memory regionsft_memchrSearches for character in memory blockft_memcmpCompares two memory blocks
```

#### Memory Allocation
```
FunctionDescriptionft_arenaArena-based memory allocationft_callocAllocates zero-initialized memory
```

### File Descriptor Output
Functions for writing to file descriptors (stdout, stderr, files).

```
FunctionDescriptionft_putchar_fdOutputs single character to fdft_putstr_fdOutputs string to fdft_putendl_fdOutputs string with newline to fdft_putnbr_fdOutputs integer to fdft_putnbr_base_fdOutputs number in specified base to fd
```

### Linked Lists
Complete linked list implementation with node management.

```
FunctionDescriptionft_lstnewCreates new list nodeft_lstadd_frontAdds node to list beginningft_lstsizeReturns number of nodes in listft_lstlastReturns last node of listft_lstadd_backAdds node to list endft_lstdeloneDeletes single node with content cleanupft_lstclearDeletes and frees entire listft_lstiterApplies function to each node's contentft_lstmapCreates new list by applying function to each node
```

### Variadic Functions
```
FunctionDescriptionft_printfPrintf implementation supporting: %c, %s, %p, %d, %i, %u, %x, %X
```
