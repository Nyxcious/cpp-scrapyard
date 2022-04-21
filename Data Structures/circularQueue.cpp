#include<iostream>
#define SIZE 10
using namespace std;

class SimpleQueue {
	int Q[SIZE];
	int front, rear;
public:
	SimpleQueue() {
		front = rear = -1;
	}
	bool isEmpty() {
		if (front == -1)
			return true;
		else
			return false;
	}
	bool isFull() {
		if ((rear == SIZE - 1 && front == 0) || rear == front - 1)
			return true;
		else
			return false;
	}
	void enQueue(int value) {
		if (isFull()) {
			cout << "\nQueue Overflow Occured\n\n";
			return;
		}
		if (isEmpty())
			front = rear = 0;
		else if (rear == SIZE - 1 && front != 0)
			rear = 0;
		else
			rear++;
		Q[rear] = value;
		cout << value << " is enqueued successfyully\n";
	}
	void Display() {
		if (isEmpty()) {
			cout << "List is Empty\n";
			return;
		}

		if (rear < front) {
			cout << endl;
			for (int i = front; i <= SIZE - 1; i++) {
				cout << Q[i] << " ";
			}
			for (int i = 0; i <= rear; i++) {
				cout << Q[i] << " ";
			}
			cout << endl << endl;
		}
		else {
			cout << endl;
			for (int i = front; i <= rear; i++) {
				cout << Q[i] << " ";
			}
			cout << endl << endl;
		}
	}
	void deQueue() {
		if (isEmpty()) {
			cout << "\nQueue underflow occured\n\n";
			return;
		}
		cout << Q[front] << " is dequeued successfully\n";
		if (front == rear)
			front = rear = -1;
		else if (front == SIZE - 1)
			front = 0;
		else
			front++;
	}
	int getFront() {
		if (isEmpty()) {
			cout << "Queue is Empty\n";
		}
		else
			return Q[front];
	}
};
int main() {
	SimpleQueue list;
	list.enQueue(10);
	list.enQueue(20);
	list.enQueue(30);
	list.enQueue(40);
	list.enQueue(50);
	list.enQueue(60);
	list.enQueue(70);
	list.enQueue(80);
	list.enQueue(90);
	list.enQueue(100);
	list.deQueue();
	list.deQueue();
	list.enQueue(110);
	list.enQueue(120);
	list.enQueue(130);
	list.deQueue();
	list.enQueue(130);
	list.Display();
}
