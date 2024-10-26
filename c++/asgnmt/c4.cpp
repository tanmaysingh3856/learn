//Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.

#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int age;
    string address;
    public:
    student()
    {
        name="unknown";
        age=0;
        address="not available";
    }
    void setInfo(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void setInfo(string name,int age,string address)
    {
        this->name=name;
        this->age=age;
        this->address=address;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

int main()
{
    student s[10];
    for (int i = 0; i < 10; i++)
    {
        string name;
        int age;
        string address;
        cout<<"Enter name, age and address of student "<<i+1<<": ";
        cin>>name>>age>>address;
        if (address=="")
        {
            s[i].setInfo(name,age);
        }
        else
        {
            s[i].setInfo(name,age,address);
        }
    }
}