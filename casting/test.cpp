#include <iostream>

struct Example {
   // char a;    // 1 byte
    int b;     // 4 bytes (assuming int is 4 bytes)
    char a;
    char c;    // 1 byte
};

int main() {
    std::cout << "Size of Example struct: " << sizeof(Example) << " bytes" << std::endl;

    return 0;
}