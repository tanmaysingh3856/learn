//write a program to find the average marks of 5 subjects of a student
#include<iostream>
using namespace std;
int main()
{
    int subjects;
    float marks, total=0, average;
    cout<<"Enter the number of subjects: ";
    cin>>subjects;
    cout<<"Enter marks of "<<subjects<<" subjects: ";
    for(int i=0; i<subjects; i++)
    {
        cin>>marks;
        total+=marks;
    }
    average=total/subjects;
    cout<<"Average Marks = "<<average;
    return 0;
}