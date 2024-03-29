//Inheritence
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    student(string name1,int roll1)
    {
        name=name1;
        roll=roll1;
    }
    void print()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Roll no. is "<<roll<<endl;
    }
};
class marks:public student
{
    public:
    int m1,m2,m3;
    marks(string name1,int roll1,int m11,int m22,int m33):student(name1,roll1)
    {
        m1=m11;
        m2=m22;
        m3=m33;
    }
    void print()
    {
        student::print();
        cout<<"Marks are "<<m1<<" "<<m2<<" "<<m3<<endl;
    }
};
int main()
{
    marks m1("sahil",1,100,100,100);
    m1.print();
    return 0;
}
