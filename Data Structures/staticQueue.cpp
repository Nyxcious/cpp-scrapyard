#include<iostream>
#define SIZE 10
using namespace std;
class Queue {
	int array[SIZE];
	int front, rear;
public:
	Queue() {
		front = rear = -1;
	}
	bool isEmpty() {
		if (front == -1)
			return true;
		else
			return false;
	}
	bool isFull() {
		if (rear == SIZE - 1)
			return true;
		else
			return false;
	}
	void enQueue(int value) {
		if (isFull()) {
			cout << "Queue Overflow Occured\n";
			return;
		}
		if (isEmpty()) {
			front = rear = 0;
			array[rear] = value;
			cout << value << " enQueued successfully\n";
		}
		else {
			rear++;
			array[rear] = value;
			cout << value << " enQueued successfully\n";
		}
	}
	void deQueue() {
		if (isEmpty()) {
			cout << "Queue Underflow Occured\n";
			return;
		}
		if (front == rear) {
			cout << array[front] << " deQueued successfullt\n";
			front = rear = -1;
		}
		else {
			cout << array[front] << " deQueued successfullt\n";
			front++;
		}
	}
	int getFront() {
		if (isEmpty())
			cout << "Queue is Empty\n";
		else
			return array[front];
	}
	void Display() {
		if (isEmpty())
			cout << "Queue is Empty\n";
		else {
			cout << "Queue elements are: ";
			for (int i = front; i <= rear; i++) {
				cout << array[i] << " ";
			}
			cout << endl;
		}
	}
};
int main() {
	Queue list;
	list.deQueue();
	list.enQueue(10);
	list.enQueue(20);
	list.enQueue(30);
	list.deQueue();
	cout << "Front is " << list.getFront() << endl;
	list.Display();
	list.enQueue(40);
	list.enQueue(50);
	list.Display();
	cout << "Front is " << list.getFront() << endl;
	list.deQueue();
	list.Display();
}
