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

## 42 Custom Functions
Create a customised set of functions.

### 

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
