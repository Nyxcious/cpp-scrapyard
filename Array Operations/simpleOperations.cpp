//Value At Position

#include<iostream>
using namespace std;


int main() {


	Inserting Value at position : 

	int array[100]{ 1,2,3,4,5,6,7,8, };

	int val, pos, size = 7, n = size-1;
	cout << "Enter a value and positon " << endl;

	cin >> val >> pos;

    for (int i = size; i >= pos-1; i--) {
        array[i+1] = array[i];
        
    }
    array[pos-1] = val;
    size++;
    cout << "\nThe New Array is:\n";
    for (int i = 0; i <= size; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;


// Delete an element from array

	int array[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 9, elem, count = 0;
	cout << "Enter value to be delted : " << endl;
	cin >> elem;

	for (int i = 0; i < size; i++) {
		if (array[i] == elem) {
			for (int j = i; j < size - 1; j++) {
				array[j] = array[j + 1];
				count++;
			}
		}
	}

	if (count == 0) {
		cout << "Element not found :(" << endl;
	}
	else { cout << "Element Deleted !\n"; }

	for (int i = 0; i < size - 1; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

//Delete element at position

	int array[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 9, pos;

	cout << "Enter the position " << endl;
	cin >> pos;
	for (int i = pos-1; i <= size; i++) {
		array[i] = array[i+1];
	}
	size--;
	for (int i = 0; i <= size; i++) {
		cout << array[i]<<" ";
	}

	cout << endl;

//Isprime

	int array1[10];
	int temp;
	for (int i = 0; i < 10; i++) {
	temp = 1;
	for (int j = 2; j <= array1[i] / 2; j++) {
	if (array1[i] % j == 0) {
		temp = 5;
		break;
		}
	}
	if (temp == 1)
		cout << array1[i] << endl;
	}
//Reversing using secondary array


	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int array2[10] = {};
	int size = 9;
	cout << "Before Reversing : " << endl;
	for (int i = 0; i <= size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "After Reversing : " << endl;
	int index = 0;
	for (int i = size; i>=0; i--) {
		array2[index] = array[i];
		index++;
	}

	for (int i = 0; i <= size; i++) {
		cout << array2[i]<< " ";
	}
	cout << endl;

	
// Sum of elements 

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	
	for (int i = 0; i < 10; i++) {
		sum += a[i];
	}
	cout <<"The total sum of elements is : "<< sum;
	
	return 0;
	
	
//Reversing using no array

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 9, half = size/2;

	cout << "Before Reversing : " << endl;
	for (int i = 0; i <= size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "After Reversing : " << endl;
	int i = 0, last = size,temp;
	while (i <= half) {
		temp = array[last];
		array[last] = array[i];
		array[i] = temp;
		last--;
		i++;
	}

	for (int i = 0; i <= size; i++) {
		cout << array[i] << " ";
	}

//Even or odd


	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 9, half = size / 2;

	cout << "Before Reversing : " << endl;
	for (int i = 0; i <= size; i++) {
		if (array[i] % 2 == 0) {
			cout << array[i] << " Is Even" << endl;
		}
		else {
			cout << array[i] << " Is ODD" << endl;
		}
		
	}

//Merging two arrays

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 11,12,13,14,15,16,17,18,19,20};
	int c[20] = {};
	int elem = 10;
	for (int i = 0; i <= 9; i++) {
		 c[i] = a[i];
	}
	for (int i = 0; i <= 9; i++) {
		c[elem] = b[i];
		elem++;
	}

	cout << "After Merging : " << endl;
	for (int i = 0; i <= 19; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	

}



