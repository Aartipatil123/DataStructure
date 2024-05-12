#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
 int min_index = i;
 for (int j = i + 1; j < n; j++) {
 if (arr[j] < arr[min_index]) {
 min_index = j;
 }
 }
 // Swap arr[i] and arr[min_index]
 int temp = arr[i];
 arr[i] = arr[min_index];
 arr[min_index] = temp;
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
 selectionSort(arr, n);
 cout << "Sorted array in ascending order: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 return 0;
}
