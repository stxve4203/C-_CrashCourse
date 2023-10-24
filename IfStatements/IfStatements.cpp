#include <iostream>

int main() {

    int age;

    std::cout << "Enter your Age: ";
    std::cin >> age;

    if(age >= 100) {
        std::cout << "You are too old to enter this site.";
    } else if (age >= 18) {
        std::cout << "Welcome to the site!";
    } else if(age < 0) {
        std::cout << "You havent been born yet";
    } else {
        std::cout << "You must be 18 or older.";
    }

    return 0;
}