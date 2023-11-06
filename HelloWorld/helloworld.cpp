#include <iostream>
#include <vector>


namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main() {

    pairlist_t parirlist;

    using namespace first;

    int x = 0;
    std::cout << "Hello World" << '\n';

    std::cout << x;

    return 0;
}