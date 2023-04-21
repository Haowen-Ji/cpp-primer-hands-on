## Chapter 1

function
* return
* name 
* parameter list
* function body

binary program -> main()

main function
* entry point

java -> 
```java
JavaProgram 
public static void main(String[] args){

    application.run
}
Javac JavaProgram --a=3 b=4
```

*main return value* refers the result of the program running

 File format: cc, cxx, cpp, cp

 .h header file

 > literal (a fixed value)
 string literal = "abc" "hello world"
 integer literal = 123

 two types of comments:
 1. /* any comment*/ for comments multiple lines
 2. // just for a single line

flow of control (Control of the direction of program operation)

```cpp
flow1 -> for
for (int i=0; i<100 ; i++>){
    sum += i;
}

flow2 -> while
int sum = 0;
inti=0;
while(i<=100){
    sum += i;
}

// not often
do{

}while()

flow3 -> if
if (condition == true){
    sum += i;
}
```

## Chapter 2: Variables and Basic Types

1. Primitive Built-in Types
* int 3
* long 31241
* bool -> true/false
* float 3.21
* double 25.123223 (frequent)
* sign/unsigned

int -> long
int: -2^31 - 2^32-1
long: -2^63 - 2^63-1

type conversion

literal 
string = "hello world"
int = 64
long a = 31L;(L represents type)

2. escape character
   \t \n

3. variable
    Type Name = Value

```cpp
extern int i = 
```

### Chapter 2.3-2.5:

> Compound Type

* reference
  * bind to a local variable
  * cannot bind lieteral/ constant
* pointer

ref VS pointer
* ref needs initilize 
  
#### Constant

* constant with reference
  * the const value can be binded to a non-const value (non-const -> const)
  * i.e.
    ```C++
    int i = 1;
    const int& ri = i;
    ```
  * const !-> non-const 
    ```C++
    const int i = 1;
    int &ri = i;
    error
    ```
* constant with pointer
  * constant is a constrain, that let the object it desceribed unchanged
  * i.e. 
    ```C++
    const int value = 123;
    // low-level constant
    const int* pvalue = & value;
    ```
    *pvalue cannot change, while pvalue can be changed, since the pointer can point to another value

    ```C++
    // top-level constant 
    const int* const pvalue = & value;
    ```
    both value(*pvalue) and pointer(pvalue) cannot be changed.

### Type Alias
* using
* auto (with requirment) 
    ```C++
    // int
    auto abc = 3 +5;
    int function(){return 123;}
    auto abc = function();
    ```
* decltype
    ```C++
    // int
    auto abc = 3 +5;
    int function(){return 123;}
    auto abc = function();
    ```
