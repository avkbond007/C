### **Stage 2: Control Flow**

3. **Functions**
   - Function declaration, definition, and calling.
   - Parameters and return values.
   - Recursion.
   - Scope and lifetime of variables (`static`, `auto`, `extern`).

---

### **Stage 2: Control Flow**

3. **Functions**
   - **Resource**: [Functions in C - Programiz](https://www.programiz.com/c-programming/c-functions)
   - **Resource**: [C Functions - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/c_functions.htm)

---

### **Stage 2: Control Flow - Functions in C Programming**

Functions in C programming allow us to structure programs in a modular and reusable way. They help break down complex tasks into smaller, manageable pieces. Understanding how to declare, define, and use functions is essential in writing efficient programs.

---

### 1. **Function Declaration, Definition, and Calling**

#### **1.1 Function Declaration (Prototype)**

A function declaration tells the compiler about the function name, return type, and parameters before the function is used. It allows the compiler to check for correct usage, such as the number and type of arguments.

#### **Syntax**:
```c
return_type function_name(parameter_list);
```

#### **Example**:
```c
int add(int a, int b);  // Function declaration (prototype)
```

- **`int`**: The return type (the function will return an integer).
- **`add`**: The function name.
- **`(int a, int b)`**: The parameters (two integers are passed to the function).

---

#### **1.2 Function Definition**

The function definition contains the actual code that defines what the function does. It includes the function's logic.

#### **Syntax**:
```c
return_type function_name(parameter_list) {
    // Body of the function
    // Statements that perform the task
    return value;  // Return a value (if the return type is not `void`)
}
```

#### **Example**:
```c
int add(int a, int b) {  // Function definition
    return a + b;  // Return the sum of a and b
}
```

---

#### **1.3 Function Calling**

A function is called (or invoked) by using its name and passing the required arguments. The function executes and returns control to the calling function.

#### **Syntax**:
```c
function_name(arguments);
```

#### **Example**:
```c
#include <stdio.h>

int add(int a, int b);  // Function declaration

int main() {
    int result = add(3, 5);  // Calling the add function
    printf("Sum: %d\n", result);  // Output: Sum: 8
    return 0;
}

int add(int a, int b) {  // Function definition
    return a + b;  // Return the sum of a and b
}
```

---

### 2. **Parameters and Return Values**

Functions can accept inputs (parameters) and return outputs (return values).

- **Parameters**: These are inputs to the function. Parameters are defined within the parentheses of the function declaration and definition. They are used within the function to perform operations.
  
- **Return Values**: Functions can return values of a specific data type (e.g., `int`, `float`, `char`, etc.). If no value is returned, the return type is `void`.

#### **Example**:
```c
#include <stdio.h>

// Function declaration
float multiply(float x, float y);

int main() {
    float result = multiply(2.5, 4.0);  // Passing arguments to the function
    printf("Product: %.2f\n", result);  // Output: Product: 10.00
    return 0;
}

// Function definition
float multiply(float x, float y) {
    return x * y;  // Returning the product
}
```

In this example:
- The `multiply` function takes two `float` parameters, `x` and `y`, and returns a `float` value (the product of `x` and `y`).
  
---

### 3. **Recursion**

Recursion occurs when a function calls itself, either directly or indirectly. Recursive functions are useful for problems that can be divided into subproblems of the same type, such as computing factorials, Fibonacci series, or solving puzzles like the Tower of Hanoi.

#### **Example**: **Factorial Using Recursion**
```c
#include <stdio.h>

// Function to compute factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));  // Output: Factorial of 5 is 120
    return 0;
}
```

#### **Explanation**:
- The `factorial` function calls itself with a smaller value of `n` until it reaches the base case (`n == 0`), at which point it returns `1`. The recursive calls then unwind, multiplying the results.

---

### 4. **Scope and Lifetime of Variables**

Variables in C have different **scopes** (where they can be accessed) and **lifetime** (how long they exist in memory). These are controlled using storage classes like `static`, `auto`, and `extern`.

#### **4.1 `auto` (Automatic)**:
- This is the default storage class for local variables, meaning they are created when the function is called and destroyed when it returns. `auto` is rarely explicitly used, as it's implicit for local variables.

#### **4.2 `static`**:
- Variables declared as `static` inside a function retain their value between function calls. They are initialized only once and persist throughout the program's execution.
- `static` variables also have file scope when declared outside functions, meaning they are visible only within the file they are declared in.

#### **Example**: **`static` Variable**
```c
#include <stdio.h>

void counter() {
    static int count = 0;  // Static variable initialized only once
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter();  // Output: Count: 1
    counter();  // Output: Count: 2
    counter();  // Output: Count: 3
    return 0;
}
```

In this example, the variable `count` retains its value between function calls.

---

#### **4.3 `extern` (External)**:
- `extern` is used to declare a global variable or function that is defined in another file or at a later point in the same file. It tells the compiler that the variable exists, but the definition is elsewhere.

#### **Example**: **`extern` Variable**
```c
#include <stdio.h>

extern int globalVar;  // Declaration of external variable

int main() {
    printf("Global variable: %d\n", globalVar);  // Accessing the external variable
    return 0;
}

// Definition of external variable
int globalVar = 100;
```

- The `extern` keyword in this case tells the compiler that the variable `globalVar` is defined somewhere else, and it can be used across files.

---

### **Summary of Functions in C:**

| **Concept**                        | **Description**                                                                                              |
|------------------------------------|--------------------------------------------------------------------------------------------------------------|
| **Function Declaration**           | Tells the compiler about the function's name, return type, and parameters (prototype).                        |
| **Function Definition**            | Contains the actual code and logic of the function.                                                          |
| **Function Call**                  | Invokes the function, passing the necessary arguments.                                                       |
| **Parameters and Return Values**   | Functions can accept inputs (parameters) and return outputs (return values).                                  |
| **Recursion**                      | A function that calls itself, useful for solving problems like factorials and Fibonacci sequences.            |
| **Scope and Lifetime**             | Variables can be `auto` (local), `static` (persistent), or `extern` (global).                                |

---

Understanding functions, recursion, and variable scope is crucial for writing clean, modular, and reusable C programs. These concepts enable you to handle complex logic and optimize your program's memory usage and execution flow.