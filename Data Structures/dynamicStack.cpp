#include <iostream>
using namespace std;

struct Node {

	int data;
	Node* next;

};

class Stack {
	Node* top;;

public :

	Stack() {
		top == NULL;
	}

	void push(int d) {

		Node* temp = new Node;
		if (!temp)
		{
			cout << "\nStack Overflow";
			exit(1);
		}

		temp->data = d;
		
			temp->next = top;
			top = temp;
			cout << "Element has been pushed to top of Stack " << endl;
		
	

	}

	bool isEmpty() {
		if (top == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack Underflow Occured :( !" << endl;
		}
		else {
			Node* temp = top;
			top = top->next;
			free(temp);
			cout << "Top Element has been popped from the stack " << endl;
		}
	}

	int getTop() {
		if (isEmpty()) {
			cout << "Stack Underflow Occured :( !" << endl;
		}
		else {
			return top->data;
		}
	}
	void display() {
		if (isEmpty()) {
			cout << "Stack Underflow Occured :( !" << endl;
		}
		else {
			cout << "All Elements of the Stack are : " << endl;
			Node* temp = top;
			while (temp != NULL) {
				cout << temp->data << " ";
				temp = temp->next;
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
			list.display();
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
