# include <iostream>

int main(){
    short shawty = (short)123;
    double dubious = 321;
    
    std::cout << "the size of short is " << sizeof(shawty) << " bytes" << std::endl;
    std::cout << "the size of double is " << sizeof(dubious) << " bytes" << std::endl;

    return 0;
}
