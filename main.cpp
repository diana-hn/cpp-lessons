#include <iostream>

struct Student {
    std::string name;
    int grade;

    void print() {
        std::cout << name << " has grade: " << grade << std::endl;
    }
};

struct Temperature {
    int celsius;

   std::string toFahrenheit() {
        return "Hello World!";
    }
};

struct Time {
    int hours;
    int minutes;

    void print() {
        std::cout << hours << ":"<< minutes << std::endl;
    }

    void add_hour() {
        hours = hours == 23 ? 0 : hours + 1;
    }

    void add_hours(int h) {
      int new_hours = hours + h;
        if (new_hours > 23) {
            hours = new_hours % 24;
        } else {
            hours = new_hours;
        }
    }

    void add_minutes(int m) {
        int new_minutes = minutes + m;
        if (new_minutes > 60) {
            add_hours(round(m / 60));
            minutes = new_minutes % 60;
        } else {
            minutes = new_minutes;
        }
    }
};
 int main() {
    Time time1 = {23,33};
    time1.print();
    time1.add_hour();
    time1.print();

    Time time2 = {5,10};
    // time2.add_hours(110);
    time2.add_minutes(300);
    time2.print();
    return 0;
}
