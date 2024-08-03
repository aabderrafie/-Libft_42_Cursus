
# Libft

## Overview

**Libft** is a project to create your own C library. This library will contain a collection of general-purpose functions, which can be used in various projects throughout your curriculum. By implementing these functions, you will gain a deeper understanding of the inner workings of C standard library functions and memory management.

## Summary

The project requires you to write and compile a library of C functions that mimic standard libc functions, along with additional utility functions.

## Mandatory Part

### Program Name
`libft.a`

### Turn-in Files
- `Makefile`
- `libft.h`
- `ft_*.c`

### Makefile Targets
- `NAME`
- `all`
- `clean`
- `fclean`
- `re`

### External Functions
Detailed in the sections below.

### Libft Authorization
Not applicable.

### Description
Create a library of functions that can be used in future projects. The library must include both standard libc functions with custom implementations and additional utility functions.

### Technical Considerations
- Declaring global variables is forbidden.
- Helper functions used to split a more complex function should be defined as static functions.
- Place all your files at the root of your repository.
- Do not turn in unused files.
- All `.c` files must compile with the flags `-Wall -Wextra -Werror`.
- Use the command `ar` to create your library. Using the `libtool` command is forbidden.
- The `libft.a` library must be created at the root of your repository.

## Part 1 - Libc Functions

In this part, you must reimplement a set of standard libc functions. These functions will have the same prototypes and behavior as the originals but will have the `ft_` prefix. 

The following functions must be implemented:

- **Character Checks and Conversions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String Manipulation**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
- **Memory Manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversion**: `ft_atoi`
- **Memory Allocation**: `ft_calloc`, `ft_strdup`

## Part 2 - Additional Functions

In this part, you will implement additional functions that are not part of the standard libc or are in a different form. These functions are useful for various common operations in C programming.

### Additional Functions List

- **String Manipulation**:
  - `ft_substr`: Create a substring from a string.
  - `ft_strjoin`: Join two strings into a new string.
  - `ft_strtrim`: Trim characters from the beginning and end of a string.
  - `ft_split`: Split a string into an array of strings using a delimiter.
  - `ft_itoa`: Convert an integer to a string.
  - `ft_strmapi`: Apply a function to each character of a string.
  - `ft_striteri`: Apply a function to each character of a string, passing the index and character.

- **File Descriptor Output**:
  - `ft_putchar_fd`: Write a character to a file descriptor.
  - `ft_putstr_fd`: Write a string to a file descriptor.
  - `ft_putendl_fd`: Write a string to a file descriptor followed by a newline.
  - `ft_putnbr_fd`: Write an integer to a file descriptor.

## Bonus Part

If you have completed the mandatory part, you can extend your library by implementing additional functions to manipulate linked lists. This bonus part will provide you with experience in working with dynamic data structures.

### List Structure

You must use the following structure to represent a node of your list:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

- `content`: The data contained in the node (can store any type of data).
- `next`: The address of the next node, or `NULL` if it is the last node.

### Bonus Functions List

- `ft_lstnew`: Create a new list node.
- `ft_lstadd_front`: Add a node to the beginning of the list.
- `ft_lstsize`: Count the number of nodes in a list.
- `ft_lstlast`: Return the last node of the list.
- `ft_lstadd_back`: Add a node to the end of the list.
- `ft_lstdelone`: Delete a node and free its content.
- `ft_lstclear`: Delete and free the entire list.
- `ft_lstiter`: Iterate over a list and apply a function to each node's content.
- `ft_lstmap`: Iterate over a list, apply a function to each node's content, and create a new list from the results.

## Installation and Usage

To compile and use the library, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/aabderrafie/libft_42.git
   cd libft
   ```

2. Compile the library using the Makefile:
   ```sh
   make
   ```

3. To clean object files:
   ```sh
   make clean
   ```

4. To clean object files and the library:
   ```sh
   make fclean
   ```

5. To recompile the library:
   ```sh
   make re
   ```

## Contributing

Contributions are welcome! Feel free to fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

Special thanks to the 42 Network and the community for their support and feedback.
