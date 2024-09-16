# include <iostream>

// This program converts the radius of a circle to its area
int main()
{
    const double pi {3.14159};
    double radius {};

    std::cout << "input the radius of a circle: ";
    std::cin >> radius;

    double area { pi * radius * radius };

    std::cout << "the area of your circle is: " << area;

    return 0;
};
