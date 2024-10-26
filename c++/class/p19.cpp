//Queue using array in c++.
#include <iostream>
using namespace std;
class Queue
{
    private:
    static const int max = 5;
    int fornt;
    int rear;
    int arr[max];
    public:
    Queue()
    {
        fornt = -1;
        rear = -1;
    }
    void enqueue()
    {
        if(rear == max - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            int x;
            cout << "Enter the element to be enqueued: ";
            cin >> x;
            rear++;
            arr[rear] = x;
        }
    }
    void dequeue()
    {
        if(fornt == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Element dequeued: " << arr[fornt + 1] << endl;
            fornt++;
        }
    }
    void display()
    {
        if(fornt == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue elements are: ";
            for(int i = fornt + 1; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}