/*

Problem 1 : 
Write a program in C++ to display N terms of natural number and their sum. Write a function to perform this task. A function should accept N terms as parameter and then perform the further tasks inside function. 

Sample Output: 
Input a number of terms: 7 
The natural numbers upto 7th terms are: 
1 2 3 4 5 6 7 
The sum of the natural numbers is: 28

Code :

*/

#include <iostream>
using namespace std;


void sum(int num) {

	int sum = 0;

	cout << "All of the natural numbers upto the " << num << "th terms are :" << endl;
	for (int i = 1; i <= num; i++) {

		cout << i<< " ";
		sum += i;

	}
	cout << endl;

	cout << "And there sum is : "<< sum;

}


int main() {

	int num;
	cout << "Enter the number of terms to display its sum : " << endl;
	cin >> num;
	sum(num);

	return 0;

}

/*

Problem 2 : 

Write a program in C++ to check whether a number is prime or not. Write a function to perform this task. A function should accept a number as parameter and then display a proper message whether this number is prime or not. 

Sample Output: 
Input a number to check prime or not: 13 
The entered number is a prime number. 


Code :

*/

#include <iostream>
using namespace std;



void primeOrNot(int num) {

	bool x = true;
	int i;

	if (num == 0 || num == 1) {
		 x = false;
	}
	else

	{
		for (i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				x = false;
				break;
			}
		}

	}

	if (x) {

		cout << "The number entered is prime !" << endl;

	}
	else 
		cout << "The number entered is a composite number !"<<endl;
	

}


int main() {

	int num;

	cout << "Enter the number to check if its prime or not : " << endl;
	cin >> num;
	primeOrNot(num);
	
	return 0;


}

/*

Problem 3 :
Write a program in C++ to find prime number within a range. Write a function to perform this task. The function should accept the range values (initial and final value) in parameter and then perform further task. 

Sample Output: 
Input number for starting range: 1 
Input number for ending range: 100

The prime numbers between 1 and 100 are: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
The total number of prime numbers between 1 to 100 is: 25 

Code :

*/

#include <iostream>
using namespace std;



void primeNumber(int start, int end) {


	
	int total = 0;

	cout << "The prime numbers between " << start << " and " << end << " are : " << endl;

	for (int n = start; n <= end; n++) {

		if (n == 1 || n == 0)
			continue;
		bool x = true;
		
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				
				
				x = false;
				break;
			}

		}
		
		if (x) {
			total++;
			cout << n << " ";
		}
		
	}
	cout << endl;
	cout << "The total number prime numbers in between " << start <<" and " << end << " are " << total;
	

}


int main() {


	int start;
	int end;

	cout << "Enter the number for the starting range : " << endl;
	cin >> start;
	cout << "Entere the number for the ending range :" << endl;
	cin >> end;

	primeNumber(start, end);
	return 0;

}

/*

Problem 4 :
Write a program in C++ to find the factorial of a number. Write a function to perform this task. The function should accept a number in parameter and return the factorial of given number. Display the returned value in main function. 

Sample output: 
Input a number to find the factorial: 5 
The factorial of the given number is: 120


Code :

*/

#include <iostream>
using namespace std;


int findFact(int f) {
	
	//using recursion function

	if (f > 1) 

		return f * findFact(f - 1);
	else
		return 1;
	



}


int main() {
	int f;
	cout << "Enter a number to find its factorial :" << endl;
	cin >> f;
	findFact(f);
	cout << "The factoiral of the given number is : " << findFact(f);
	return 0;

}

/*

Problem 5 :
Write a program in C++ to find the sum of digits of a given number. Write a function to perform this task. A function should accept a number in parameter and then display the sum of its digits. 

Sample Output: 
Input a number: 1234 
The sum of digits of 1234 is: 10 

Code :

*/

#include <iostream>
using namespace std;


void findSum(int num) {

	int sum = 0;
	while (num != 0) {

		sum = sum + num % 10;
		num = num / 10;

	}
	cout <<"The sum of its digits is : "<< sum;

}


int main() {

	int num;
	cout << "Enter a number to find its digits sum : " << endl;
	cin >> num;
	findSum(num);

	return 0;

}

