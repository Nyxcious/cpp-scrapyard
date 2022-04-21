#include<iostream>
using namespace std;

struct Node {

	int data;
	Node* next;

};


class singlyLinkedList {
public:
	Node* head, * tail;

	singlyLinkedList() {
		head, tail = NULL;
	}

	void insertAtStart(int d) {
		Node* temp = new Node;
		temp->data = d;



		temp->next = head;
		head = temp;

	}

	void deleteAtStart() {

		Node* temp = head;
		head = temp->next;
		free(temp);



	}

	int sizeOfList() {
		Node* temp = head;
		int count = 0;
		while (temp != NULL) {
			count++;
			temp = temp->next;
		}
		return count;
	}

	void display() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	bool isEmpty() {
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	void insertAtEnd(int d) {
		Node* newNode = new Node;
		newNode->data = d;
		newNode->next = NULL;
		Node* temp = head;

		if (isEmpty()) {
			head = newNode;
			return;
		}

		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
		return;
	}

	void deleteAtEnd() {
		Node* temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;


	}


	void insertAtPos(int pos, int data) {

		Node* temp, * newNode;
		if (isEmpty()) { cout << "List is empty :(" << endl; }
		else {
			temp = head;
			for (int i = 1; i < pos - 1 && temp != NULL; i++) {
				temp = temp->next;
			}
			if (pos == 1) {
				insertAtStart(data);
			}
			else if (pos == sizeOfList()) {
				insertAtEnd(data);
			}
			else if (pos<1 || pos>sizeOfList()) { cout << "Invalid Position :( " << endl; }
			else if (temp != NULL) {
				newNode = new Node;
				newNode->data = data;
				newNode->next = temp->next;
				temp->next = newNode;


			}
			else {
				cout << "Invalid Position :( !" << endl;
			}

		}





	}

	void deleteAtPos(int pos) {
		Node* temp = head;
		Node* current;
		for (int i = 1; i < pos - 1 && temp != NULL; i++) {
			temp = temp->next;
		}
		if (pos == 1) {
			deleteAtStart();
		}
		else if (pos == sizeOfList()) {
			deleteAtEnd();
		}
		else if (pos < 1 || pos > sizeOfList()) {
			cout << "Invalid Position :(" << endl;
		}
		else {
			current = temp->next;
			temp->next = current->next;
			free(current);
			current = NULL;


		}


	}



	void reverse() {
		Node* prev = NULL;
		Node* next = NULL;
		while (head != NULL) {
			next = head->next;
			head->next = prev;
			prev = head;
			head = next;
		}
		head = prev;
	}


	void dR(Node *head) {
		Node* temp = head;
		if (temp != NULL) {
			cout << temp->data;
			
			dR(temp = temp->next);
		}

	}



};


int main() {

	singlyLinkedList list;
	list.insertAtStart(4);
	list.insertAtStart(3);
	list.insertAtStart(2);
	list.insertAtStart(1);
	list.insertAtStart(0);
	list.display();
	cout << endl;
	list.deleteAtPos(3);
	cout << endl;
	list.display();
	cout << endl;
	list.display();
	cout << endl;
	list.dR();



	return 0;
}
