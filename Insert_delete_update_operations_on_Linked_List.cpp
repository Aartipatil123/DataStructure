#include<iostream>
#include<conio.h> 
#include<process.h>
using namespace std;
class node {
 int info, item, s;
 node *link;
public:
 void insert();
 void dis();
 void del();
 void search();
 void sum();
};
node *move, *start = NULL, *temp;
void node::insert() {
 cout << "\nEnter the item:";
 cin >> item;
 node *node1 = new node;
 node1->link = NULL;
 node1->info = item;
 if (start == NULL)
 start = node1;
 else {
 move = start;
 while (move->link != NULL)
 move = move->link;
 move->link = node1;
 }
}
void node::dis() {
 node *x;
 x = start;
 cout << "\n Elements in LL are:";
 while (x != NULL) {
 cout << "\t" << x->info;
 x = x->link;
 }
}
void node::sum() {
 node *x;
 x = start;
 s = 0;
 while (x != NULL) {
 s = s + x->info;
 x = x->link;
 }
 cout << "\nSum of node is" << s;
}
void node::del() {
 temp = start;
 if (temp != NULL) {
 temp = temp->link;
 cout << "\nDeleted node is" << start->info;
 delete start;
 start = temp;
 } else
 cout << "\n List is empty:";
}
void node::search() {
 int c = 0, f = 0, d;
 cout << "\nEnter item";
 cin >> item;
 temp = start;
 while (temp != NULL) {
 c++;
 if (temp->info == item) {
 f = 1;
 d = c;
 break;
 }
 temp = temp->link;
 }
 if (f == 1)
 cout << "\nElement is found at position " << d;
 else
 cout << "\nElement is not found";
}
int main() {
 node n;
 int ch;
 cout << "\n1.Insert 2.Display 3. Delete 4.Search 5.Sum 6.Exit\n";
 do {
 cout << "\nEnter choice";
 cin >> ch;
 switch (ch) {
 case 1:
 n.insert();
 break;
 case 2:
 n.dis();
 break;
 case 3:
 n.del();
 break;
 case 4:
 n.search();
 break;
 case 5:
 n.sum();
 break;
 case 6:
 return 0;
 }
 } while (ch != 6);
 getch();
 return 0;
}
