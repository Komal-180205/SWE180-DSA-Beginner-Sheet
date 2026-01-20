// Arrays - Searching and Updates
// Contributor: Komal

#include <iostream>
using namespace std;

/*
  Prints all elements of the array
  Time Complexity: O(n)
*/
void printElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
  Search an element in array (Linear Search)
  Time Complexity: O(n)
  Returns index of element if found, else -1
*/
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1; // Element not found
}

/*
  Count occurrences of an element
  Time Complexity: O(n)
*/
int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) count++;
    }
    return count;
}

/*
  Reverse the array
  Time Complexity: O(n)
*/
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

/*
  Find element at a given index
  Time Complexity: O(1)
*/
int findElementAtIndex(int arr[], int n, int index) {
    if (index < 0 || index >= n) {
        return -1; // Invalid index
    }
    return arr[index];
}

/*
  Driver code to test all functions
*/
int main() {
    int arr[100] = {1, 2, 3, 4, 2, 5};
    int n = 6;

    cout << "Original array: ";
    printElements(arr, n);

    cout << "Linear search 2 found at index: " << linearSearch(arr, n, 2) << endl;
    cout << "Count of 2 in array: " << countOccurrences(arr, n, 2) << endl;

    reverseArray(arr, n);
    cout << "Reversed array: ";
    printElements(arr, n);

    int idx = 3;
    cout << "Element at index " << idx << ": " << findElementAtIndex(arr, n, idx) << endl;

    return 0;
}

