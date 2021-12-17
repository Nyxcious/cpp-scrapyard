#include<iostream>
using namespace std;

struct Node {

	int data;
	Node* next;


};

class linkedList {

	Node* head, * tail;

public:

	linkedList() {

		head, tail = NULL;

	}

	void insert(int d) {

		Node* temp;
		temp = new Node;
		temp->data = d;
		temp->next = NULL;

		if (head == NULL) {
			head = tail = temp;
		}
		else {

			tail->next = temp;
			tail = temp;

		}
	}

	void Display() {
		Node* newNode;
		newNode = head;
		while (newNode != NULL) {
			cout << newNode->data << " " << endl;
			newNode = newNode->next;
		}

	}

	void Size() {

		int count = 0;
		Node* newNode;
		newNode = head;
		while (newNode != NULL) {
			newNode = newNode->next;
			count++;

		}
		cout << "The size of Single Linked List is : " << count;
	}

};

int main() {

	linkedList one;

	one.insert(4);
	one.insert(5);
	one.insert(6);
	one.insert(9);

	one.Display();

	one.Size();




}
