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
