### **Stage 3: Arrays, Strings, and Pointers**

1. **Arrays**
   - One-dimensional and two-dimensional arrays.
   - Array initialization and manipulation.
   - Iterating through arrays.
---

### **Stage 3: Arrays, Strings, and Pointers**

1. **Arrays**
   - **Resource**: [Arrays in C - Programiz](https://www.programiz.com/c-programming/c-arrays)
   - **Resource**: [Arrays in C - GeeksforGeeks](https://www.geeksforgeeks.org/array-in-c/)

---

### **Stage 3: Arrays, Strings, and Pointers**

#### **1. Arrays in C**

An **array** is a collection of variables of the same type that are stored in contiguous memory locations. Arrays allow you to store and manipulate large sets of data efficiently. Arrays can be **one-dimensional** (linear) or **two-dimensional** (matrix-like), and you can iterate through arrays using loops.

---

### **One-dimensional Arrays**

A one-dimensional array is like a list of elements that can be accessed using an index.

#### **Syntax**:
```c
data_type array_name[array_size];
```

- **`data_type`**: The type of data stored in the array (e.g., `int`, `float`, `char`).
- **`array_name`**: The name of the array.
- **`array_size`**: The number of elements in the array.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // Array initialization

    // Accessing array elements
    printf("First element: %d\n", numbers[0]);  // Output: 10
    printf("Last element: %d\n", numbers[4]);   // Output: 50

    return 0;
}
```

#### **Key Points**:
- Arrays in C are **zero-indexed**, meaning the first element has an index of `0`.
- You can initialize arrays during declaration as shown above.

---

### **Array Initialization and Manipulation**

Arrays can be initialized in multiple ways. Once initialized, elements in the array can be updated or manipulated.

#### **Initialization Examples**:
```c
int arr1[5] = {1, 2, 3, 4, 5};  // Full initialization
int arr2[5] = {0};               // All elements set to 0
int arr3[] = {1, 2, 3};          // Size determined by the number of initializers
```

#### **Array Manipulation**:
You can modify elements using their index.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Modify the second element
    numbers[1] = 25;

    printf("Modified second element: %d\n", numbers[1]);  // Output: 25
    return 0;
}
```

---

### **Iterating Through Arrays**

The most common way to iterate through arrays is by using loops, such as `for` or `while`.

#### **Example of Iterating Using a `for` Loop**:
```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Loop through each element of the array
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
```

#### **Output**:
```
Element at index 0: 10
Element at index 1: 20
Element at index 2: 30
Element at index 3: 40
Element at index 4: 50
```

---

### **Two-dimensional Arrays**

A two-dimensional array is an array of arrays, useful for representing tables, matrices, or grids.

#### **Syntax**:
```c
data_type array_name[rows][columns];
```

- **`rows`**: Number of rows.
- **`columns`**: Number of columns.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},  // Row 0
        {4, 5, 6},  // Row 1
        {7, 8, 9}   // Row 2
    };

    printf("Element at row 1, column 2: %d\n", matrix[1][2]);  // Output: 6

    return 0;
}
```

---

### **Array Initialization and Manipulation (2D Arrays)**

#### **Initialization**:
Two-dimensional arrays can be initialized during declaration in a similar way as one-dimensional arrays.

#### **Example**:
```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

#### **Manipulating 2D Arrays**:
Access elements using two indices: one for the row and one for the column.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    // Modify an element
    matrix[0][1] = 5;  // Changing the value at row 0, column 1

    printf("Modified matrix element: %d\n", matrix[0][1]);  // Output: 5

    return 0;
}
```

---

### **Iterating Through 2D Arrays**

Nested loops are used to iterate over two-dimensional arrays, with the outer loop iterating over the rows and the inner loop iterating over the columns.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    // Iterate over the 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element at [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
```

#### **Output**:
```
Element at [0][0]: 1
Element at [0][1]: 2
Element at [1][0]: 3
Element at [1][1]: 4
```

---

### **Key Points: Arrays in C**

- **One-dimensional arrays** are used for linear data storage, while **two-dimensional arrays** can be used to represent matrices or grids.
- **Array initialization** can be partial, where unspecified elements are set to `0` by default.
- Arrays can be iterated over using loops (typically `for` loops).
- The size of the array must be specified at compile time (unless dynamically allocated).

---

### **Practice Questions**

1. **One-dimensional Arrays**:
   - Write a C program to find the sum and average of elements in a one-dimensional array.
   - Write a C program to reverse the elements of a one-dimensional array.

2. **Two-dimensional Arrays**:
   - Write a C program to perform matrix addition.
   - Write a C program to transpose a 3x3 matrix (swap rows and columns).

---

Understanding arrays in C is essential for managing collections of data efficiently. They allow for easier handling of repetitive tasks and are foundational for advanced data structures.