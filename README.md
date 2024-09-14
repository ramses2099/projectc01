# projectc01
Starting practice c for Data Structure


## Format Specifiers in C
Format Specifier   | Description

%c	For character type.

%d	For signed integer type.

%e or %E	For scientific notation of floats.

%f	For float type.

%g or %G	For float type with the current precision.

%i	signed integer

%ld or %li	Long

%lf	Double

%Lf	Long double

%lu	Unsigned int or unsigned long

%lli or %lld	Long long

%llu	Unsigned long long

%o	Octal representation

%p	Pointer

%s	String

%u	Unsigned int

%x or %X	Hexadecimal representation

%n	Prints nothing

%%	Prints % character

## format specifier % = defined and format a type of data to be displayed
1. %c = character
1. %d = integer
1. %f = floating-point number
1. %s = string
1. %lf = double number
1. %u = unsigned integer
    
1. %.1 = decimal percision
1. %1 = minimum field width
1.  %- = left align

## data types in C
char a = 'a'; //single character %c
char b[] = 'bro'; //array of characters %s
float x = 0.10; //4 bytes 32 bits of precision 6 - 7 digits %f
double y = 0.10; //8 bytes 64 bits of precision 15 - 16 digits %lf

bool e = false; //1 bytes (true) or 0 (false) %d
char f = 100; //1 bytes (-128 to +128) %d or %c
unsigned char c = 0; // 1 bytes (0 to + 128) %d or %c
short int i = 0; // 2 bytes (-32,768 to 32,767) %d
long long int l = 0; // 8 bytes (-9 quintillion to 9 quintillion) %lld
unsigned long long int m = 0; // 8 bytes (0 to 9 quintillion) %llu


## constants = fixe value that cannot be changed by the program during its execution

//Define the constants
const int MAX_ELEMENTS = 10;
const int MAX_VALUE = 100;

// arithmetic operations
// + (addition)
// - (subtract)
// * (multiplication)
// / (division)
// % (module)
// ++ (increment)
// -- (decrement)

## argumented assignment operators = used to replace a statement an operator

// x += 10
// x -= 10
// x *= 10
// x /= 10

## user input scanf, fgets
int age = 10;
scanf("%d, &age);

char name[25]
fgets(name, 25, stdin)


## math.c header that contains the math functions
// sqrt()


## function
void function name (args...){};
int function name (args...){ return 1; };

## ternary operator = shourtcut to if/else when assigning/returning a value
// (condition) ? value if true : value if false

## function prototype
- What is it?
- Function declaration, w/o a body, before the main() function
- Ensure that call to a function are made with the correct arguments

Syntax
return_type function_name(parameter_list);

## string.h header that contains the function for management string
strlwer(string); // lower case string

## array = a data structure that can store many values of the same type
double prices[10] = {12.0, 25.5,3.5}

## sizeof function
- sizeof return size in byte

## struct
- struct is a collection of related members ("variables")
- they can be different data types 
- listed under one name in a block of memory
- VERY SIMILAR to classes in other languages (but no methods)

## typedef = reserved keyword that gives an existing datatype a "nickname"


## Symbolic Constants and Macros

- #define NAME Value

## Pointer and array
- A pointer is a variable that contains the address of a variable.
- Pointer is a special variable that is capable of storing some address
- It points to a memory location where the first byte is stored

## Value of operator/ indirector operator/ deference operator
- is an operator that is used to access the value stored at the location pointed by the pointer

- * = Value of operator

## We can also change the value of the object pointed by the pointer

## Never apply the inderction operator to the uninitialized pointer
- for example
``` int *ptr;
    printf("%d", *ptr)
```
## Assigning value to an uninitialised pointer is dangerous
- for example
``` int *ptr;
    *ptr = 1
```
- output
Segmentation Fault (SIGSEGV)
Usually, segmentation fault is caused by program trying to read or write an illegal memory location

## q = p asigned the address of p to q
## *q = *p asigned the value of p to q

## Never try to return the value of local variable of an automatic variable
- for example
``` 
    int *func(){
        int i = 10
        return &i;
    }

    int main() {
        int *p = func()
        printf("%d", *p)
    }
```
- Warning: function returns address of local variable

## In C, * symbol has different meanings depending on the context in which its used.

## Use %p as a format specifier in printf function

## Options (a) and (e) are the aliases of variable i

## pointer arimethic

## Undefined Behavior
- Performing arithmetic on pointers which are not pointing to array element leads to
undefined behaviour

- If two pointers are pointing to different arrays then performing subtracion between them leads to undefined behavior

## Post increment
- p++
## Pre increment
- ++p

## Use relational operators (<,>,>=,<=)and equiality operators (==, !=) to compare pointers.
## Only posisble when both pointers point to same array.
## Output depends upon the relative positions of both the pointers.
## It is true that we can use array names as pointers, but assigning a new address to them is not possible.

## Different Betweeen Row Major and Column Major order
- Row Major order: Elements are stored row by row

- Column Major order: Elements are stored column by column

## C stores multidimensional arrays in row major order
