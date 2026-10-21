#include <iostream>

class MyClass {
private:
    std::string m_name;

public:
    MyClass(std::string n) {
        m_name = n;
        std::cout << "Constructor of " << m_name << " called" << std::endl;
    }
    ~MyClass() {
        std::cout << "Destructor of " << m_name << " called" << std::endl;
    }
};

MyClass global_obj("global");

int main() {
    std::cout << "Entering main() function" << std::endl;

    MyClass local_obj("local");

    {
        MyClass block_obj("block");
    }

    std::cout << "Leaving main() function" << std::endl;
}