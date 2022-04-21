#include<iostream>
using namespace std;

int ABC[100] = {2,4,6,8,10,12,14,16,18,20};
int N=10;

bool isEmpty(){
	if(N==0)
		return true;
	else
		return false;
}

void show(){
	if(isEmpty()){
		cout << "\nDisplay Failed: Array is Empty\n";
		return;
	}
	else{
		for(int i=0; i<N; i++){
			cout << "Value " << i+1 << " = " << ABC[i] << endl;
		}	
	}
}

bool isFull(){
	if(N==100)
		return true;
	else
		return false;
}

void insertPosition(){
	if(isFull())
		cout << "\nInsertion Failed: Array is Already Filled";
	else{
		int val, pos;
		cout << "Enter Value to Insert: ";
		cin >> val;
		cout << "Enter Position: ";
		cin >> pos;
		if(pos<1 || pos>N){
			cout << "\nInsertion Failed: Invalid Position\n";
			return;
		}
		else{
			for(int i=N-1; i>=pos-1; i--){
				ABC[i+1] = ABC[i];
			}
			ABC[pos-1] = val;
			N++;
			cout << "\nInsetion Successful\n";		
		}	
	}
	
}

void insertEnd(){
	if(isFull())
		cout << "\nInsertion Failed: Array is Already Filled";
	else{
		int val;
		cout << "Enter Value to Insert: ";
		cin >> val;
		ABC[N] = val;
		N++;
		cout << "\nInsetion Successful\n";
	}
}

void insertStart(){
	if(isFull())
		cout << "\nInsertion Failed: Array is Already Filled";
	else{
		int val;
		cout << "Enter Value to Insert: ";
		cin >> val;
		for(int i=N-1; i>=0; i--){
			ABC[i+1] = ABC[i];
		}
		ABC[0] = val;
		N++;
		cout << "\nInsetion Successful\n";	
	}
}

void deletePosition(){
	int pos;
	if(isEmpty()){
		cout << "\nDeletion Failed: Array is Empty\n";
		return;
	}
	else{
		cout << "Enter Position: ";
		cin >> pos;	
		if(pos<1 || pos>N){
			cout << "\nDeleteion Failed: Invalid Position\n";
			return;
		}
		else{
			for(int i=pos-1; i<N-1; i++){
				ABC[i] = ABC[i+1];
			}
			ABC[N-1] = 0;
			N--;
			cout << "\nDeletion Successful\n";
		}
	}
	
	
}

int main(){
	int choice;
	do{
		system("cls");
		cout << "Enter 1 to Insert Element at Start\n";
		cout << "Enter 2 to Insert Element at End\n";
		cout << "Enter 3 to Insert Element at Specified Position\n";
		cout << "Enter 4 to Delete Element from Specified Position\n";
		cout << "Enter 5 to Display All Element\n";
		cout << "Enter 0 to Exit\n";
		cout << "Choice: ";
		cin >> choice;
		
		if(choice == 1){
			cout << endl;
			insertStart();
			system("pause");
		}
		else if(choice == 2){
			cout << endl;
			insertEnd();
			system("pause");		
		}
		else if(choice == 3){
			cout << endl;
			insertPosition();
			system("pause");
		}
		else if(choice == 4){
			cout << endl;
			deletePosition();
			system("pause");
		}
		else if(choice == 5){
			cout << "\nOriginal values" << endl;
			show();
			system("pause");
		}	
	}while(choice!=0);

	return 0;
}
