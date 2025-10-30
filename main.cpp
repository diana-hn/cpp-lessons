#include <iostream>

class Student {
    int age;
    std::string name;


public:
    Student(std::string new_name) {
        name = new_name;
    }
    void print() {
        std::cout << "Hello, my name is " << this->name << " Im " << age << " years old." << std::endl;
    }

    int get_age() {
        return age;
    }

    void set_age(int new_age) {
        if (new_age < 0) {
            std::cout << "error";
        } else {
            age = new_age;
        }
    }
};
int main() {
    Student student1 {"Jack"};
    student1.set_age(10);
    student1.print();
    return 0;
}