/*

Problem 6:
Write a program in C++ to display the first n terms of Fibonacci series. Write a function to perform this task. The function should accept N in parameter and then display Fibonacci series upto N

Sample Output: 
Input number of terms to display: 10 
Here is the Fibonacci series upto to 10 terms: 
0 1 1 2 3 5 8 13 21 34


Code :

*/

#include <iostream>
using namespace std;

void fibo(int num) {

	int first = 0, second = 1, next = 0;
	
	cout << "The Fibonacci series upto the " << num << " term is : " << endl;

	for (int i = 1; i <= num; i++) {

		if (i == 1) {
			cout << first<<", ";
			continue;
		}
		if (i == 2) {
			cout << second<<", ";
			continue;
			
		}

		
		next = first + second;
		first = second;
		second = next;

		cout << next;
		if (i < num) {
			cout << ", ";
		}

	}

}

int main() {


	int num;
	cout << "Enter a number to to display Fibonacci series :" << endl;
	cin >> num;
	fibo(num);
	
	return 0;


}

/*

Problem 7 :
Write a program that takes a number from user and pass it to a function. That function should return the cube of the number.

Code :

*/

#include <iostream>
using namespace std;


int cube(int num) {

	num = num * num * num;
	return num;

}

int main() {

	int num;
	cout << "Enter your Number to show its cube : " << endl;
	cin >> num;
	cout<< "The cube of number is : " << cube(num);

	return 0;

}

/*

Problem 8 : 
Write a program that inputs two number from user and pass it to a function. That function should return the power of number as first number raised to power second number. 
Code :

*/
#include <iostream>
using namespace std;


int power(int num1, int num2) {

	return pow(num1, num2);

}

int main() {

	int num1, num2;
	cout << "Enter two Numbers : " << endl;
	cin >> num1 >> num2;
	cout << "The First Number raised to the power of Second Number is : " << power(num1, num2);

	return 0;

}

/*

Problem 9 :
Write a program that performs the addition of minimum 2 numbers and maximum 10 numbers. The program should have a user-defined function for this purpose. That function will accept max 10 numbers and min 2 numbers in parameter and then return their sum. For example if I pass 2 parameters to this function, it should return sum of two digits. If I pass 7 digits, it should return sum of 7 digits and vice versa. 

Hint: Use Default Parameters

Code :

*/

#include<iostream>
using namespace std;


int sum(int a, int b, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0, int i = 0, int j = 0) {

	return (a + b + c + d + e + f + g + h + i + j);

}

int main() {

	int count;
	cout << "Sum perfomed by 2 numbers : " << endl;
	cout << sum(2, 2) << endl;
	cout << "Sum perfomed by 3 numbers : " << endl;
	cout << sum(5, 4, 9) << endl;
	cout << "Sum perfomed by 4 numbers : " << endl;
	cout << sum(5, 4, 9, 10) << endl;
	cout << "Sum perfomed by 10 numbers : " << endl;
	cout << sum(5, 4, 9,10,11,12,14,15,15,13) << endl;
	

	return 0;

}

/*

Problem 10:
Write a program that takes two numbers from user and pass them to a function. That function should swap their values. If I print those numbers in main function after calling the SWAP function, their swapped values should be displayed.

Code :

*/

#include <iostream>
using namespace std;



void swapNum(int num1,int num2) {

	num1 =  num1 * num2;
	num2 = num1 / num2;
	num1 = num1 / num2;
	cout << "Values after swapping : " << num1 << " " << num2 << endl;
}


int main() {


	int num1, num2;
	cout << "Enter two numbers : " << endl;
	cin >> num1 >> num2;
	cout << "Values before swapping : " << num1 << " " << num2 << endl;
	swapNum(num1, num2);
	

	return 0;

}

/*

Problem 11:
Write a program that inputs 10 elements in a 1D array. The program should then print the sum, max and min value in the array.

Code :

*/

#include <iostream>
using namespace std;

