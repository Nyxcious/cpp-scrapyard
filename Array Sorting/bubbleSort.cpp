#include<iostream>
using namespace std;
int main(){
	int array[] = {5,2,78,45,63,58,27,53,73,31};
	int size=10, temp;
	
	cout << "Unsorted Array: ";
	for(int i=0; i<size; i++){
  		cout << array[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < size-1; i++) {
    	for (int j=0; j < (size-1)-i; j++) {
      		if (array[j] > array[j+1]) {
				temp = array[j];
        		array[j] = array[j+1];
        		array[j+1] = temp;
      		}
    	}
  	}
  	
  	cout << "Sorted Array: ";
	for(int i=0; i<size; i++){
  		cout << array[i] << " ";
	}
	cout << endl;
	  
}
