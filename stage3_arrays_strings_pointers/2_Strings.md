### **Stage 3: Arrays, Strings, and Pointers**

2. **Strings**
   - `char` arrays for string handling.
   - String functions: `strlen()`, `strcpy()`, `strcat()`, `strcmp()`.
   - Input and output of strings.

---

### **Stage 3: Arrays, Strings, and Pointers**

2. **Strings**
   - **Resource**: [Strings in C - Programiz](https://www.programiz.com/c-programming/c-strings)
   - **Resource**: [Strings in C - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/c_strings.htm)

---

### **Stage 3: Arrays, Strings, and Pointers**

#### **2. Strings in C**

In C, **strings** are handled as arrays of characters. A string is essentially a sequence of characters terminated by a special null character (`\0`), which marks the end of the string.

---

### **Character Arrays for String Handling**

A string in C is represented using a `char` array.

#### **Syntax**:
```c
char str[array_size];
```

- **`str`**: The name of the string (character array).
- **`array_size`**: The size of the character array (including space for the null character `\0`).

#### **Example**:
```c
#include <stdio.h>

int main() {
    char str[6] = "Hello";  // 5 characters + 1 null character
    printf("%s\n", str);    // Output: Hello

    return 0;
}
```

- The **null character** `\0` is automatically appended at the end of the string when it's initialized using double quotes.

Alternatively, you can declare strings as:
```c
char str[] = "Hello";  // Size automatically determined
```

---

### **Input and Output of Strings**

You can input strings from the user using `scanf()` or `gets()`. However, `scanf()` only reads input up to the first whitespace, while `gets()` reads an entire line until a newline is encountered.

#### **Input using `scanf()`**:
```c
#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);  // Input up to the first whitespace

    printf("You entered: %s\n", str);

    return 0;
}
```

#### **Input using `gets()`**:
```c
#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    gets(str);  // Input until newline

    printf("You entered: %s\n", str);

    return 0;
}
```

> **Note**: `gets()` is considered unsafe due to the risk of buffer overflow, and it has been removed in newer versions of the C standard. Instead, use `fgets()` for safer input.

#### **Output using `printf()`**:
```c
printf("String is: %s\n", str);
```
`%s` is used as the format specifier for strings.

---

### **String Functions in C**

C provides several library functions (in the `string.h` library) to manipulate strings.

#### **1. `strlen()`**: Calculate the Length of a String
- **`strlen()`** returns the number of characters in the string (excluding the null character `\0`).

#### **Syntax**:
```c
size_t strlen(const char *str);
```

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";

    printf("Length of the string is: %zu\n", strlen(str));  // Output: 5

    return 0;
}
```

---

#### **2. `strcpy()`**: Copy One String to Another
- **`strcpy()`** copies the contents of one string (source) into another string (destination).

#### **Syntax**:
```c
char *strcpy(char *dest, const char *src);
```

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];

    strcpy(dest, src);  // Copy "Hello" to dest
    printf("Destination string: %s\n", dest);  // Output: Hello

    return 0;
}
```

---

#### **3. `strcat()`**: Concatenate Two Strings
- **`strcat()`** appends (concatenates) the source string to the destination string.

#### **Syntax**:
```c
char *strcat(char *dest, const char *src);
```

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = " World";

    strcat(str1, str2);  // Append str2 to str1
    printf("Concatenated string: %s\n", str1);  // Output: Hello World

    return 0;
}
```

---

#### **4. `strcmp()`**: Compare Two Strings
- **`strcmp()`** compares two strings lexicographically (in dictionary order).
  - If strings are equal, it returns `0`.
  - If the first string is lexicographically greater, it returns a positive number.
  - If the second string is lexicographically greater, it returns a negative number.

#### **Syntax**:
```c
int strcmp(const char *str1, const char *str2);
```

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result > 0) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}
```

---

### **Key String Functions Summary**

| **Function** | **Description**                          | **Example**                                 |
|--------------|------------------------------------------|---------------------------------------------|
| `strlen()`   | Returns the length of a string            | `strlen("Hello")` returns `5`               |
| `strcpy()`   | Copies a string to another string         | `strcpy(dest, src)`                         |
| `strcat()`   | Concatenates two strings                  | `strcat(str1, str2)`                        |
| `strcmp()`   | Compares two strings                     | `strcmp(str1, str2)` returns `0`, `<0`, or `>0` |

---

### **Practical Examples of String Manipulation**

#### **Example 1: Reverse a String**
Write a C program to reverse a string using a `for` loop.
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);  // Unsafe, use fgets() in newer code

    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';  // Null-terminate the reversed string

    printf("Reversed string: %s\n", rev);

    return 0;
}
```

#### **Example 2: Palindrome Check**
Write a C program to check if a string is a palindrome (a string that reads the same forward and backward).
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int len, i, is_palindrome = 1;

    printf("Enter a string: ");
    gets(str);  // Unsafe, use fgets() in newer code

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
```

---

### **Key Points: Strings in C**

- Strings in C are arrays of characters, terminated by a null character (`\0`).
- Use functions like `strlen()`, `strcpy()`, `strcat()`, and `strcmp()` to manipulate strings.
- Strings can be input and output using functions like `scanf()` and `printf()`, but `fgets()` is safer for input.
- Be mindful of string length to avoid buffer overflows when working with string input and manipulation.

---

### **Practice Questions**

1. Write a C program to convert a string to uppercase.
2. Write a C program to find the frequency of a character in a given string.
3. Write a C program to concatenate two strings without using `strcat()`.
4. Write a C program to check if two strings are anagrams of each other.