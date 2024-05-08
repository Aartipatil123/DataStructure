#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
 for (int i = 1; i < n; i++) {
 int key = arr[i];
 int j = i - 1;
 // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
 while (j >= 0 && arr[j] > key) {
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 }
}
int main() {
 int n;
 cout << "Enter the number of elements: ";
 cin >> n;
 int arr[n];
 cout << "Enter " << n << " integers: ";
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
 }
 insertionSort(arr, n);
 cout << "Sorted array in ascending order: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 return 0;
}

