#include<iostream>
using namespace std;
int main(){
	int A[10] = {23,56,37,84,65,92,57,45,74,25};
	int temp=-1;
	int search;
	cout << "Enter any value to search in Array: ";
	cin >> search;
	for(int i=0; i<10; i++){
		if(A[i] == search){
			temp=i;
			break;
		}
	}
	if(temp==-1){
		cout << "Value not found\n";
	}
	else{
		cout << "Value found at index " << temp << endl;
	}
}
