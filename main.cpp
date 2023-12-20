//addition of elements in an existing array
#include<iostream>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int newSize = 8;  // Set the new size of the array
    // Creating a new array with a larger size
    int newArray[newSize];
    // Copying existing elements to the new array
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        newArray[i] = a[i];
    }
    // Adding more elements to the array
    for (int i = sizeof(a) / sizeof(a[0]); i < newSize; ++i) {
        newArray[i] = i + 1;
    }
    // Displays the elements
    cout << "Array elements: ";
    for (int i = 0; i < newSize; ++i) {
        cout << newArray[i] << " ";
    }
    return 0;
}



