#include <iostream>
using namespace std;
#define size 10

class Stack {

	int top;
	int array[size];

public:

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

	void enQueue(int d) {
		if (isFull()) {
			cout << "Qeueue is Full " << endl;
			return;
		}
		else {
			top++;
			array[top] = d;
			cout << d << " has been enQueued " << endl;

		}

	}

	void deQueue() {
		if (isEmpty()) {
			cout << "Stack Underflow " << endl;
			return;
		}
		else {
			cout << "Element has been deQueued " << endl;
			top--;

		}
	}

	int getTop() {
		if (isEmpty()) {
			cout << "Queue Empty " << endl;

		}
		else {
			return array[top];

		}
	}

	void Display() {
		if (isEmpty()) {
			cout << "Queue Empty";
		}
		else {
			cout << "Elements of the Queue are  : " << endl;
			for (int i = top; i >= 0; i--) {
				cout << array[i] << " ";
			}
			cout << endl;
		}
	}

};




int main() {

	Stack list;
	int choice{};
	do {



		cout << " 1 - enQueue\n ";
		cout << "2 - deQueue \n ";
		cout << "3 - To Display Elements of Queue \n ";
		cout << "4 - To Get First Element \n ";
		cout << "0 - To Exit \n";
		cin >> choice;

		switch (choice) {
		case 1:
			int d;
			cout << "Enter Value" << endl;
			cin >> d;
			list.enQueue(d);
			break;

		case 2:
			list.deQueue();
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
