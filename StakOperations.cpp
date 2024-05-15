#include <iostream>
#include <cstdlib> // For exit()
class Stack {
private:
 static const int MAX_SIZE = 10;
 int s[MAX_SIZE];
 int top;
 int ele;
 int i;
public:
 Stack() {
 top = -1;
 }
 void push();
 void display();
 void pop();
 void peep();
 void change();
};
void Stack::push() {
 if (top >= MAX_SIZE - 1)
 std::cout << "\nStack is overflow:";
 else {
 std::cout << "\nEnter element:";
 std::cin >> ele;
 top++;
 s[top] = ele;
 }
}
void Stack::display() {
 if (top == -1)
 std::cout << "\nStack is Empty";
 else {
 std::cout << "\nElements in stack are:\n";
 for (i = top; i >= 0; i--)
 std::cout << s[i] << "\t";
 }
}
void Stack::pop() {
 if (top == -1)
 std::cout << "\nUnderflow";
 else {
 std::cout << "\nPop ele is " << s[top];
 top--;
 }
}
void Stack::peep() {
 std::cout << "\nEnter position:";
 std::cin >> i;
 if ((top - i + 1) < 0)
 std::cout << "\nUnderflow";
 else
 std::cout << "\nPeep ele is " << s[top - i + 1];
}
void Stack::change() {
 std::cout << "\nEnter position: ";
 std::cin >> i;
 if ((top - i + 1) < 0)
 std::cout << "\nUnderflow";
 else {
 int n;
 std::cout << "\nEnter element:";
 std::cin >> n;
 s[top - i + 1] = n;
 }
}
int main() {
 Stack s;
 int ch;
 int n;
 std::cout << "Enter size of stack: ";
 std::cin >> n;
 while (true) {
 std::cout << "\n1. Push 2. Display 3. Pop 4. Peep 5. Change 6. Exit\n";
 std::cout << "\nEnter choice: ";
 std::cin >> ch;
 switch (ch) {
 case 1:
 s.push();
 break;
 case 2:
 s.display();
 break;
 case 3:
 s.pop();
 break;
 case 4:
 s.peep();
 break;
 case 5:
 s.change();
 break;
 case 6:
 exit(0);
 default:
 std::cout << "Invalid choice!";
 }
 }
 return 0;
}

