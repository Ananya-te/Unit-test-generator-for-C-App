#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "Add: " << add(3, 4) << std::endl;
    std::cout << "Subtract: " << subtract(5, 2) << std::endl;
    return 0;
}
