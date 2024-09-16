# include <iostream>
# include <string>

int main(){
    
    int zipcode, address_number {};
    std::string street, city, state {};

    std::cout << "please insert your address number (ie: 5483, 3274, 182. NO street names)\n";
    std::cin >> address_number;
    std::cout << "please insert your street name (ie: park place, 35th st, macarthur blvd)\n";
    std::getline(std::cin, street);
    std::cout << "please insert your city name (ie: brooklyn, san francisco, columbus)\n";
    std::getline(std::cin, city);
    std::cout << "please insert your state name (ie: new york, california, ohio)\n";
    std::getline(std::cin, state);
    std::cout << "please insert your zip code (ie: 38729, 54392, 83472)\n";
    std::cin >> zipcode;

    std::cout << address_number << " " << street << "\n" << city << ", " << state << ", " << zipcode << "\n";
    return 0;
}
