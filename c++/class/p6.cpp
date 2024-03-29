//Inheritence at multiple levels
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    student(string name1, int roll1)
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
class result:public marks
{
    public:
    int total;
    result(string name1,int roll1,int m11,int m22,int m33):marks(name1,roll1,m11,m22,m33)
    {
        total=m11+m22+m33;
    }
    void print()
    {
        marks::print();
        cout<<"Total marks are "<<total<<endl;
    }
};
int main()
{
    result r1("sahil",1,100,100,100);
    r1.print();
    return 0;
    }
