//We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

#include <iostream>
using namespace std;
class Marks
{
    public:
    int roll;
    string name;
    Marks()
    {
        static int r=1;
        roll=r;
        r++;
    }
    void get()
    {
        cout<<"Enter name of student: ";
        cin>>name;
    }
};
class Physics:public Marks
{
    public:
    int p;
    void get()
    {
        Marks::get();
        cout<<"Enter marks in Physics: ";
        cin>>p;
    }
};
class Chemistry:public Marks
{
    public:
    int c;
    void get()
    {
        Marks::get();
        cout<<"Enter marks in Chemistry: ";
        cin>>c;
    }
};
class Mathematics:public Marks
{
    public:
    int m;
    void get()
    {
        Marks::get();
        cout<<"Enter marks in Mathematics: ";
        cin>>m;
    }
};
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Physics p[n];
    Chemistry c[n];
    Mathematics m[n];
    for (int i = 0; i < n; i++)
    {
        p[i].get();
        c[i].get();
        m[i].get();
    }
    int total=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Roll no. "<<p[i].roll<<endl;
        cout<<"Name: "<<p[i].name<<endl;
        cout<<"Marks in Physics: "<<p[i].p<<endl;
        cout<<"Marks in Chemistry: "<<c[i].c<<endl;
        cout<<"Marks in Mathematics: "<<m[i].m<<endl;
        cout<<"Total marks: "<<p[i].p+c[i].c+m[i].m<<endl;
        total+=p[i].p+c[i].c+m[i].m;
    }
    cout<<"Average marks of the class: "<<total/n<<endl;
    return 0;
}