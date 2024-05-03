#include <iostream>
using namespace std;
// Function to perform binary search
int binarySearch(int arr[], int left, int right, int target) {
 while (left <= right) {
 int mid = left + (right - left) / 2;
 // Check if target is present at mid
 if (arr[mid] == target)
 return mid;
 if (arr[mid] < target) // If target is greater, ignore left half
 left = mid + 1;
 else
 right = mid - 1;
 }
 return -1;
}
int main() {
 int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 23;
 int result = binarySearch(arr, 0, n - 1, target);
 if (result != -1)
 cout << "Element found at index " << result << endl;
 else
 cout << "Element not found in the array" << endl;
 return 0;
}

