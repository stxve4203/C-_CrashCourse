#include <iostream>


int main() {

    // sizeof() = determines the size in bytes of a: variable, data type, class 

    std::string name = "Bro";
    double gpa = 2.5;

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";

    return 0;
}