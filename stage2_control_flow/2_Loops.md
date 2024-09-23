### **Stage 2: Control Flow**

2. **Loops**
   - `for`, `while`, and `do-while` loops.
   - Loop control using `break` and `continue`.


---

### **Stage 2: Control Flow**

2. **Loops**
   - **Resource**: [Loops in C - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/c_loops.htm)
   - **Resource**: [For, While, and Do-While Loops in C - Programiz](https://www.programiz.com/c-programming/c-loops)

---


### **Stage 2: Introduction to C Programming - Loops**

Loops are used to execute a block of code repeatedly, either a specified number of times or until a certain condition is met. In C programming, there are three main types of loops: `for`, `while`, and `do-while`. Loop control mechanisms like `break` and `continue` allow further control over loop execution.

---

### 1. **`for` Loop**

The `for` loop is generally used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

#### **Syntax**:
```c
for (initialization; condition; increment/decrement) {
    // Code to execute repeatedly
}
```

- **initialization**: Runs once at the beginning of the loop (e.g., initializing a counter variable).
- **condition**: The loop continues executing as long as this condition is true.
- **increment/decrement**: Updates the loop counter after each iteration.

#### **Example**:
```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

#### **Output**:
```
1
2
3
4
5
```

---

### 2. **`while` Loop**

The `while` loop is used when the number of iterations is not known beforehand, and the loop continues until the condition becomes false. The condition is checked before each iteration.

#### **Syntax**:
```c
while (condition) {
    // Code to execute repeatedly
}
```

- The loop continues executing as long as the condition evaluates to true.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int i = 1;

    // Print numbers from 1 to 5 using a while loop
    while (i <= 5) {
        printf("%d\n", i);
        i++;  // Increment i after each iteration
    }

    return 0;
}
```

#### **Output**:
```
1
2
3
4
5
```

---

### 3. **`do-while` Loop**

The `do-while` loop is similar to the `while` loop, but the main difference is that the condition is checked **after** executing the loop body. This means the loop will always execute at least once, even if the condition is false from the beginning.

#### **Syntax**:
```c
do {
    // Code to execute repeatedly
} while (condition);
```

- The loop body is executed first, and then the condition is checked.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int i = 1;

    // Print numbers from 1 to 5 using do-while loop
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
```

#### **Output**:
```
1
2
3
4
5
```

---

### 4. **Loop Control: `break` and `continue`**

#### **`break` Statement**:
The `break` statement is used to immediately exit a loop, regardless of the condition or loop counter. This is useful when you want to stop the loop based on some condition inside the loop.

#### **Example of `break`**:
```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5, but break at 3
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit the loop when i equals 3
        }
        printf("%d\n", i);
    }

    return 0;
}
```

#### **Output**:
```
1
2
```

#### **`continue` Statement**:
The `continue` statement skips the current iteration of the loop and moves directly to the next iteration. This is useful when you want to skip specific iterations based on a condition but continue with the loop.

#### **Example of `continue`**:
```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5, but skip 3
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip the rest of the loop body for i == 3
        }
        printf("%d\n", i);
    }

    return 0;
}
```

#### **Output**:
```
1
2
4
5
```

---

### **Summary of Loops and Control Statements**:

| **Loop Type**       | **Description**                                                                                       |
|---------------------|-------------------------------------------------------------------------------------------------------|
| **`for` loop**      | Use when the number of iterations is known. Initialization, condition, and increment are in one line. |
| **`while` loop**    | Use when the number of iterations is unknown. Condition is checked before each iteration.              |
| **`do-while` loop** | Like the `while` loop, but the condition is checked after the loop body, ensuring it runs at least once.|
| **`break`**         | Exits the loop immediately, skipping any remaining iterations.                                         |
| **`continue`**      | Skips the current iteration and continues with the next iteration of the loop.                         |

---

### **When to Use Which Loop**:
- **`for` loop**: Best when the number of iterations is known.
- **`while` loop**: Use when you need to keep looping until a certain condition is false, and the number of iterations is unknown.
- **`do-while` loop**: Useful when you want the loop to run at least once, regardless of the condition.

Loops are fundamental for repetitive tasks in C programming, and understanding them thoroughly is key to mastering flow control in programs.