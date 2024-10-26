//Program to demonstrate the use of linear search to search a given element in an array.

#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++) //loop through the array
    {
        if (arr[i] == element) //if element is found
        {
            return i; //return the index of the element 
        } 
    }
    return -1; //return -1 if element is not found
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) //input the elements of the array
    {
        cin >> arr[i]; //input each element
    }
    int element;
    cout << "Enter the element to be searched: ";
    cin >> element;
    int index = linearSearch(arr, n, element); //call the linearSearch function
    if (index == -1)
    {
        cout << "Element not found" << endl; //if element is not found
    }
    else
    {
        cout << "Element found at index " << index << endl; //if element is found
    }
    return 0;
}


//Program to demonstrate the use of binary search to search a given element in a sorted array in ascending order.

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2; //middle element of the array
        if (arr[mid] == element) //if element is found at the middle index
        {
            return mid; //return the index of the element
        }
        else if (arr[mid] < element) //if element is greater than the middle element
        {
            start = mid + 1; //update the start index
        }
        else //if element is smaller than the middle element
        {
            end = mid - 1; //update the end index
        }
    }
    return -1; //return -1 if element is not found
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; //input the size of the array
    int arr[n]; //declare an array of size n
    cout << "Enter the elements of the array in ascending order: ";
    for (int i = 0; i < n; i++) //input the elements of the array
    {
        cin >> arr[i]; //input each element
    }
    int element;
    cout << "Enter the element to be searched: ";
    cin >> element;
    int index = binarySearch(arr, n, element);
    if (index == -1) //if element is not found
    {
        cout << "Element not found" << endl;
    }
    else //if element is found
    {
        cout << "Element found at index " << index << endl;
    }
    return 0;
}