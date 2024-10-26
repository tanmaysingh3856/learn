//Write a menu driven program that maintains a linear linked list whose elements are stored in ascending order and implement the following operations: (using separate functions):
//Create a linked list
//search an element
//Display all the elements.

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
Node *createList(Node *head)
{
    Node *temp = new Node();
    cout << "Enter the data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
void searchElement(Node *head)
{
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    Node *p = head;
    while (p != NULL)
    {
        if (p->data == key)
        {
            cout << "Element found" << endl;
            return;
        }
        p = p->next;
    }
    cout << "Element not found" << endl;
}
int main()
{
    Node *head = NULL;
    int choice;
    while (1)
    {
        cout << "1. Create a linked list" << endl;
        cout << "2. Search an element" << endl;
        cout << "3. Display all the elements" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            head = createList(head);
            break;
        case 2:
            searchElement(head);
            break;
        case 3:
            printList(head);
            cout << endl;
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}