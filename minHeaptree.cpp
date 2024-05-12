#include <iostream>
#include <vector>
using namespace std;
class MinHeap {
private:
 vector<int> heap;
 // Helper function to heapify up
 void heapifyUp(int index) {
 if (index == 0)
 return;
 int parent = (index - 1) / 2;
 if (heap[parent] > heap[index]) {
 swap(heap[parent], heap[index]);
 heapifyUp(parent);
 }
 }
public:
 // Function to insert a new element into the heap
 void insert(int value) {
 heap.push_back(value);
 heapifyUp(heap.size() - 1);
 }
 // Function to print the heap
 void printHeap() {
 for (int i = 0; i < heap.size(); ++i)
 cout << heap[i] << " ";
 cout << endl;
 }
};
int main() {
 MinHeap minHeap;
 // Insert elements into the heap
 minHeap.insert(50);
 minHeap.insert(40);
 minHeap.insert(30);
 minHeap.insert(20);
 minHeap.insert(10);
 // Print the min heap
 cout << "Min Heap: ";
 minHeap.printHeap();
 return 0;
}