int main() {

	int numbers[10];

	cout<<"Enter Ten Numbers : "<<endl;
	for (int i = 0; i < 10; i++) {
		
		cin >> numbers[i];

	}

	cout << "The sum of all elements is : " << endl;

	int sum = 0;
	for (int i = 0; i < 10; i++) {

		sum += numbers[i];

	}

	cout << sum<<endl;

	cout << "The maximum element of the array is :" << endl;;
	
	int max = numbers[0];

	for (int i = 0; i < 10; i++) {

		if (max < numbers[i]) {
			max = numbers[i];
		}

		
	}
	cout << max<<endl;

	cout << "The minimum element of the array is : " << endl;

	int min = numbers[0];

	for (int i = 0; i < 10; i++) {

		if (min > numbers[i]) {
			min = numbers[i];
		}

	}
	cout << min << endl;
	

	return 0;

}

/*

Problem 12:
Write a program that takes 10 elements in a 1D array and pass it to a function that should return max value in that array. Then pass this returned value to another function that should return true if that value is a prime number and false if it is composite.

Code :

*/

#include <iostream>
using namespace std;

void prime(int max) {

	bool x = true;

	if (max == 0 || max == 1) {
		 x = false;
	}
	else {

		for (int i = 2; i < max / 2; i++) {
			if (max % i == 0) {
				x = false;
				break;
			}
		}
		if (x) {
			cout << "True";
		}
		else {

			cout << "False";
		}

	}
}



void max(int numbers[10]){

	int max = numbers[0];
	for (int i = 0; i < 10; i++) {

		if (max < numbers[i])
			max = numbers[i];

	}
	
	 prime(max);
	



}




int main() {


	int numbers[10];
	bool x = false;
	cout << "Enter Ten Numbers : " << endl;
	for (int i = 0; i < 10; i++) {

		cin >> numbers[i];

	}
	
	max(numbers);
	


	return 0;

}


/*

Problem 13:
Write a program that inputs 10 elements in an array. The program should print the number of prime numbers in the array.

Code :

*/

#include <iostream>
using namespace std;


int main() {


	int numbers[10];
	cout << "Enter 10 Numbers : " << endl;
	for (int i = 0; i < 10; i++) {

		cin >> numbers[i];

	}

    for (int i = 0; i < 10; i++) {
       int j = 2;
       bool x = true;
        while (j < numbers[i]) {
            if (numbers[i] % j == 0) {
                x = false;
                break;
            }
            j++;
        }
        if (x) {
            cout << numbers[i] << " ";
        }
    }



	return 0;


}

/*
Problem 14:
Write a program that inputs 10 elements in an array. The program should print factorial of each number stored in the array.

Code :

*/

#include <iostream>
using namespace std;

int factorial(int num)
{

    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main()
{
    int numbers[10] = {};

    cout << "Enter ten numbers to display their factorials : " << endl;
    for (int i = 0; i < 10; i++) {

        cin >> numbers[i];

    }

    for (int i = 0; i < 10; i++)
    {
        int fact = factorial(numbers[i]);
        cout << fact << endl;
    }

    return 0;

}

/*

Problem 15:
Write a program that inputs 10 elements in an array. You are required to reverse the elements of array and then print them. (Element at 0 index should be exchanged with the element at 9 index and vice versa)
Code :

*/

#include<iostream>
using namespace std;

int main() {

	cout << "Enter 10 elements to reverse them : " << endl;
	int numbers[10];

	for (int i = 0; i < 10; i++) {

		cin >> numbers[i];
	}
	cout << "Array before reversal : " << endl;
	for (int i = 0; i < 10; i++) {

		cout << numbers[i] << " ";
	}
	cout << endl;

	int firstIndex = 0, lastIndex =  9, temp{};

	while (firstIndex <= lastIndex) {
		temp = numbers[firstIndex];
		numbers[firstIndex] = numbers[lastIndex];
		numbers[lastIndex] = temp;
		firstIndex++;
		lastIndex--;
	}

	cout << "Reversed array is : " << endl;
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}


	return 0;

}

