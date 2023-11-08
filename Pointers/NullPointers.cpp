#include <iostream>

using namespace std;

int main() {

    // Null value = a special value that means something has no value.
    // nullptr = keyword represents a null pointer literal
    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "address was not assigned!";
    } else {
        cout << "address was assigned!";
        cout << *pointer;
    }

    return 0;
}