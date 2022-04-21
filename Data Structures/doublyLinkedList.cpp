#include <iostream>
using namespace std;

struct Node {

	int data;
	Node* next;
	Node* prev;

};

class doublyLinkedList {

	Node* head, * tail;

public:

	doublyLinkedList() {
		head = tail = NULL;
	}

	void insertAtStart(int d) {

		Node* temp = new Node;
		temp->data = d;
		temp->next = head;
		temp->prev = NULL;

		if ((head) != NULL) {
			(head)->prev = temp;

			head = temp;
		}
		else {
			head = temp;
		}


	}

	void insertAtEnd(int d) {

		Node* temp = new Node;
		Node* tp = head;
		temp->prev = NULL;
		temp->data = d;
		temp->next = NULL;



		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
		temp->prev = tp;


	}

	void deleteAtStart() {

		Node* temp = head;

		if (head == NULL) {
			cout << "List is empty :( " << endl;

		}
		else {
			Node* temp = head;
			head = head->next;
			head->prev = NULL;
			delete temp;
		}



	}

	int sizeOfList() {
		Node* temp = head;
		int size = 0;
		while (temp != NULL) {
			size++;
			temp = temp->next;
		}
		return size;
	}

	void deleteAtEnd() {

		struct Node* temp = head;

		while (temp->next->next != NULL)
			temp = temp->next;

		delete(temp->next);
		temp->next = NULL;





	}



	bool isEmpty() {

		if (head == NULL) {
			return true;
		}
		else
			return false;
	}


	void display() {

		Node* temp = head;
		cout << "Elements of Linked List are : ";
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
		return;
	}

	void insertAtPos(int data, int pos) {

		int i;
		struct Node* newNode, * temp;
		if (isEmpty()) {
			cout << "List is empty :( " << endl;
		}
		else {
			temp = head;
			i = 1;
			while (i < pos - 1 && temp != NULL) {
				temp = temp->next;
				i++;
			}
			if (pos == 1) {
				insertAtStart(data);
			}
			else if (pos == sizeOfList()) {
				insertAtEnd(data);
			}
			else if (pos < 1 || pos> sizeOfList()) {
				cout << "Invalid Position :( " << endl;
			}
			else if (temp != NULL) {
				newNode = new Node;
				newNode->data = data;
				newNode->next = temp->next;
				newNode->prev = temp;
				if (temp->next != NULL) {
					temp->next->prev = newNode;
				}
				temp->next = newNode;
			}
			else {
				cout << "Invalid Position :( ! " << endl;
			}
		}
	}

	void deleteAtPos(int pos) {

		Node* current = head;

		for (int i = 1; i < pos && current != NULL; i++)
		{
			current = current->next;
		}

		if (isEmpty()) {
			cout << "List is empty :( " << endl;
		}
		else if (pos < 1 || pos> sizeOfList()) {
			cout << "Invalid Position :( " << endl;
		}
		else if (pos == 1) {
			deleteAtStart();

		}
		else if (pos == sizeOfList()) { deleteAtEnd(); }

		else {
			current->prev->next = current->next;
			current->next->prev = current->prev;

			delete(current);

		}

	}

	void reverse() {
		cout << "Elements of the linked list in reverse are : " << endl;

		Node* tail = head;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		while (tail != head) {
			cout << tail->data << " ";
			tail = tail->prev;
		}
		cout << tail->data << " ";
	}
};



int main() {


	doublyLinkedList list;

	list.insertAtStart(45);
	list.insertAtStart(03);
	list.insertAtStart(29);
	list.display();




	return 0;

}
