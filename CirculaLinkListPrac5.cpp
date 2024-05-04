#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
class node {
 int info,c,i; 
 node *link; 
public: 
 node() { 
 c=0; 
 } 
 void insert(); 
 void display(); 
 void del(); 
}; 
node *start=NULL, *temp=NULL, *move=NULL, *temp1=NULL; 
void node::insert() { 
 int item; 
 node *p=new node; 
 cout<<"\nEnter Element:"; 
 cin>>item; 
 p->info=item; 
 p->link=NULL; 
 if(start==NULL) { 
 start=p; 
 p->link=start; 
 c++; 
 } 
 else { 
 temp=start; 
 while(temp->link!=start) 
 temp=temp->link; 
 temp->link=p; 
 p->link=start; 
 c++; 
 } 
} 
void node::display() { 
 if(start==NULL) { 
 cout<<"\n LL empty"; 
 return; 
 } 
 node *temp; 
 temp=start; 
 move=start->link; 
 cout<<temp->info; 
 while(move!=start) { 
 cout<<"->"<<move->info; 
 move=move->link; 
 } 
 cout<<"\n Number of nodes in CLL are :"<<c; 
} 
void node::del() { 
 int pos; 
 cout<<"\nEnter Position:"; 
 cin>>pos; 
 if(c==1) { 
 start=NULL; 
 } 
 if(start==NULL) { 
 cout<<"\n LL Empty:"; 
 return; 
 } 
 if(pos>c || pos<1) { 
 cout<<"\nInvalid Position"; 
 return; 
 } 
 if(pos==1) { 
 temp=start; 
 while(temp->link!=start) 
 temp=temp->link; 
 temp1=start; 
 start=start->link; 
 temp->link=start; 
 cout<<"\nDeleted Element is "<<temp1->info; 
 delete temp1; 
 c--; 
 } 
 else { 
 temp=start; 
 i=1; 
 while(i<pos-1) { 
 temp=temp->link; 
 i++; 
 } 
 temp1=temp->link; 
 temp->link=temp1->link; 
 cout<<"\nDeleted element is"<<temp1->info; 
 delete temp1; 
 c--; 
 } 
} 
int main() { 
 node n; 
 int ch; 
 cout<<"\n 1.Insert 2.Display 3.Delete 4.Exit"; 
 while(ch!=4) { 
 cout<<"\n Enter Choice"; 
 cin>>ch; 
 switch(ch) { 
 case 1: n.insert(); break; 
 case 2: n.display(); break; 
 case 3: n.del(); break; 
 case 4: exit(0); 
 } 
 } 
 getch(); 
 return 0; 
}

