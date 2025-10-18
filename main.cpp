#include <iostream>

struct Student {
    std::string name;
    int grade;
    int age;

     void print() {
         std::cout << name << grade << age;
     }
};



int main() {
    Student student1 = {"Angelica", 10, 20};
    student1.print();

    Student student2 = {"George", 9, 37};
    student2.print();
    return 0;
}