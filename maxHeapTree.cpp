#include <iostream>
#include <vector>
using namespace std;
class MaxHeap {
private:
 vector<int> heap;
 // Helper function to heapify up
 void heapifyUp(int index) {
 if (index == 0)
 return;
 int parent = (index - 1) / 2;
 if (heap[parent] < heap[index]) {
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
 MaxHeap maxHeap;
 // Insert elements into the heap
 maxHeap.insert(10);
 maxHeap.insert(30);
 maxHeap.insert(20);
 maxHeap.insert(40);
 maxHeap.insert(50);
 // Print the max heap
 cout << "Max Heap: ";
 maxHeap.printHeap();
 return 0;
}

