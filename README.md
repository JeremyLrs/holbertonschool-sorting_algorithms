
# C - Sorting algorithms & Big O

## 🚀 Description

The project is designed to teach you how to sort data and evaluate the efficiency of your solutions. It's a fundamental exercise in computer science that combines practical coding with the theory of algorithm analysis.

### Big O Notation
For each algorithm, you'll determine its time complexity using Big O notation. This notation is a way to describe how an algorithm's execution time scales as the input size (n) grows. You'll provide the complexity for the best, average, and worst-case scenarios. For example, a complexity of O(n) means the execution time grows quadratically with n.

---

## 📌 Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your source files must end with a new line
- A `README.md` file is mandatory at the root of the project
- Your code must follow the **Betty style**:
  - It will be checked using `betty-style.pl` and `betty-doc.pl`
- **No global variables** are allowed
- You must not have more than **5 functions per file**
- **Standard library** usage is allowed
- All function prototypes must be included in your `sort.h` header file
- All header files must be **include guarded**

---

## 📃 Files and Functions

| File                  | Description                              |
|:-----------------------|------------------------------------------|
| `sort.h`                | Header file containing all prototypes and structures |
| `0-bubble_sort.c`          | It compares and swaps adjacent elements to sort an array                        |
| `1-insertion_sort_list.c`   | It builds a sorted list one element at a time                   |
| `2-selection_sort.c`  | It finds the smallest element and puts it at the beginning                  |
| `3-quick_sort.c`        | It uses a "divide and conquer" strategy for fast sorting                       |
| `0-O.c`       | This file contains the time complexity of the Bubble Sort algorithm                       |
| `1-O.c`       | This file contains the time complexity of the Insertion Sort algorithm                       |
| `2-O.c`      | This file contains the time complexity of the Selection Sort algorithm|
| `3-O.c`       | This file contains the time complexity of the Quick Sort algorithm |

> 💡 You can create `main.c` files for testing your functions.

---

## 🔧 Data Structures and Functions
### Data structure for doubly linked list
```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
### Function for print_array
```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
### Function for print_list
```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
---

## 🔩 Compilation

To compile your code, use the following format:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```


## 📡 Usage

Here’s an example of how you can write a function that sorts an array of integers in ascending order using the Bubble sort algorithm:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```
---
## ⚛ Technology Stack
 [![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?logo=github&logoColor=white)](#)  [![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)](#) [![Vim](https://img.shields.io/badge/Vim-%2311AB00.svg?logo=vim&logoColor=white)](#) [![Git](https://img.shields.io/badge/Git-F05032?logo=git&logoColor=fff)](#)

---

## 👷🏼‍♂️👷🏼‍♂️ <span id="authors">Authors</span>

**👷🏼‍♂️ Haitu Nguyen**
- GitHub: [@N-Haitu31](https://github.com/N-Haitu31)

**👷🏼‍♂️ Jérémy LAURENS**
- GitHub: [@JeremyLrs](https://github.com/JeremyLrs)
- LinkedIn: [@jeremylrs](www.linkedin.com/in/jeremylrs)

