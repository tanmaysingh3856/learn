//Program to search elements using binary search  in array [5,10,15,20,25]
#include <iostream>
using namespace std;
void binaryseatch(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == element)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not found" << endl;
}
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    cout << "Enter the element to be searched: ";
    cin >> element;
    binaryseatch(arr, n, element);
    return 0;
}