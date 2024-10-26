//Insertion and given position in a linked list
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
void insertAtGivenPosition(Node **head, int data, int position)
{
    Node *newNode = new Node();//creating a new node
    newNode->data = data;//assigning data to the new node
    Node *temp = *head;//creating a temporary node
    if (position == 1)//if position is 1
    {
        newNode->next = *head;//new node will point to head
        *head = newNode;//head will point to new node
        return;
    }
    for (int i = 0; i < position - 2; i++)//traversing the linked list
    {
        temp = temp->next;//moving to the next node
    }
    newNode->next = temp->next;//new node will point to the next node of temp
    temp->next = newNode;//temp will point to new node
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;      //assign data in first node
    head->next = second; // Link first node with second
    second->data = 2;    //assign data in second node
    second->next = third;
    third->data = 3; //assign data in third node
    third->next = NULL;//assigning null to the next of third node
    cout << "Linked list before insertion: ";
    printList(head);
    insertAtGivenPosition(&head, 4, 2);//inserting 4 at position 2
    cout << "\nLinked list after insertion: ";
    printList(head);
    return 0;
}
