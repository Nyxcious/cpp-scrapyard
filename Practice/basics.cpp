#include <conio.h>
#include <iostream>
using namespace std;

int main() {


	/* for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;

	}

	*/

	/* for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout <<endl;
	}

	*/

	/*
	char input, alphabet = 'A';

	cout << "Enter the uppercase character you want to print in the last row: ";
	cin >> input;

	for (int i = 1; i <= (input - 'A' + 1); i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << alphabet << " ";
		}
		++alphabet;
		cout << endl;
		}
	return 0;*/

	/*for (int i = n; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}*/

	/*for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout <<j;
		}
		cout << endl;
	}*/
	/*
		int number = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				cout << number;
				number++;
			}
			cout << endl;

		}*/

		/*int n;
		cout << "Enter the number of rows : " << endl;
		cin >> n;*/

		/*for (int i = 1; i <= 5; i++){
			for (int j = i - 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;

		}*/

		//for (int i = 1; i <= n; i++) {
		//	for (int j = i; j <= i; j++) {
		//		cout << "*";

		//	}
		//	cout << endl;
		//}

		/*for (int i = 1; i <= 3; i++) {
			for (int n = i - 4; n <= i; n++) {
				cout << "*";
			}
			cout << endl;
		}*/

		//for (int i = 1; i <= 5; i++) {
		//	for (int j = 1; j <= i; j++) {
		//		cout << "*";

		//	}
		//	cout << endl;
		//}

		//for (int k = 4; k >= 1; k--) {
		//	for (int l = 1; l <= k; l++) {
		//		cout << "*";

		//	}
		//	cout << endl;
		//}

		//for (int i = 5; i >= 1; i--) {
		//	for (int j = 1; j <= i; j++) {
		//		cout << "*";
		//	}
		//	cout << endl;
		//}

		//for (int n = 1; n <= 5; n++) {
		//	for (int k = 1; k<= n; k++) {
		//		cout << "*";
		//	}
		//	cout << endl;
		//}

	//for (int i = 1; i <= 10; i++) {
	//	for (int n = 1; n <= i; n++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//	}
	//
	//for (int i = 9; i >= 1; i--) {
	//	for (int n = 1; n <= i; n++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//	}

	//bool isPrime = true;
	//int n;

	//cout << "Enter a number to check prime or not : " << endl;
	//cin >> n;
	//if (n == 1 || n == 0) {
	//	isPrime = false;
	//	cout << "Number is not prime :(" << endl;
	//}
	//else {
	//	for (int i = 2; i <= n / 2; ++i) {
	//		if (i%n == 0) {
	//			isPrime = false;

	//		}
	//	}
	//	if (isPrime == true) {
	//		cout << "Number is prime " << endl;
	//	}
	//	else if (isPrime == false) {
	//		cout << "Number is not prime :(" << endl;
	//	}
	//}

//int  num1 = 0, num2= 1, num3, number;
//cout << "Enter the number of elements : " << endl;
//cin >> number;
//cout << num1 << " " << num2<< " ";
//for (int i = 2; i < number; i++) {
//	num3 = num1 + num2;
//	cout << num3<<" ";
//	num1 = num2;
//	num2 = num3;
//}
//cout << " ";

//int fact=1 , n;
//cout << "Enter a number to know its facrtoiral : " << endl;
//cin >> n;
//for (int i = 1; i <= n; i++) {
//	fact = i * fact;
//}
//cout << fact;

// Using Recursion 

//	int fact(int n);
//
//	int n;
//
//	cout << "Enter a positive integer: ";
//	cin >> n;
//
//	cout << "Factorial of " << n << " = " << fact(n);
//
//	return 0;
//}
//int fact(int n) {
//	if (n > 1) {
//		n = n *fact (n - 1);
//	}
//	else {
//		return(1);
//	}

// Armstrong

//int n, r, sum = 0, temp;
//cout << "Enter the Number=  ";
//cin >> n;
//temp = n;
//while (n > 0)
//{
//	r = n % 10;
//	sum = sum + (r*r*r);
//	n = n / 10;
//}
//if (temp == sum)
//cout << "Armstrong Number." << endl;
//else
//cout << "Not Armstrong Number." << endl;
//return 0;

// Sum of its digits, If you want to find out the digits of any number just take modulo by 10 in a variable, divide that number by by 10 
//and repeat while not 0 and perform calculation in mid.

//int n, sum=0, m, temp =0;
//cout << "Enter a number to know sum of its digits  :" << endl;
//cin >> n;
//temp = n;
//while (n > 0) {
//	m = n % 10;
//	sum = sum + m;
//	n = n / 10;
//
//}
//cout << "Sum of the digits of number " << temp << " is :" << sum;

// Reverse of a number 
//
//int n, rem, rev =0, temp;
//cout << "Enter a number to reverse it  :" << endl;
//cin >> n;
//temp = n;
//while (n > 0) {
//	rem = n % 10;
//	rev = rev * 10 + rem;
//	n /= 10;
//}
//cout << "Reversed number is : " << rev;

// Swapping without temp using + an - and / and *

//int a = 10, b = 20;
// a = a + b;
// b = a - b;
// a = a - b;
// cout << a << endl << b;

//int a = 5, b = 10;
//cout << "Before swap a= " << a << " b= " << b << endl;
//a = a * b; //a=50 (5*10)    
//b = a / b; //b=5 (50/10)    
//a = a / b; //a=10 (50/5)    
//cout << "After swap a= " << a << " b= " << b << endl;

// Converting Numbers into letters

/*long int n, sum = 0, r;
cout << "Enter the Number= ";
cin >> n;
while (n > 0)
{
	r = n % 10;
	sum = sum * 10 + r;
	n = n / 10;
}
n = sum;
while (n > 0)
{
	r = n % 10;
	switch (r)
	{
	case 1:
		cout << "one ";
		break;
	case 2:
		cout << "two ";
		break;
	case 3:
		cout << "three ";
		break;
	case 4:
		cout << "four ";
		break;
	case 5:
		cout << "five ";
		break;
	case 6:
		cout << "six ";
		break;
	case 7:
		cout << "seven ";
		break;
	case 8:
		cout << "eight ";
		break;
	case 9:
		cout << "nine ";
		break;
	case 0:
		cout << "zero ";
		break;
	default:
		cout << "tttt ";
		break;
	}
	n = n / 10;
}*/

// Array to char conversion 

//char char_array[] = { 'T','A','Y','Y','A','B'};
//int array_size = sizeof(char_array) /
//sizeof(char);
//string j = "";
//int i;
//for (i = 0; i < array_size; i++)
//{
//	
//	j = j + char_array[i];
//}
//cout << j << endl;

}
