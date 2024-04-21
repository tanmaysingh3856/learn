// transversing the linked list
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// void InsertAtTail(node *head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *kuch = head;         // making an iterator for traversing
//     while (kuch->next != NULL) // loop for trversing till null
//     {
//         kuch = kuch->next;
//     }
//     kuch->next = n; // inserting n
// }
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head; // temporary pointer to traverse the list
    while (temp->next != NULL) // loop until we reach the end of the list
    {
        temp = temp->next;
    }
    temp->next = n; // insert the new node at the end
}


void InsertAtHead(node* &head, int val)
{
    node * soch = new node(val);
    soch->next =head;
head = soch;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool search(node*head, int key){
    node*temp = head;// iterator hi hai yr 
    while(temp!= NULL){
        if(temp->data == key){
            return true;
        }
        temp= temp->next;
    }
        return false;
}

int main()
{
    node *head = NULL;
    InsertAtTail(head, 5);
    InsertAtTail(head, 7);
    display(head);
    cout<< search(head,2)<<endl;
    return 0;
}

// if i wanted linked list with  C
// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "element :" << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct Node *head;
//     struct Node *two;
//     struct Node *three;
//     struct Node *four;

//     // allocating memoery for the nodes in the  link list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     two = (struct Node *)malloc(sizeof(struct Node));
//     three = (struct Node *)malloc(sizeof(struct Node));
//     four = (struct Node *)malloc(sizeof(struct Node));

//     // link first node and the second  node
//     head->data = 4;
//     head->next = two;

//     // linking second and third node
//     two->data = 39;
//     two->next = three;

//     three->data = 66;
//     three->next = four;

//     // terminate ghe list at the forth node
//     four->data = 8745;
//     four->next = NULL;
//     linkedListTraversal(head);
//     return 0;
// }