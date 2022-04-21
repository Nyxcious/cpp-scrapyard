#include<iostream>
using namespace std;
int main(){
	int array[100];
	int N;
	cout << "Enter number of elements of array: ";
	cin >> N;
	cout << endl;
	for(int i=0; i<N; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> array[i];
	}
	cout << endl;
	for(int i=0; i<N; i++){
		cout << "Element " << i+1 << " = " << array[i] << endl;
	}
	int POS, VAL;
	cout << endl << "Enter Value to insert: ";
	cin >> VAL;\
	cout << "Enter Position: ";
	cin >> POS;
	if(POS>N || POS<1){
		cout << "\nInvalid Position\n";
	}
	else{
		POS=POS-1;
		for(int i=N-1; i>=POS; i--){
			array[i+1] = array[i];
		}
		array[POS] = VAL;
		N = N+1;
		cout << endl;
		for(int i=0; i<N; i++){
			cout << array[i] << " ";
		}
	}
	
	
}



