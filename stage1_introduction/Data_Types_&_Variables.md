### **Stage 1: Introduction to C Programming - Basic Syntax and Structure: Data Types and Variables**

#### 1. **Data Types**
Data types define the type of data a variable can hold in C. The three main categories are **Integer types**, **Floating-point types**, and **Character types**. Let’s go over each in detail:

---

#### **a) Integer Types**

Integer data types are used to store whole numbers (without any fractional part). Here are the common integer types:

- **`int`**: The most commonly used integer type. It usually stores 4 bytes (32 bits) of data, with a range of values that can differ based on the system, but typically from `-2,147,483,648` to `2,147,483,647`.
  - Example: `int age = 25;`
  
- **`short`**: Used when you need to store smaller integer values. Usually 2 bytes (16 bits) on most systems, with a typical range from `-32,768` to `32,767`.
  - Example: `short x = 100;`
  
- **`long`**: Used to store larger integer values. Usually 4 or 8 bytes depending on the system. Its range is much larger than that of `int`.
  - Example: `long population = 1234567890;`

- **Signed vs. Unsigned Integers**:
  - By default, integer types are **signed**, meaning they can store both positive and negative values.
  - You can also declare them as **unsigned** (e.g., `unsigned int`), which allows only non-negative values but effectively doubles the maximum value.
    - Example: `unsigned int score = 1000;` (range: `0` to `4,294,967,295`)

---

#### **b) Floating-point Types**

Floating-point data types are used to store decimal numbers or numbers with fractions. C provides two common types:

- **`float`**: Used to store single-precision floating-point numbers, which usually take up 4 bytes. Precision is about 6-7 decimal digits.
  - Example: `float price = 9.99;`
  
- **`double`**: Used for double-precision floating-point numbers. They provide more precision and a wider range (typically 8 bytes), with precision up to 15-16 decimal digits.
  - Example: `double distance = 12345.6789;`

---

#### **c) Character Type**

The **`char`** data type is used to store a single character. It requires 1 byte (8 bits) of memory, and its value is stored as an integer corresponding to an ASCII character.

- **Example**:
  ```c
  char grade = 'A';
  ```

  - Here, `grade` stores the character `A`, but internally, it is represented as the integer `65` (the ASCII value of `A`).

---

### **2. Constants**

Constants are fixed values that cannot be changed during program execution. You can declare constants in two ways in C:

#### **a) Using `const` Keyword**
- You can use the `const` keyword to declare a variable as a constant, which means its value cannot be modified later in the program.
  
  - Example:
    ```c
    const int DAYS_IN_WEEK = 7;
    ```

  - Here, `DAYS_IN_WEEK` is declared as a constant integer with the value 7.

#### **b) Using `#define` Preprocessor Directive**
- Another way to define constants is by using the `#define` preprocessor directive. This is typically used for defining values that remain constant throughout the program.

  - Example:
    ```c
    #define PI 3.14159
    ```

  - `PI` now holds the value `3.14159` and can be used in the program wherever you need it. The compiler will replace all occurrences of `PI` with `3.14159` during compilation.

---

### **3. Variables**

- **Variables** are used to store data that can change during program execution. Each variable in C has a type, a name, and a value.
  
- **Declaration**: A variable is declared by specifying its data type followed by its name.
  - Example:
    ```c
    int age;       // Declaration of an integer variable 'age'
    float height;  // Declaration of a floating-point variable 'height'
    ```

- **Initialization**: You can also assign a value to a variable at the time of declaration.
  - Example:
    ```c
    int age = 25;       // Declares and initializes 'age' to 25
    float height = 5.9; // Declares and initializes 'height' to 5.9
    ```

---

### **4. Input/Output using `printf()` and `scanf()`**

In C, **`printf()`** is used to output (print) data, while **`scanf()`** is used to take input from the user. Let’s explore them with examples:

#### **a) `printf()`**
- **`printf()`** is used to print formatted output to the console.
  
- Example:
  ```c
  int age = 25;
  printf("I am %d years old.\n", age);
  ```

  - **Explanation**:
    - The string `"I am %d years old.\n"` is the format string.
    - `%d` is a **format specifier** that tells `printf()` to expect an integer (in this case, the value of `age`).
    - `\n` is a newline character, which moves the cursor to the next line after printing the message.
    - The result will be:
      ```
      I am 25 years old.
      ```

- Common format specifiers:
  - `%d` or `%i`: for integers (e.g., `int`)
  - `%f`: for floating-point numbers (e.g., `float`, `double`)
  - `%c`: for characters (e.g., `char`)
  - `%s`: for strings (arrays of characters)

#### **b) `scanf()`**
- **`scanf()`** is used to read formatted input from the user.

- Example:
  ```c
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("You are %d years old.\n", age);
  ```

  - **Explanation**:
    - `scanf("%d", &age);` reads an integer input from the user and stores it in the variable `age`.
    - The **`&`** (address-of) operator is used to pass the address of the variable to `scanf()`, so it knows where to store the input value.
    - After the user enters a number, it will be printed back to the screen using `printf()`.
    - If the user enters `30`, the output will be:
      ```
      Enter your age: 30
      You are 30 years old.
      ```

#### **Example of Using `printf()` and `scanf()` Together**:

```c
#include <stdio.h>

int main() {
    int age;
    float height;
    
    // Asking for user input
    printf("Enter your age: ");
    scanf("%d", &age);  // Read an integer input
    
    printf("Enter your height (in meters): ");
    scanf("%f", &height);  // Read a floating-point input
    
    // Output the user's age and height
    printf("You are %d years old and %.2f meters tall.\n", age, height);
    
    return 0;
}
```

- **Explanation**:
  - The program asks the user to input their age and height using `scanf()`.
  - `%.2f` in `printf()` means to display the floating-point number with 2 digits after the decimal.
  - Example output:
    ```
    Enter your age: 25
    Enter your height (in meters): 1.75
    You are 25 years old and 1.75 meters tall.
    ```

---

### **Key Points Recap**:

1. **Data Types**:
   - **Integer types**: `int`, `short`, `long` for whole numbers.
   - **Floating-point types**: `float`, `double` for decimal numbers.
   - **Character type**: `char` for storing individual characters.

2. **Constants**:
   - Use `const` or `#define` to create variables that cannot be changed during execution.

3. **Variables**:
   - Declared using a data type, and can be initialized with a value.

4. **Input/Output**:
   - **`printf()`** is used to print data to the console.
   - **`scanf()`** is used to take input from the user.

By mastering these basic concepts, you'll be able to write simple programs that involve input/output, calculations, and basic logic!