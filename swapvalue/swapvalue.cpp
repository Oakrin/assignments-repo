#include <iostream>

//this program swaps two values
int main()
{
    int a = 1;
    int b = 2;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "a = " << a << "\nb = " << b << std::endl;
    return 0;
}
