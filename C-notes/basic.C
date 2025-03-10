/*What is a Preprocessor Directive in C?
A preprocessor directive in C is a command that instructs the compiler to process the code before actual compilation begins. These directives start with a # symbol and are handled by the C preprocessor.*/
// #include <stdio.h> 
// #include <math.h>  
/*
stdio.h – Standard Input/Output functions (e.g., printf, scanf, fopen)
stdlib.h – Standard utility functions (e.g., malloc, free, atoi, rand)
math.h – Mathematical functions (e.g., sqrt, pow, sin, cos)
string.h – String manipulation (e.g., strcpy, strlen, strcmp)
ctype.h – Character handling (e.g., isalpha, isdigit, tolower)
time.h – Time and date functions (e.g., time, difftime, clock)
stdbool.h – Boolean type (true, false values in C99)
limits.h – Defines various system limits (e.g., INT_MAX, CHAR_MIN)
float.h – Defines limits of floating-point values (e.g., FLT_MAX, DBL_MIN)
assert.h – Debugging and assertions (assert macro)
Additional Headers
errno.h – Error handling macros (errno, perror)
signal.h – Signal handling (signal, raise)
setjmp.h – Non-local jumps (setjmp, longjmp)
stdarg.h – Variable arguments (va_start, va_arg, va_end)
wchar.h – Wide character functions
wctype.h – Wide character classification and mapping
Headers for File and Process Management
fcntl.h – File control options
unistd.h – POSIX operating system API (not available in Windows)
sys/types.h – System data types
sys/stat.h – File status
dirent.h – Directory handling
stdio_ext.h – GNU extensions for stdio.h

*/


#include <stdio.h>

// int main is  our main body to execute the code ,, all code in side of main body will run ,
int main (){
    //printf is used for output
    printf("Hellow world! \n");

    // here float, int , char, string all are data type, means what kind of data u need , int for number, char for c
    /*
    DataType	    Size(in bytes)	            Description
    char	           1	                Stores a single character (e.g., 'A', 'B')
    int	            2or4	                Stores integers (whole numbers)
    float	           4	                Stores floating-point (decimal) numbers
    double	           8	                Stores double-precision floating-point numbers
    void	           0	                Represents "nothing" (used for functions that return nothing)
   
    DataType	         Size (bytes)	        Range
    short int	            2	                -32,768 to 32,767
    unsigned short int     	2	                0 to 65,535
    int                    	4	                -2,147,483,648 to 2,147,483,647
    unsigned int	        4	                0 to 4,294,967,295
    long int	          4 or 8	            Larger range than int
    unsigned long int	  4 or 8	            Only positive values
    long long int	        8	                Even larger range
    unsigned long long int	8	                Only positive values

    Data Type	                Size (bytes)	        Precision
    float	                    4	                  6 decimal places
    double	                    8	                  15 decimal places
    long double	                12 or 16	          More than double
    
    
    ?? // ++ == "Derived Data Types"
These are built using primary data types.

Derived                 Type	                        Description
Array               (int arr[10];)	            Collection of elements of the same data type
Pointer             (int *ptr;)	                Stores memory address of another variable
Function            (int sum(int a, int b);)	A block of code that performs a task

User-Defined Data Types
These are created by the programmer.

User-DefinedType	                     Description
struct (Structure)	                Groups related variables of different types
union (Union)	                    Similar to struct but shares memory among members
enum (Enumeration)	                Assigns names to integral constants
typedef (Type Definition)	        Creates a new name (alias) for an existing data type

*/
    float x;
    printf("plz add some number here: \n");

    //scanf is used to take input from user:
    scanf("%f", &x);
    // if a = b usinig variable
    
    return 0;
}