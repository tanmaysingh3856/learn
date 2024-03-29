//Create a class named 'Programming'. While creating an object of the class, if nothing is passed to it, then the message "I love programming languages" should be printed. If some String is passed to it, then in place of "programming languages" the name of that String variable should be printed.

#include<iostream>
#include<string>
using namespace std;
class programming
{
    string name;
    public:
    programming(string name="programming languages")
    {
        cout<<"I love "<<name<<endl;
    }
};
int main()
{
    programming p1;
    programming p2("C++");
    return 0;
}
