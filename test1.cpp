#include <iostream>
#include <string>

class B {
public:
    std::string someFunc(const std::string& word1, const std::string& word2) {
        return word1 + " " + word2 + ".";
    }
};

class A {
public:
    A() { b = new B; }
    ~A() { delete b; }

    std::string f1(const std::string& word1, const std::string& word2) {
        return b->someFunc(word1, word2);
    }

private:
    B* b;
};

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
