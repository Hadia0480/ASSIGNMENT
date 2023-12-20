//This program is designed to implement the bubble sort on an array
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    const int size = 6;
    int arr[size] = {5, 2, -9, 1, -1, 6};

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    // Perform Bubble Sort
    bubbleSort(arr, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}




