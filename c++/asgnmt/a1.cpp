//Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class
#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    public:
    student(string name)
    {
        name=name;
    }
    student()
    {
        name="Unknown";
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
    }
};
int main()
{
    student s1("Rahul");
    student s2;
    s1.display();
    s2.display();
    return 0;
}

