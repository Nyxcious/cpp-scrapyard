#include<iostream>
using namespace std;


int main() {

	int array[] = { 1,2,3,4,5,6 };
	int size = 6, mid, start = 0, end = size - 1, temp = -1, search;
	cout << "Enter an Element to Search Using Binary Search : " << endl;
	cin >> search;

	while (start <= end) {
		mid = (start + end) / 2;
		if (search == array[mid]) {
			temp = mid;
			break;
		}

		if (search >= array[mid]) {
			start = mid + 1;
		}

		else{

        end = mid - 1;
		                                                      
		}
	}

	if (temp == -1) {
		cout << "Value Not Found :( ! " << endl;
	}
	else {
		cout << "Value Fount at Index " << temp << endl;
	}
	



	return 0;
}
