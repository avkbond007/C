### **Stage 2: Control Flow**

1. **Conditional Statements**
   - `if`, `else if`, `else` structures.
   - `switch-case` statements.


### **Stage 2: Control Flow**

1. **Conditional Statements**
   - **Resource**: [C Conditional Statements - Programiz](https://www.programiz.com/c-programming/c-if-else)
   - **Resource**: [Switch Statement in C - GeeksforGeeks](https://www.geeksforgeeks.org/switch-statement-cc/)


---

### **Stage 2: Introduction to C Programming - Conditional Statements**

Conditional statements are essential in programming to make decisions based on specific conditions. They control the flow of a program by executing certain blocks of code when particular conditions are met.

---

### 1. **`if`, `else if`, `else` Structures**

The `if`, `else if`, and `else` structures are used to test conditions and execute different code based on those conditions. Let's explore these constructs.

#### **Syntax**:
```c
if (condition) {
    // code block executed if the condition is true
} else if (another condition) {
    // code block executed if the previous condition is false, but this one is true
} else {
    // code block executed if all previous conditions are false
}
```

#### **Explanation**:
- **`if`**: Tests a condition. If it evaluates to true, the block of code inside the `if` statement is executed.
- **`else if`**: Optional. This provides an alternative condition if the `if` condition is false. You can have multiple `else if` blocks.
- **`else`**: Optional. This block executes if none of the `if` or `else if` conditions are true.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int number = 10;

    if (number > 10) {
        printf("The number is greater than 10.\n");
    } else if (number == 10) {
        printf("The number is equal to 10.\n");
    } else {
        printf("The number is less than 10.\n");
    }

    return 0;
}
```

#### **Output**:
```
The number is equal to 10.
```

---

### 2. **`switch-case` Statements**

The `switch-case` statement is another way of making decisions based on the value of a variable or expression. It is often used as an alternative to multiple `if-else` statements when dealing with a single variable that can take on a discrete set of values.

#### **Syntax**:
```c
switch (expression) {
    case value1:
        // code block executed if expression matches value1
        break;
    case value2:
        // code block executed if expression matches value2
        break;
    ...
    default:
        // code block executed if none of the cases match
}
```

#### **Explanation**:
- **`switch(expression)`**: The expression is evaluated once, and its result is compared with the values in each `case`.
- **`case`**: If the value matches the expression, the associated code block is executed.
- **`break`**: Terminates the switch-case structure, preventing the execution from falling into subsequent cases (this is important to avoid "fall-through").
- **`default`**: Optional. This block executes if no case values match the expression. It works like the `else` in an `if-else` structure.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

#### **Output**:
```
Wednesday
```

---

### **Key Differences Between `if-else` and `switch-case`**:

1. **`if-else`** is best suited for checking complex conditions (such as ranges, multiple variables, or logical operators).
2. **`switch-case`** is useful when you need to compare a single variable or expression against a set of known values.
3. `switch` is more readable and faster in situations with many possible discrete values, but `if-else` is more flexible.

---

### **Conclusion**:
- **`if`, `else if`, `else`**: Useful for decision-making when conditions are complex or based on ranges or logical operations.
- **`switch-case`**: Ideal for choosing actions based on the exact value of a single variable.

These control structures are fundamental to directing program flow based on different conditions and are heavily used in C programming.

---