Here's a table of common C data types and their corresponding format specifiers:

| **Data Type**         | **Description**                         | **Format Specifier** |
|-----------------------|-----------------------------------------|----------------------|
| `int`                 | Integer (4 bytes)                      | `%d` or `%i`         |
| `short int` (or `short`) | Short integer (2 bytes)              | `%hd`                |
| `long int` (or `long`) | Long integer (4 or 8 bytes)           | `%ld`                |
| `long long int` (or `long long`) | Long long integer (8 bytes) | `%lld`               |
| `unsigned int`        | Unsigned integer (4 bytes)              | `%u`                 |
| `unsigned short int`  | Unsigned short integer (2 bytes)        | `%hu`                |
| `unsigned long int`   | Unsigned long integer (4 or 8 bytes)    | `%lu`                |
| `unsigned long long int` | Unsigned long long integer (8 bytes) | `%llu`               |
| `float`               | Single-precision floating-point (4 bytes) | `%f`               |
| `double`              | Double-precision floating-point (8 bytes) | `%lf`              |
| `long double`         | Extended precision floating-point (10-16 bytes) | `%Lf`         |
| `char`                | Character (1 byte)                      | `%c`                 |
| `char[]` (string)     | String (array of characters)            | `%s`                 |
| `void *`              | Pointer to any data type                | `%p`                 |

### **Explanation of Common Data Types**:
1. **Integers**: Represent whole numbers (both signed and unsigned).
   - `%d` or `%i` is used for signed integers.
   - `%u` is used for unsigned integers.

2. **Floating-point numbers**: 
   - `%f` is used for single-precision (float).
   - `%lf` is for double-precision (double).

3. **Characters**: 
   - `%c` is used for individual characters.
   - `%s` is used for strings (arrays of characters).

4. **Pointers**: 
   - `%p` is used for printing pointer addresses.

This table provides a quick reference for using correct format specifiers for different C data types when using `printf()` and `scanf()`.