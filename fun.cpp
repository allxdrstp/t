#include <iostream>
#include <string>
#include "fun.h" 


int main() {
    A a;
    std::string result = a.f1("Hello", "World");
    std::cout << "Result: " << result << std::endl;
}
