#include <iostream>
#include <string>
#include "your_code_file.h"


int main() {
    A a;
    std::string result = a.f1("Hello", "World");
    std::cout << "Result: " << result << std::endl;

    // Проверка результата
    if (result == "Hello World.") {
        std::cout << "Test passed: Function call is correct." << std::endl;
    } else {
        std::cout << "Test failed: Function call is incorrect." << std::endl;
    }

    return 0;
}
