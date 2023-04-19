#include <iostream>
/* include seperate.h is needed for the link between two files*/
#include "seperate.h"

using std::cout;
using std::endl;
// bank acount 1~999999999
// declaration & definition
int bank_account_number = 1;

/*This is a small demo*/

/* This is for chapter 1

int function1(int argument)
{
    std::cout << "hello world in function 1" << argument << std::endl;
    return 1;
}

// argument count and argument vector
int main(int argc, char **argv)
{

    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
    function1(100);

    // escape character
    std::cout << "hello world\n";

    int i = 1;
    long j = 2L;

    double a = 3;
    bool isTrue = true;

    return 0;
}
*/

/* This is for Chapter 2-2
int main(int argc, char **argv)
{
    functionSeperate();
    return 0;
}
*/

/* This is for Chapter 2-3
int main(int argc, char **argv)
{

    int local_price = 12;
    // constant
    const int &second_price = 13;
    // reference
    int &replace_price = local_price;
    cout << &replace_price << endl;
    cout << &second_price << endl;
    cout << &local_price << endl;

    // string a = "hello";
    // string &b = "hello"; // this one is wrong, need const char *
    // string &c = a;

    for (int i = 0; i < 10; i++)
    {
        local_price = i;
        cout << replace_price << endl;
    }

    int a = 15;

    // pointer, pointing at int
    int *pa = &a;

    cout << &a << endl;
    cout << pa << endl;

    *pa = 20;
    cout << *pa << endl;
    cout << a << endl;
}
*/

void function(const int value)
{
    // the value cannot be change, it would return error
    value = 222;
    cout << value << endl;
}

/* Chapter 2-4
int main(int argc, char **argv)
{
    // constant cannot be changed
    // constant needs initilize
    const int constant_value = 123;
    int value = 123;
    function(value);
    value = 4444;
    return 0;
}
*/
