#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    int students = 20;

    // students+=1
    students++;

    // students -=2
    students--;

    // students = students * 2;
    students *= 2;

    // students = students / 2
    students/=2;


    int remainder = students % 3;

    std::cout << remainder;

    return 0;

}