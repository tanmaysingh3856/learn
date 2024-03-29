//linear searching in array
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
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}
