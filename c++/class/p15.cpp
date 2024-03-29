//Program to sort n elements using bubble sort elements = [25,30,15,5,20,10]

// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {25, 30, 15, 5, 20, 10};
//     bubbleSort(arr, 6);
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//by insertion sort
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {25, 30, 15, 5, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
