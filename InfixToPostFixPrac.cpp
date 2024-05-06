#include <iostream>
#include <cstring> // For strcat()
class Convert {
private:
 char infix[20];
 char postfix[20];
 char s[20];
 int top;
 int i;
 int p;
public:
 Convert() {
 top = -1;
 i = p = 0;
 std::cout << "\nEnter infix Expression:";
 std::cin >> infix;
 strcat(infix, ")");
 s[++top] = '(';
 }
 int precedence(char);
 void post();
 void display();
};
int Convert::precedence(char ch) {
 switch(ch) {
 case '^': return 3;
 case '*': return 2;
 case '/': return 2;
 case '+': return 1;
 case '-': return 1;
 default: return 0;
 }
}
void Convert::post() {
 char ch;
 while (top != -1) {
 ch = infix[i++];
 if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '1' && ch <= '9'))
 postfix[p++] = ch;
 else if (ch == '(')
 s[++top] = ch;
 else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
 while (precedence(ch) <= precedence(s[top]))
 postfix[p++] = s[top--];
 s[++top] = ch;
 } else if (ch == ')') {
 while (s[top] != '(')
 postfix[p++] = s[top--];
 top--;
 } else
 std::cout << "\nWrong string";
 }
 postfix[p] = '\0';
}
void Convert::display() {
 std::cout << "\nPostfix Expression is: " << postfix;
}
int main() {
 Convert c;
 c.post();
 c.display();
 return 0;
}

