#include <iostream>
/* include seperate.h is needed for the link between two files*/
#include "seperate.h"

using std::cout;
using std::endl;
// bank acount 1~999999999
// declaration & definition
int bank_account_number = 1;

/*This is a small demo*/

int function1(int argument)
{
    // std::cout << "hello world in function 1" << argument << std::endl;
    return 1;
}

/* This is for chapter 1
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

int main(int argc, char **argv)
{

    int local_price = 12;

    // reference
    int &replace_price = local_price;
    for (int i = 0; i < 10; i++)
    {
        local_price = i;
        cout << replace_price << endl;
    }
}