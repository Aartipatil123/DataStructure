#include<iostream>
using namespace std;
class queue {
 int a[5], r, f;
public:
 queue() {
 f = r = -1;
 }
 void push();
 void pop();
 void show();
};
void queue::push() {
 int item;
if ((f == 0 && r == 4) || (f == r + 1)) {
 cout << "\n Overflow";
 } else {
 if (r == 4)
 r = -1;
 r++;
 cout << "\nEnter item :";
 cin >> item;
 a[r] = item;
 if (f == -1) {
 f = 0;
 }
 }
}
void queue::pop() {
 if (f == -1) {
 cout << "\n Underflow";
 } else {
 cout << "\nDeleted element is :" << a[f];
 if (f == r) {
 f = -1;
 r = -1;
 } else {
 if (f == 4)
 f = 0;
 else
 f++;
 }
 }
}
void queue::show() {
 if (f == -1) {
 cout << "\nEmpty :";
 } else if (f <= r) {
 for (int i = f; i <= r; i++) {
 cout << "\n" << a[i];
 }
 } else {
 for (int i = f; i <= 4; i++) {
 cout << "\n" << a[i];
 }
 for (int j = 0; j <= r; j++) {
 cout << "\n" << a[j];
 }
 }
}
int main() {
 queue s;
 int ch;
 do {
 cout << "\n 1: Push 2: Pop 3:show 4:exit ";
 cout << "\nEnter choice";
 cin >> ch;
 switch (ch) {
 case 1:
 s.push();
 break;
 case 2:
 s.pop();
 break;
 case 3:
 s.show();
 break;
 default:
 cout << "\n Wrong Choice";
 }
 } while (ch != 4);
return 0;
}
