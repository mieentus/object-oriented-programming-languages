#include <iostream>

class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
        if(a < 0) {
            std::cout << "Age must be greater than 0" << std::endl;
            return;
        }
        m_age = a;
        std::cout << "Age set successfully" << std::endl;
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(n == "") {
            std::cout << "Name can't be empty" << std::endl;
            return;
        }
        m_name = n;
        std::cout << "Name set successfully" << std::endl;
    }
    std::string getName() const {
        return m_name;
    }
};

int main() {

    Student stud;

    stud.setAge(20);
    stud.setName("Marta");

    std::cout << stud.getAge() << std::endl;
    std::cout << stud.getName() << std::endl;

    stud.setAge(-1);
    stud.setName("");

    std::cout << stud.getAge() << std::endl;
    std::cout << stud.getName() << std::endl;
}