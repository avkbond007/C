/**
 * @file    operators.c
 * @brief   print Hello World
 *
 * @Folder   git\C\stage1_introduction\operators.c
 * @date     
 *
 * @verbatim
 *  Date        Author        CR #       Description
 *  ------      --------      ----       --------------
 *  22/09/24    Akash                    operators in C
 *  
 * @endverbatim
 **/

#include <stdio.h>

int main() {
    int a = 10, b = 5, c;
    float x = 5.5, y = 2.0;
    
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);  // Addition
    printf("a - b = %d\n", a - b);  // Subtraction
    printf("a * b = %d\n", a * b);  // Multiplication
    printf("a / b = %d\n", a / b);  // Division
    printf("a %% b = %d\n\n", a % b); // Modulus

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n\n", a <= b); // Less than or equal to

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > b) && (x < y): %d\n", (a > b) && (x < y));  // Logical AND
    printf("(a > b) || (x < y): %d\n", (a > b) || (x < y));  // Logical OR
    printf("!(a == b): %d\n\n", !(a == b));  // Logical NOT

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b: %d\n", a & b);  // Bitwise AND
    printf("a | b: %d\n", a | b);  // Bitwise OR
    printf("a ^ b: %d\n", a ^ b);  // Bitwise XOR
    printf("~a: %d\n", ~a);        // Bitwise NOT
    printf("a << 1: %d\n", a << 1); // Left shift
    printf("a >> 1: %d\n\n", a >> 1); // Right shift

    // Assignment Operators
    printf("Assignment Operators:\n");
    c = a;  // Assign
    printf("c = a: %d\n", c);

    c += b; // c = c + b
    printf("c += b: %d\n", c);

    c -= b; // c = c - b
    printf("c -= b: %d\n", c);

    c *= b; // c = c * b
    printf("c *= b: %d\n", c);

    c /= b; // c = c / b
    printf("c /= b: %d\n", c);

    c %= b; // c = c % b
    printf("c %%= b: %d\n", c);

    return 0;
}
