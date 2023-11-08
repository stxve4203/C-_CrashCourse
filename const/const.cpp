#include <iostream>

using namespace std;
void printInfo(const string name, const int age);

int main() {
    // const parameter = parameter is effectively read-only
    //                   code is more secure & conveys intent

    string name = "Bro";
    int age = 20;

    printInfo(name, age);
    return 0;
}

void printInfo(const string name, const int age){

    cout << name << '\n';
    cout << age << '\n';
}