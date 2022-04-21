#include<iostream>
using namespace std;

int main() {

	int array[10] = { 99,3324,53,22,11,150,2,0,18 };
	int size = 10, i, j,min, temp{};
	for (int i = 0; i < size; i++) { cout << array[i] << " "; }
	cout << endl;
	
	for (i = 0; i < size - 1; i++) {

		min = i;   

		for (j = i + 1; j < size; j++)

			if (array[j] < array[min])

				min = j;
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		
	}

	cout << "After Sorting : " << endl;
	for (int i = 0; i < size; i++) { cout << array[i] << " "; }


	return 0;
}
