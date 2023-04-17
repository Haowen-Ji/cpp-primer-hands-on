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

extern int i = 