/*

Problem 16:
Write a class “Circle” with one data member radius. Write following member functions: 

	A constructor that assigns the data members with any initial value. (mostly zero) 
	Set_radius() that accepts a value in parameter and assigns to radius
	get_area() that calculate and return area 
	get_circum() that calculate and return circumference 

The program should create two objects of class and input radius for these objects. The program should display area for first object and circumference for second object.

Code :

*/

#include<iostream>
using namespace std;


class Circle {
	
public:

	float radius;

	Circle()
		 {

		radius = 0;

		 }

	
public:
	void set_radius(float r) {
		radius = r;
	}

	float get_area() {
		return 3.14*radius*radius;
	}

	float get_circum() {
		return 2*3.14*radius;
	}




};


int main() {

	
	Circle one;
	Circle two;
	float r;
	cout << "Enter the radius of first circle : " << endl;
	cin >> r;
	one.set_radius(r);
	cout << "The area of the first circle is :" << endl;
	cout<<one.get_area()<<endl;
	cout << "Enter the radius of second circle : " << endl;
	cin >> r;
	two.set_radius(r);
	cout << "The circumference of the seocond circle is : " << endl;
	cout << two.get_circum()<<endl;


	return 0;

}

/*

Problem 17 :
Write a class “Book” with three data members BookID, Pages and Price. It also contains following member functions:

	A constructor that assigns the data members with any initial value. (mostly zero)
	The get() is used to input values
	The show() is used to display values
	The set() is used to set values of data members using parameters
	The getPrice() is used to return value of price 

The program should create two objects of class and input values for these objects. The program should display the details of most costly book.

Code :

*/

#include <iostream>
using namespace std;


class Book {

public :

	int bookID, pages, price;

	Book() {

		bookID, pages, price = 0;

	}

	void get() {

		cout << "Enter the Book ID : " << endl;
		cin >> bookID;
		cout << "Enter the Book Pages : " << endl;
		cin >> pages;
		cout << "Enter the Book Price :" << endl;
		cin >> price;

	}

	void show() {

		cout <<"ID : " <<bookID << endl;
		cout << "Pages : "<<pages << endl;
		cout << "Price : "<<price << endl;
	}

	void set(int b, int page, int p) {
		bookID = b;
		pages = page;
		price = p;
	}

	int get_price() {
		return price;
	}



};

int main() {

	Book one;
	Book two;

	cout << "---- Enter Details for Book One ---- " << endl;
	one.get();
	cout << "---- Enter Details for Book Two ---- " << endl;
	two.get();

	cout << "The Book Details with Higher Price are : " << endl;

	if (one.get_price() > two.get_price()) {
		one.show();
	}
	else
		two.show();


	return 0;

}

/*

Problem 18 :

Write a class “Array” that contains an array of integers to store five values. It also contains following member functions.


	A constructor that assigns all the elements of array with zero value. 
	The Fill() function is used to fill the array with values from user 
	The Display() function is used to display the values of array
	The Max() function shows the maximum value in the array
	The Min() function shows the minimum value in the array 

All member functions should be defined outside the class. Create an object in main function and make use of all member functions.
Code :

*/

#include <iostream>
using namespace std;

class Array {

public:

	//Array
	int numbers[5];
	
	//Member Functions Decleration 
	Array();
	void Fill();
	void Display();
	void Max();
	void Min();


};

Array :: Array() {
	for (int i = 0; i < 5; i++) {
		numbers[i] == 0;
	}

}


void Array:: Fill() {
	cout << "Enter 5 integers into array " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
	}
}

void Array::Display() {

	cout << "The Entered integers are : " << endl;
	for (int i = 0; i < 5; i++) {

		cout << numbers[i] << endl;

	}

}

void Array:: Max() {
	int max{};

	for (int i = 0; i < 5; i++) {
		if (max < numbers[i])
			max = numbers[i];
	}
	cout << "The maximum value of array is : " << endl;
	cout << max << endl;

}

void Array:: Min() {
	int min = 1;

	for (int i = 0; i < 5; i++) {
		if (min > numbers[i])
			min = numbers[i];

	}
	cout << "The minimum value of array is : " << endl;
	cout << min << endl;

}




int main() {

	Array one;
	one.Fill();
	one.Display();
	one.Max();
	one.Min();

	return 0;


}






