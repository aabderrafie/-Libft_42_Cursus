
# Libft (Library of Functions)
# Introduction
In this project, you'll create a custom library of functions. Below is the structure and purpose of the files you will work with:

#.c Files
This is where you'll write all your functions.

# Header File (.h)
Your header file serves two main purposes:

Centralize includes: Instead of adding #include <unistd.h> in all your .c files, you include it once in your header file. All .c files will reference this header.
Function declarations: If one .c file uses a function from another .c file, you don't need to write the function above. Simply include #include "libft.h" and it will locate the function in your header file.
Remember to add #include "libft.h" in all your .c files.

# Makefile
The Makefile automates the compilation of your project. Unlike in the piscine, where you manually created an int main and used gcc to compile projects, with a Makefile, you can simply type make to compile your code once the Makefile is set up.

Sure, here is an improved version with a more polished description:

---

# Libft Functions

## Character Functions (`<ctype.h>`)

- **ft_isalpha**: Determines if a character is alphabetic.
- **ft_isdigit**: Checks if a character is a digit (0-9).
- **ft_isalnum**: Verifies if a character is alphanumeric.
- **ft_isascii**: Confirms if a character belongs to the ASCII set.
- **ft_isprint**: Checks if a character is printable.
- **ft_toupper**: Converts a character to uppercase.
- **ft_tolower**: Converts a character to lowercase.

## String and Memory Functions (`<string.h>`)

- **ft_memset**: Fills a block of memory with a specified byte.
- **ft_strlen**: Computes the length of a string.
- **ft_bzero**: Erases a block of memory by setting bytes to zero.
- **ft_memcpy**: Copies bytes between memory areas.
- **ft_memmove**: Safely copies bytes between overlapping memory areas.
- **ft_strlcpy**: Copies a string to a buffer, ensuring null-termination.
- **ft_strlcat**: Appends a string to a buffer, ensuring null-termination.
- **ft_strchr**: Finds the first occurrence of a character in a string.
- **ft_strrchr**: Finds the last occurrence of a character in a string.
- **ft_strncmp**: Compares a specified number of characters between two strings.
- **ft_memchr**: Scans memory for a specified byte.
- **ft_memcmp**: Compares two blocks of memory.
- **ft_strnstr**: Searches for a substring within a string.
- **ft_strdup**: Creates a duplicate of a given string.

## Conversion and Allocation Functions (`<stdlib.h>`)

- **ft_atoi**: Converts a string to an integer.
- **ft_calloc**: Allocates memory for an array and initializes it to zero.

## Additional Utility Functions

- **ft_substr**: Extracts a substring from a given string.
- **ft_strjoin**: Concatenates two strings into a new string.
- **ft_strtrim**: Removes leading and trailing characters from a string.
- **ft_split**: Splits a string into an array of substrings based on a delimiter.
- **ft_itoa**: Converts an integer to a string.
- **ft_strmapi**: Applies a function to each character of a string, creating a new string.
- **ft_striteri**: Applies a function to each character of a string (modifying in place).
- **ft_putchar_fd**: Outputs a character to a file descriptor.
- **ft_putstr_fd**: Outputs a string to a file descriptor.
- **ft_putendl_fd**: Outputs a string followed by a newline to a file descriptor.
- **ft_putnbr_fd**: Outputs an integer to a file descriptor.

## Linked List Functions

- **ft_lstnew**: Creates a new linked list element.
- **ft_lstadd_front**: Adds an element to the beginning of a linked list.
- **ft_lstsize**: Counts the number of elements in a linked list.
- **ft_lstlast**: Retrieves the last element of a linked list.
- **ft_lstadd_back**: Adds an element to the end of a linked list.
- **ft_lstclear**: Deletes and frees all elements of a linked list.
- **ft_lstiter**: Applies a function to each element of a linked list.
- **ft_lstmap**: Creates a new linked list by applying a function to each element of an existing list.
# Subject
https://cdn.intra.42.fr/pdf/pdf/135135/en.subject.pdf
