#include <iostream>

/*
 *This is a small demo
 */

int function1(int argument)
{
    std::cout << "hello world in function 1" << argument << std::endl;
    return 1;
}

// argument count
// argument vector
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
    function1(100);

    int i = 1;
    long j = 2L;

    return 0;
}
