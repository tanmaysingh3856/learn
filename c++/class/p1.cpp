//constructor is a special member function with the same name as of the class.
//it is used to initialize the objects of its class
#include<iostream>
using namespace std;
int main()
{
    class construct
    {
        public:
        int a,b;
        // creating a constructor
        construct()
        {
            a=10;
            b=20;
        }
    };
    construct c;
    cout<<"a="<<c.a<<endl;
    cout<<"b="<<c.b<<endl;
    return 0;
}