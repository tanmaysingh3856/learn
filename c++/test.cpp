#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Linklist {
public:
    Node *head;

    // constructor
    Linklist() {
        head = nullptr;
    }

    // delete node at a given position
    void deleteNode(int pos) {
        // deleting the head node
        if (pos == 1) {
            Node *temp = head;
            if (head != nullptr) {
                head = head->next;
                delete temp;
            }
        } else {
            Node *temp = head; // temporary variable for iterating the linked list
            for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
                temp = temp->next;
            }

            // checking for out-of-bounds or invalid position
            if (temp == nullptr || temp->next == nullptr) {
                cout << "Position out of bounds" << endl;
                return;
            }

            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    // function to add a node at the end of the list
    void append(int val) {
        Node *newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // function to print the linked list
    void printList() {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linklist list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Original list: ";
    list.printList();

    list.deleteNode(3);
    cout << "After deleting node at position 3: ";
    list.printList();

    list.deleteNode(1);
    cout << "After deleting node at position 1: ";
    list.printList();

    list.deleteNode(10); // out-of-bounds position
    cout << "After attempting to delete node at out-of-bounds position 10: ";
    list.printList();

    return 0;
}