#include <iostream>
#include <vector>
#include <string>

// Define a Student class
class Student {
public:
    std::string name;
    int rollno;
    int Grade;

    // Constructor to initialize student data
    Student(const std::string n, int r, int g) : name(n), rollno(r), Grade(g) {}

    // Display student information (const-qualified member function)
    void display() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "RollNo: " << rollno << "\n";
        std::cout << "Grade: " << Grade << "\n";
    }
};

int main() {
    std::vector<Student> students;

    // Sample student data
    // students.push_back(Student("Alice", 20, 7));
    // students.push_back(Student("Bob", 13, 8));
    // students.push_back(Student("Charlie", 32, 4));

    // Sample student data
    Student student1("Alice", 20, 7);
    Student student2("Bob", 13, 8);
    Student student3("Charlie", 32, 4);

    // Add students directly to the vector
    students.push_back(student1);
    students.push_back(student2);
    students.push_back(student3);

    // Display student information
    for (const Student& student : students) {
        student.display();
        std::cout << "\n";
    }

    return 0;
}
