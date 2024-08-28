//Bucket sort in cpp without vector and algorithm
#include <iostream>
using namespace std;

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    float b[n][n];
    int index[n] = {0};

    for (int i = 0; i < n; i++) {
        int bi = n * arr[i];
        b[bi][index[bi]] = arr[i];
        index[bi]++;
    }

    for (int i = 0; i < n; i++)
        insertionSort(b[i], index[i]);

    int k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < index[i]; j++)
            arr[k++] = b[i][j];
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bucketSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

//Time complexity: O(n^2)
//Space complexity: O(n^2)