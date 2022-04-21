#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;

};

void push(Node** head, int d)
{
	
	Node* temp = new Node;

	
	temp->data = d;

	
	temp->next = *head;

	
	*head= temp;
}

void Print(Node* head) {
	if (head == NULL) {
		return;
	}
	cout << head->data<<" ";
	Print(head->next);

}


void Print_reverse(struct Node* head) {
	if(head == NULL)
	{
		return;
	}
	
	Print_reverse(head->next);
	cout << head->data<<" ";
}

Node* sorted(Node* a, Node* b)
{
	Node* result = NULL;

	/* Base cases */
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);

	/* Pick either a or b, and recur */
	if (a->data <= b->data)
	{
		result = a;
		result->next = sorted(a->next, b);
	}
	else
	{
		result = b;
		result->next = sorted(a, b->next);
	}
	return(result);
}




int main() {
	
	struct Node *head1 = NULL;
	struct Node* head2 = NULL;
	struct Node* head3 = NULL;
	push(&head1, 1);
	push(&head1, 2);
	push(&head1, 3);
	push(&head1, 4);
	push(&head1, 5);


	push(&head2, 6);
	push(&head2, 7);
	push(&head2, 8);
	push(&head2, 9);
	cout << endl;
	 Print(head1);
	 cout << endl;
	
	 cout << endl;
	 Print(head2);
	 cout << endl;
	

	 head3 = sorted(head2, head1);
	 cout << endl;
	 Print(head3);




	return 0;
}
