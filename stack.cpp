#include <iostream>
using namespace std;
#define maxsize 5
int stack[maxsize];
int top = -1;
int s;
void push()
{
	if (top == maxsize - 1)
	{
		cout << endl
			 << "stack is full!!" << endl;
		return;
	}
	cout << endl
		 << "enter an element" << endl;
	cin >> s;
	top = top + 1;
	stack[top] = s;
	cout << endl
		 << "the element " << s << " is inserted at " << top << endl;
}
void pop()
{
	if (top == -1)
	{
		cout << endl
			 << "the stack is empty!!" << endl
			 << endl;
		return;
	}
	top = top - 1;
	cout << endl
		 << " the element at " << top << " is popped " << endl;
}

void display()
{
	if (top == -1)
	{
		cout << endl
			 << "the stack is empty!!" << endl
			 << endl;
		return;
	}
	for (int i = 0; i <= top; i++)
	{
		cout << endl
			 << stack[i];
	}
	cout << endl;
}
int main()
{
	int pref;
	while (1)
	{
		cout << endl
			 << "enter an operation \n1. push \n2. pop \n3. display" << endl;
		cin >> pref;
		switch (pref)
		{
		case (1):
			push();
			// display();
			break;
		case (2):
			pop();
			// display();
			break;
		case (3):
			display();
			break;
		default:
			cout << endl
				 << "enter a valid choice" << endl;
		}
	}
}
