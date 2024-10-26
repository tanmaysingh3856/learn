#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    student(string name1)
    {
        name=name1;
    }
    student()
    {
        name="unknown";
    }
};

int main()
{
    student s1("sahil");
    student s2;
    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
    return 0;
};