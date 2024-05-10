#include <iostream>
using namespace std;
// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
 for (int i = 0; i < n; ++i) {
 if (arr[i] == target)
 return i; // Return the index if target is found
 }
 return -1; // Return -1 if target is not found
}
int main() {
 int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 23;
 int result = linearSearch(arr, n, target);
 if (result != -1)
 cout << "Element found at index " << result << endl;
 else
 cout << "Element not found in the array" << endl;
 return 0;

