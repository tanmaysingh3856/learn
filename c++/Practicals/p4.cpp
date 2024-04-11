//Program to demonstration the implementation of various operations on a linear queue.
//a) Enqueue element in a queue
//b) dequeue element from a queue
//c) Traversing a queue
//d) Display the status of queue.

#include <iostream>
using namespace std;
class Queue
{
public:
    int front;
    int rear;
    int size;
    int *arr;
};
void enqueue(Queue *q)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        int x;
        cout << "Enter the element to be enqueued: ";
        cin >> x;
        q->rear++;
        q->arr[q->rear] = x;
    }
}
void dequeue(Queue *q)
{
    if (q->front == q->rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Element dequeued: " << q->arr[q->front + 1] << endl;
        q->front++;
    }
}
void display(Queue *q)
{
    if (q->front == q->rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements are: ";
        for (int i = q->front + 1; i <= q->rear; i++)
        {
            cout << q->arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Queue q;
    cout << "Enter the size of the queue: ";
    cin >> q.size;
    q.front = -1;
    q.rear = -1;
    q.arr = new int[q.size];
    int choice;
    do
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue(&q);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}
