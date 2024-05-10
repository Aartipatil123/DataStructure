#include<iostream>
#include<cstdlib>
using namespace std;
int m;
class queue {
 int f, r, q[10], n, i; // char q[10], n for character
public:
 queue() {
 f = r = 0;
 }
 void insert();
 void del();
 void dis();
};
void queue::insert() {
 if (r == m)
 cout << "\nOverflow";
 else {
 cout << "\nEnter Element in Queue=";
 cin >> n;
 if (f == 0)
 f = 1;
 r++;
 q[r] = n;
 }
}
void queue::del() {
 if (f == 0) {
 cout << "\nUnderflow";
 } else {
 int n;
 n = q[f];
 if (f == r)
 f = r = 0;
 else
 f++;
 cout << "\nDeleted element is " << n;
 }
}
void queue::dis() {
 if (f == 0)
 cout << "\nUnderflow";
 else {
 cout << "\nElements in queue are:";
 for (i = f; i <= r; i++)
 cout << q[i] << "\t";
 }
}
int main() {
 queue q;
 int ch;
 cout << "Enter size of queue: ";
 cin >> m;
 cout << "\n1.insert 2.display 3.delete 4. exit \n";
 while (ch != 4) {
 cout << "\nEnter ch:";
 cin >> ch;
 switch (ch) {
 case 1:
 q.insert();
 break;
 case 2:
 q.dis();
 break;
 case 3:
 q.del();
 break;
 case 4:
 exit(0);
 }
 }
 return 0;
}

