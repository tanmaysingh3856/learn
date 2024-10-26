#include <iostream>
using namespace std;
void insertAtEnd(int arr[], int &n, int element)
{
    arr[n] = element;
    n++;
}
void insertAtPosition(int arr[], int &n, int element, int position)
{
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    n++;
}
void deleteByValue(int arr[], int &n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
}
void deleteByPosition(int arr[], int &n, int position)
{
    for (int i = position - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int choice;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "1. Insert at end" << endl;
        cout << "2. Insert at position" << endl;
        cout << "3. Delete by value" << endl;
        cout << "4. Delete by position" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to insert: ";
            cin >> element;
            insertAtEnd(arr, n, element);
            break;
        case 2:
            int position;
            cout << "Enter the element to insert: ";
            cin >> element;
            cout << "Enter the position to insert: ";
            cin >> position;
            insertAtPosition(arr, n, element, position);
            break;
        case 3:
            cout << "Enter the element to delete: ";
            cin >> element;
            deleteByValue(arr, n, element);
            break;
        case 4:
            cout << "Enter the position to delete: ";
            cin >> position;
            deleteByPosition(arr, n, position);
            break;
        case 5:
            display(arr, n);
            break;
        case 6:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
    return 0;
}