//create a class to print the area of a square and a rectangle. the class has two functions with the same name but different number of parameters. the function for printing the area of rectangle has two parameters. the function for printing the area of square has one parameter. and the rectangle class has two parameter constructor and square class has one parameter constructor.
#include<iostream>
using namespace std;
class area
{
    public:
    int l,b;
    area(int x,int y)
    {
        l=x;
        b=y;
    }
    area(int x)
    {
        l=x;
    }
    void printarea()
    {
        cout<<"area of rectangle is "<<l*b<<endl;
    }
    void printarea(int x)
    {
        cout<<"area of square is "<<x*x<<endl;
    }
};
int main()
{
    int l,b,x;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>l>>b;
    area a1(l,b);
    cout<<"enter side of square"<<endl;
    cin>>x;
    area a2(x);
    a1.printarea();
    a2.printarea(x);
    return 0;
}