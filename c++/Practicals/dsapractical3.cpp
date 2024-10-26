//  Program to sort an array of integers in ascending order using

//  using bubble sort
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) //loop to traverse the array
    {
        for (int j = 0; j < n - i - 1; j++) //loop to compare the adjacent elements
        {
            if (arr[j] > arr[j + 1]) //if the element at index j is greater than the element at index j+1
            {
                int temp = arr[j]; //swap the elements
                arr[j] = arr[j + 1]; //swap the elements  
                arr[j + 1] = temp; //swap the elements
            }
        }
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//using selection sort

#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) //loop to traverse the array
    {
        int minIndex = i; //initialize the minimum index
        for (int j = i + 1; j < n; j++) //loop to find the minimum element in the unsorted part of the array
        {
            if (arr[j] < arr[minIndex]) //if the element at index j is less than the element at index minIndex
            {
                minIndex = j; //update the minimum index
            }
        }
        int temp = arr[i]; //swap the elements
        arr[i] = arr[minIndex]; //swap the elements
        arr[minIndex] = temp; //swap the elements
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//using insertion sort
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) //loop to traverse the array
    {
        int current = arr[i]; //current element to be inserted
        int j = i - 1;
        while (arr[j] > current && j >= 0) //loop to shift the elements to the right
        {
            arr[j + 1] = arr[j]; //shift the elements to the right
            j--; //decrement the index
        }
        arr[j + 1] = current; //insert the current element at the correct position
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
