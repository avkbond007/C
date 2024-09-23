### **Stage 1: Introduction to C Programming - Basic Syntax and Structure: Operators**

Operators are symbols used in C programming to perform operations on variables and values. They are divided into several categories based on the types of operations they perform.

---

### **1. Arithmetic Operators**

Arithmetic operators perform basic mathematical operations. These include addition, subtraction, multiplication, division, and modulus (remainder).

| Operator | Description                  | Example       | Result      |
|----------|------------------------------|---------------|-------------|
| `+`      | Addition                     | `x + y`       | Sum of `x` and `y` |
| `-`      | Subtraction                  | `x - y`       | Difference between `x` and `y` |
| `*`      | Multiplication               | `x * y`       | Product of `x` and `y` |
| `/`      | Division                     | `x / y`       | Quotient when `x` is divided by `y` |
| `%`      | Modulus (remainder)          | `x % y`       | Remainder when `x` is divided by `y` |

#### **Example: Arithmetic Operators**

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    printf("Addition: %d\n", a + b);      // 10 + 3 = 13
    printf("Subtraction: %d\n", a - b);   // 10 - 3 = 7
    printf("Multiplication: %d\n", a * b); // 10 * 3 = 30
    printf("Division: %d\n", a / b);      // 10 / 3 = 3 (integer division)
    printf("Modulus: %d\n", a % b);       // 10 % 3 = 1 (remainder)
    
    return 0;
}
```

---

### **2. Relational Operators**

Relational operators are used to compare two values. The result is either **true (1)** or **false (0)**.

| Operator | Description            | Example    | Result |
|----------|------------------------|------------|--------|
| `==`     | Equal to               | `x == y`   | `1` if `x` equals `y`, otherwise `0` |
| `!=`     | Not equal to           | `x != y`   | `1` if `x` is not equal to `y`, otherwise `0` |
| `<`      | Less than              | `x < y`    | `1` if `x` is less than `y`, otherwise `0` |
| `>`      | Greater than           | `x > y`    | `1` if `x` is greater than `y`, otherwise `0` |
| `<=`     | Less than or equal to  | `x <= y`   | `1` if `x` is less than or equal to `y` |
| `>=`     | Greater than or equal to| `x >= y`   | `1` if `x` is greater than or equal to `y` |

#### **Example: Relational Operators**

```c
#include <stdio.h>

int main() {
    int x = 10, y = 5;
    
    printf("Is x equal to y? %d\n", x == y);   // 0 (false)
    printf("Is x not equal to y? %d\n", x != y);  // 1 (true)
    printf("Is x greater than y? %d\n", x > y);  // 1 (true)
    printf("Is x less than y? %d\n", x < y);  // 0 (false)
    
    return 0;
}
```

---

### **3. Logical Operators**

Logical operators are used to combine or invert conditions. They evaluate to **true (1)** or **false (0)**.

| Operator | Description        | Example      | Result                     |
|----------|--------------------|--------------|----------------------------|
| `&&`     | Logical AND         | `x && y`     | `1` if both `x` and `y` are true, otherwise `0` |
| `||`     | Logical OR          | `x || y`     | `1` if either `x` or `y` is true, otherwise `0` |
| `!`      | Logical NOT         | `!x`         | `1` if `x` is false, `0` if `x` is true |

#### **Example: Logical Operators**

```c
#include <stdio.h>

int main() {
    int x = 1, y = 0;
    
    printf("x AND y: %d\n", x && y);   // 0 (false)
    printf("x OR y: %d\n", x || y);    // 1 (true)
    printf("NOT x: %d\n", !x);         // 0 (false)
    printf("NOT y: %d\n", !y);         // 1 (true)
    
    return 0;
}
```

---

### **4. Assignment Operators**

Assignment operators are used to assign values to variables. The most common operator is `=`. Other compound assignment operators allow you to perform an operation and assign the result at the same time.

| Operator | Description                | Example      | Equivalent to         |
|----------|----------------------------|--------------|-----------------------|
| `=`      | Simple assignment           | `x = 5`      | `x = 5`               |
| `+=`     | Add and assign              | `x += 3`     | `x = x + 3`           |
| `-=`     | Subtract and assign         | `x -= 2`     | `x = x - 2`           |
| `*=`     | Multiply and assign         | `x *= 4`     | `x = x * 4`           |
| `/=`     | Divide and assign           | `x /= 2`     | `x = x / 2`           |
| `%=`     | Modulus and assign          | `x %= 3`     | `x = x % 3`           |

#### **Example: Assignment Operators**

```c
#include <stdio.h>

int main() {
    int x = 10;
    
    x += 5;  // x = x + 5
    printf("x += 5: %d\n", x);  // 15
    
    x -= 3;  // x = x - 3
    printf("x -= 3: %d\n", x);  // 12
    
    x *= 2;  // x = x * 2
    printf("x *= 2: %d\n", x);  // 24
    
    x /= 4;  // x = x / 4
    printf("x /= 4: %d\n", x);  // 6
    
    x %= 5;  // x = x % 5
    printf("x %%= 5: %d\n", x);  // 1
    
    return 0;
}
```

---

### **5. Bitwise Operators**

Bitwise operators perform operations on the individual bits of integers. They are used in low-level programming for tasks like working with hardware registers, network protocols, and encryption.

| Operator | Description                     | Example    | Explanation                  |
|----------|---------------------------------|------------|------------------------------|
| `&`      | Bitwise AND                     | `x & y`    | Each bit of `x` AND `y`       |
| `|`      | Bitwise OR                      | `x | y`    | Each bit of `x` OR `y`        |
| `^`      | Bitwise XOR                     | `x ^ y`    | Each bit of `x` XOR `y`       |
| `~`      | Bitwise NOT (One's complement)  | `~x`       | Inverts each bit of `x`       |
| `<<`     | Left shift                      | `x << 2`   | Shifts bits of `x` to the left |
| `>>`     | Right shift                     | `x >> 2`   | Shifts bits of `x` to the right|

#### **Example: Bitwise Operators**

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;  // In binary: a = 101, b = 011
    
    printf("Bitwise AND: %d\n", a & b);  // 101 & 011 = 001 (1 in decimal)
    printf("Bitwise OR: %d\n", a | b);   // 101 | 011 = 111 (7 in decimal)
    printf("Bitwise XOR: %d\n", a ^ b);  // 101 ^ 011 = 110 (6 in decimal)
    printf("Bitwise NOT: %d\n", ~a);     // ~101 = 010 (Two's complement, result depends on system)
    
    printf("Left shift: %d\n", a << 1);  // 101 << 1 = 1010 (10 in decimal)
    printf("Right shift: %d\n", a >> 1); // 101 >> 1 = 010 (2 in decimal)
    
    return 0;
}
```

- **Explanation**:
  - **AND**:

 Only `1` is returned if both bits are `1`.
  - **OR**: Returns `1` if either of the bits is `1`.
  - **XOR**: Returns `1` if one bit is `1` and the other is `0`.
  - **NOT**: Inverts all bits of the number.
  - **Left Shift (`<<`)**: Shifts all bits to the left, effectively multiplying the number by 2 for each shift.
  - **Right Shift (`>>`)**: Shifts bits to the right, dividing the number by 2 for each shift.

---

### **Conclusion**

Understanding these operators in C helps you perform arithmetic, make comparisons, and manipulate bits at a low level, 
which is fundamental to many C programs. These operators are often used in conjunction with control structures like `if` statements 
and loops to make complex decisions and calculations.