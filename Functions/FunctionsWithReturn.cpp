#include <iostream>

double square(double length);
double cube(double length);
std::string concatStrings(std::string firstName, std::string lastName);


int main() {
    std::string firstName = "Steve";
    std::string lastName = "Bro";
    std::string fullName = concatStrings(firstName, lastName);
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}

std::string concatStrings(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}