//Create a class called employee with the following details as variables within it. 1. Name of the employee (string) 2. Age (int) 3. Designation (string) 4. Salary (double) Write a program to create array of objects for the same to access these. Also, make use of member functions to accept values and print the name, age, designation and salary.         

#include <iostream>
using namespace std;
class Employee
{
    public:
    string name, designation;
    int age;
    double salary;
    void accept()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter designation: ";
        cin>>designation;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e[5];
    for(int i=0; i<5; i++)
    {
        e[i].accept();
    }
    for(int i=0; i<5; i++)
    {
        e[i].display();
    }
    return 0;
}