//\constructor and destructor
#include<iostream>
using namespace std;
class add
{
    public:
    int a,b;
    add(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Addition is "<<a+b<<endl;//constructor
    }
    ~add()
    {
        cout<<"Subtraction"<<a-b<<endl;//destructor
    }
};
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    add a1(a,b);
    return 0;
}
