#include <iostream>
using namespace std;
#define size 10

class Stack {

	int top;
	int array[size];

public :

	Stack() {
		top = -1;
	}

	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isFull() {
		if (top == size - 1) {
			return true;
		}
		else {
			return false;
		}
	}

	void push(int d) {
		if (isFull()) {
			cout << "Stack Overflow Occured " << endl;
			return;
		}
		else {
			top++;
			array[top] =  d;
			cout << d << " has been pushed into the stack " << endl;

		}

	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack Underflow Occured" << endl;
			return;
		}
		else {
			cout << "Top element has been popped from stack " << endl;
			top--;

		}
	}

	int getTop() {
		if (isEmpty()) {
			cout << "Stack Underflow occured " << endl;

		}
		else {
			return array[top];

		}
	}

	void Display() {
		if (isEmpty()) {
			cout << "Stack Empty";
		}
		else {
			cout << "Elements of the stack from top to bottom are  : " << endl;
			for (int i = top; i >= 0; i--) {
				cout << array[i]<< " ";
			}
			cout << endl;
		}
	}

};




int main() {

	Stack list;
	int choice{};
	do {
		

		
		cout << " 1 - PUSH into Stack \n ";
		cout << "2 - POP from Stack \n ";
		cout << "3 - To Display Elements of Stack \n ";
		cout << "4 - To Get Top Elements \n ";
		cout << "0 - To Exit \n";
		cin >> choice;

		switch (choice) {
		case 1:
			int d;
			cout << "Enter Value" << endl;
			cin >> d;
			list.push(d);
			break;

		case 2:
			list.pop();
			break;
		case 3:
			list.Display();
			break;
		case 4:
			cout << "The top element of the list is : " << list.getTop() << endl;
			break;

		default:
			cout << "Invalid Selection - Please Try Again :(" << endl;
			break;

		}
		system("pause");
		system("CLS");
	}
	
	while (choice != 0);

	return 0;

}
