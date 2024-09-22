/**
 * @file    DataTypes_Variabless.c
 * @brief   print Hello World
 *
 * @Folder   git\C\stage1_introduction\DataTypes_Variabless.c
 * @author   Akash Verma
 * @date     
 *
 * @verbatim
 *  Date        Author        CR #       Description
 *  ------      --------      ----       --------------
 *  22/09/24    Akash                    Data Types and Variabless
 *  
 * @endverbatim
 **/

#include <stdio.h>
#include <limits.h>  // For integer type ranges
#include <float.h>   // For floating-point type ranges

/**
 * sizeof(type): This function gives the size (in bytes) of any data type.
 * limits.h: This header file contains macros like INT_MIN, INT_MAX, etc., which provide the minimum and maximum values for integer types.
 * float.h: This header provides constants like FLT_MIN, FLT_MAX, DBL_MIN, etc., for floating-point types.
*/

int main() {
    // Integer data types
    printf("Size and Range of Integer Types:\n");
    printf("int: \n");
    printf("  Size: %zu bytes\n", sizeof(int));
    printf("  Range: %d to %d\n\n", INT_MIN, INT_MAX);

    printf("short int: \n");
    printf("  Size: %zu bytes\n", sizeof(short int));
    printf("  Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("long int: \n");
    printf("  Size: %zu bytes\n", sizeof(long int));
    printf("  Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("long long int: \n");
    printf("  Size: %zu bytes\n", sizeof(long long int));
    printf("  Range: %lld to %lld\n\n", LLONG_MIN, LLONG_MAX);

    printf("unsigned int: \n");
    printf("  Size: %zu bytes\n", sizeof(unsigned int));
    printf("  Range: 0 to %u\n\n", UINT_MAX);

    printf("unsigned long int: \n");
    printf("  Size: %zu bytes\n", sizeof(unsigned long int));
    printf("  Range: 0 to %lu\n\n", ULONG_MAX);

    printf("unsigned long long int: \n");
    printf("  Size: %zu bytes\n", sizeof(unsigned long long int));
    printf("  Range: 0 to %llu\n\n", ULLONG_MAX);

    // Floating-point data types
    printf("Size and Range of Floating-Point Types:\n");
    printf("float: \n");
    printf("  Size: %zu bytes\n", sizeof(float));
    printf("  Range: %e to %e\n\n", FLT_MIN, FLT_MAX);

    printf("double: \n");
    printf("  Size: %zu bytes\n", sizeof(double));
    printf("  Range: %e to %e\n\n", DBL_MIN, DBL_MAX);

    printf("long double: \n");
    printf("  Size: %zu bytes\n", sizeof(long double));
    printf("  Range: %Le to %Le\n\n", LDBL_MIN, LDBL_MAX);

    // Character type
    printf("Size and Range of Character Type:\n");
    printf("char: \n");
    printf("  Size: %zu bytes\n", sizeof(char));
    printf("  Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    printf("unsigned char: \n");
    printf("  Size: %zu bytes\n", sizeof(unsigned char));
    printf("  Range: 0 to %d\n\n", UCHAR_MAX);


    /* Input/Output using printf() and scanf()*/
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int output = input;
    printf("Entered number is: %d", output);

    return 0;
}
