#include<iostream>
#include<conio.h> 
#include<cstdlib> 
using namespace std;
class node {
 int info,c,j; 
 node *left,*right; 
public: 
 void insert(); 
 void display(); 
 void del(); 
}; 
node *start=NULL,*temp=NULL,*move=NULL, *temp1=NULL; 
void node::insert() { 
 int item; 
 node *p=new node; 
 cout<<"\nEnter element:"; 
 cin>>item; 
 p->info=item; 
 p->left=NULL; 
 p->right=NULL; 
 if(start==NULL) { 
 start=p; 
 return; 
 } 
 else { 
 temp=start; 
 while(temp->right!=NULL) 
 temp=temp->right; 
 temp->right=p; 
 p->left=start; 
 } 
} 
void node::display() { 
 move=start; 
 if(move==NULL) { 
 cout<<"\n LL Empty:"; 
 return; 
 } 
 else { 
 cout<<"\n node in DLL are :"; 
 while(move!=NULL) { 
 cout<<move->info<<"\t"; 
 move=move->right; 
 } 
 } 
} 
void node::del() { 
 if(start==NULL) { 
 cout<<"\n LL Empty:"; 
 return; 
 } 
 temp=start; 
 start=temp->right; 
 if(start != NULL)
 start->left=NULL; 
 temp->right=NULL; 
 cout<<"\n deleted element is"<<temp->info; 
 delete temp;
} 
int main() { 
 node n; 
 int ch; 
 cout<<"\n1. Insert 2. Display 3. Delete 4. Exit"; 
 while(ch!=4) { 
 cout<<"\nEnter choice"; 
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

