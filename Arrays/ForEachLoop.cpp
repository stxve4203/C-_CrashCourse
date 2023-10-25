#include <iostream>

int main() {

    std::string students[] = {"Spongebob", "Patrick", "Squidwards"};

    for(std::string student : students) {
        std::cout << student << "\n";
    }

    int grades[] = {65, 28, 34, 49};

    for(int grade : grades) {
        std::cout << grade << "\n";
    }
}