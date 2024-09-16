# include <iostream>

// This program converts from fahrenheit to celsius
int main()
{
    double fahrenheit_temp {};

    std::cout << "input a temperature in fahrenheit: ";
    std::cin >> fahrenheit_temp;

    double celsius_temp { (fahrenheit_temp-32) * 5 / 9 };

    std::cout << "your temperature in celsius is: " << celsius_temp;
    return 0;
};
