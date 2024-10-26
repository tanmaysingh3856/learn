// Design a menu driven Program for the following operations on STACK of Integers (Array Implementation of Stack)
//a) Push an Element on to Stack
//b) Pop an Element from Stack
//c) Demonstrate Overflow and Underflow situations on Stack.
//d) Display the status of Stack.
//Support the program with appropriate functions for each of the above operations.

#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int size;
    int *arr;
};
void push(Stack *s)
{
    if (s->top == s->size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        int x;
        cout << "Enter the element to be pushed: ";
        cin >> x;
        s->top++;
        s->arr[s->top] = x;
    }
}
void pop(Stack *s)
{
    if (s->top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "Element popped: " << s->arr[s->top] << endl;
        s->top--;
    }
}
void display(Stack *s)
{
    if (s->top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements are: ";
        for (int i = 0; i <= s->top; i++)
        {
            cout << s->arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Stack s;
    s.top = -1;
    cout << "Enter the size of the stack: ";
    cin >> s.size;
    s.arr = new int[s.size];
    int choice;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}
