//binary search in array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    //printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Enter the number you want to search: ";
    cin >> key;
    int s = 0;
    int e = 4;
    for (int i = 0; i < 5; i++)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
} 