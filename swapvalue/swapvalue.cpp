#include <iostream>

//this program swaps two values

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
};

int main()
{
    int a = 1;
    int b = 2;

    swap(a, b);

    std::cout << "a = " << a << "\nb = " << b;
    return 0;
}
