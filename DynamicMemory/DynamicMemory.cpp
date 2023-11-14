#include <iostream>

using namespace std;

int main() {

    // dynamic memory = Memory that is allocated after the program is already
    //                  compiled & running.
    //                  We use the 'new' operator to allocate memory
    //                  in the heap rather than the stack 
    //                  Useful when we don´t know how much memory we will need.

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "address: " << pNum << '\n';
    cout << "address: " << *pNum << '\n';


    return 0;

}