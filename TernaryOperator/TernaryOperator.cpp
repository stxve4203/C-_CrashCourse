#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition = expression1 : expression2;

    int grade = 75;
    grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!";

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    hungry ? std::cout << "You are hungry." : std::cout << "You are not hungry";

    return 0;
}