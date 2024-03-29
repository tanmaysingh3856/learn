#include <iostream>
#include <string>
#include <vector>

class Marks {
protected:
    int rollNumber;
    std::string name;
    int marks;

public:
    Marks(const std::string& studentName, int studentMarks) {
        static int rollNumberCounter = 1;
        rollNumber = rollNumberCounter++;
        name = studentName;
        marks = studentMarks;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    std::string getName() const {
        return name;
    }

    int getMarks() const {
        return marks;
    }
};

class Physics : public Marks {
public:
    Physics(const std::string& studentName, int studentMarks)
        : Marks(studentName, studentMarks) {}
};

class Chemistry : public Marks {
public:
    Chemistry(const std::string& studentName, int studentMarks)
        : Marks(studentName, studentMarks) {}
};

class Maths : public Marks {
public:
    Maths(const std::string& studentName, int studentMarks)
        : Marks(studentName, studentMarks) {}
};

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::vector<Marks*> students;

    for (int i = 0; i < numStudents; i++) {
        std::string name;
        int physicsMarks, chemistryMarks, mathsMarks;

        std::cout << "Enter student name: ";
        std::cin >> name;

        std::cout << "Enter marks in Physics: ";
        std::cin >> physicsMarks;

        std::cout << "Enter marks in Chemistry: ";
        std::cin >> chemistryMarks;

        std::cout << "Enter marks in Maths: ";
        std::cin >> mathsMarks;

        students.push_back(new Maths(name, mathsMarks));
        students.push_back(new Physics(name, physicsMarks));
        students.push_back(new Chemistry(name, chemistryMarks));
    }

    int totalMarks = 0;
    for (const auto& student : students) {
        totalMarks += student->getMarks();
    }

    double averageMarks = static_cast<double>(totalMarks) / students.size();

    std::cout << "Total marks of each student:" << std::endl;
    for (const auto& student : students) {
        std::cout << "Roll Number: " << student->getRollNumber() << ", Name: " << student->getName()
                  << ", Marks: " << student->getMarks() << std::endl;
    }

    std::cout << "Average marks of the class: " << averageMarks << std::endl;

    // Clean up dynamically allocated memory
    for (const auto& student : students) {
        delete student;
    }

    return 0;
}