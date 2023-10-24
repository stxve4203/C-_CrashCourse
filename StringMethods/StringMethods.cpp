#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);


    if (name.empty()) {
        std::cout << "You didnt enter your name!";
    } 
    else if (name.length() > 12) {
        std::cout << "Your name cant be over 12 characters";
    }
    else {
        name.append("@gmail.com");
    
        std::cout << "Welcome " << name;
    };

    return 0;
}