#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza("salami", "pepperoni");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza \n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << "pizza \n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << "and " << topping2 << "pizza \n";
}