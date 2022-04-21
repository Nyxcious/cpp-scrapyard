#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
};

class DynamicQueue {
	Node* front, * rear;

public:

	DynamicQueue() {
		front = rear = NULL;
	}

	bool isEmpty() {
		if (front == NULL)
			return true;
		else
			return false;
	}

	int count_nodes() {
		int count = 0;
		Node* cur = new Node;
		cur = front;
		while (cur != NULL) {
			count++;
			cur = cur->next;
		}
		return count;
	}

	void display_queue() {
		if (isEmpty()) {
			cout << "Linked List is Empty\n";
			return;
		}
		else {
			Node* cur = new Node;
			cur = front;
			while (cur != NULL) {
				cout << cur->data << endl;
				cur = cur->next;
			}
		}
	}

	void enQueue(int value) {
		Node* temp = new Node;
		temp->data = value;
		temp->next = NULL;

		if (isEmpty()) {
			front = rear = temp;
			front->prev = NULL;
		}
		else {
			rear->next = temp;
			temp->prev = rear;
			rear = temp;
		}
	}

	void deQueue() {
		if (isEmpty())
			cout << "List is already empty\n";
		else if (count_nodes() == 1) {
			cout << "Node deleted with value " << front->data << endl;
			front = rear = NULL;
		}
		else {
			Node* temp = new Node;
			temp = front;
			front = front->next;
			front->prev = NULL;
			cout << "Node deleted with value " << temp->data << endl;
			temp = NULL;
		}
	}
};

int main() {
	DynamicQueue Queue;
	Queue.enQueue(5);
	Queue.enQueue(10);
	Queue.enQueue(15);
	Queue.display_queue();
	Queue.deQueue();
	Queue.display_queue();
	return 0;
}
