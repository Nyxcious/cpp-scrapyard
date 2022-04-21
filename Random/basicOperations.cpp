#include<iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
string grade[20];
int i = 0;
void Main_Exit() { //exit from main menu
	system("CLS");
	cout << "\n\n\n\n\n\n\n";
	cout << "\t\t\t\t  _____________________________________\n";

	cout << "\t\t\t\t||                                     ||\n";

	cout << "\t\t\t\t||                                     ||\n";

	cout << "\t\t\t\t||         System is Shut Down         ||\n";

	cout << "\t\t\t\t||                                     ||\n";

	cout << "\t\t\t\t||                                     ||\n";

	cout << "\t\t\t\t||_____________________________________||";
	cout << "\n\n\n\n\n";

	exit(0);

}

void Main_Menu() {
	system("CLS");
	cout << "\n\n\n\n\n\n\t\t\t\t       ";
	cout << "-----------------Main_Menu------------------\n\n";

	cout << "\t\t\t\t-------------------------------------------------";

	cout << "\n\n";
	cout << "\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";

	cout << "\t\t\t\t*                                                        *\n";

	cout << "\t\t\t\t*  0) Exit the program                                   *\n";

	cout << "\t\t\t\t*  1) Table                                              *\n";

	cout << "\t\t\t\t*  2) Factorial                                          *\n";

	cout << "\t\t\t\t*  3) Prime, Composite, Even, Odd	                 *\n";

	cout << "\t\t\t\t*  4) Arithmetic Operations                              *\n";

	cout << "\t\t\t\t*  5) Grading System                                     *\n";

	cout << "\t\t\t\t*  6) Area of Triangle                                   *\n";

	cout << "\t\t\t\t*  7) Series (1+1/1!+1/2!+1/3!+ ... 1/n!)                *\n";

	cout << "\t\t\t\t*  8) Finding maximum and minimum number in an array     *\n";

	cout << "\t\t\t\t*  9) Matrix Calculation                                 *\n";

	cout << "\t\t\t\t* 10) Student record and display along with their result *\n";

	cout << "\t\t\t\t*                                                        *\n";

	cout << "\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";

}

void  Table() {
	system("CLS");

	int start_value;
	int end_value;
	int table_number;


	cout << "\n\n\n\n\t\t\tEnter Starting Value of table : ";
	cin >> start_value;
	cout << "\t\t\tEnter Ending point of table : ";
	cin >> end_value;
	cout << "\t\t\tEnter the Value of table you want : ";
	cin >> table_number;
	cout << "\n\t\t\t\t\t     ----Table #" << table_number << "----" << endl;
	for (int i = start_value; i <= end_value; i++) {
		cout << "\t\t\t";
		cout << "\t\t\t" << table_number << " * " << i << " = " << table_number * i << endl;
	}
	cout << "\n\n\n";
}

int Factorial(int n) {

	if (n > 1)
		return n * Factorial(n - 1);
	else
		return 1;

}


// Prime , Composite, Even, Odd
void Calculations() {
	system("CLS");
	int digit;
	int count = 0;

	cout << "\n\n\n\n\t\t\tEnter a Digit : ";
	cin >> digit;


	// For Composite 
	for (int i = 1; i <= digit; i++)
	{
		if (digit % i == 0)
			count++;
	}

	if (count > 2)
		cout << "\n\t\t\t" << digit << " is a Composite Number";
	else
		cout << "\n\t\t\t" << digit << " is not a Composite Number";

	// For Prime

	bool is_prime = true;
	if (digit == 0 || digit == 1) { // 0 and 1 are not prime numbers
		is_prime = false;
	}


	for (int i = 2; i <= digit / 2; ++i) {  // loop to check if n is prime
		if (digit % i == 0) {
			is_prime = false;
			break;
		}
	}

	if (is_prime)
		cout << "\n\t\t\t" << digit << " is a Prime Number";
	else
		cout << "\n\t\t\t" << digit << " is not a Prime Number";

	// For Even Odd

	(digit % 2 == 0) ? cout << "\n\t\t\t" << digit << " is Even." : cout << "\n\t\t\t" << digit << " is Odd.";



}



// Grading System

void Grading_System(int marks) {
	system("CLS");


	if (marks < 0 || marks>100) {
		cout << "\t\t\t Invalid Choice....";
	}
	else if (marks >= 85) {
		cout << "\t\t\t  ";
		grade[i] = "A+";
		i++;
	}
	else if (marks >= 80) {
		cout << "\t\t\t";
		grade[i] = "A";
		i++;
	}
	else if (marks >= 75) {
		cout << "\t\t\t ";
		grade[i] = "B+";
		i++;
	}
	else if (marks >= 70) {
		cout << "\t\t\t ";
		grade[i] = "B";
		i++;
	}
	else if (marks >= 65) {
		cout << "\t\t\t";
		grade[i] = "C+";
		i++;
	}
	else if (marks >= 60) {
		cout << "\t\t\t  ";
		grade[i] = "C";
		i++;
	}
	else if (marks >= 55) {
		cout << "\t\t\t  ";
		grade[i] = "D";
		i++;
	}
	else if (marks > 50) {
		cout << "\t\t\t  ";
		grade[i] = "F";
		i++;
	}

	cout << "\n\n\n\n\t\t\t\tYour Grade Is :" << grade[i - 1] << endl;


}

// Arithmetic OPerations 
void Arithmetic_Operation() {
	system("CLS");
	cout << "\n\n\n";
	float a, b;
	char op;
	cout << "\t\t\tEnter first number  : ";
	cin >> a;
	cout << "\t\t\tEnter Second number : ";
	cin >> b;
	cout << "\t\t\tEnter an operator   : ";
	cin >> op;
	switch (op) {
	case'+':
		cout << "\t\t\tSum is : " << a + b << endl;
		break;
	case'-':
		cout << "\t\t\tSubtraction is : " << a - b << endl;
		break;
	case'*':
		cout << "\t\t\tMultiplication is : " << a * b << endl;
		break;
	case'/':
		cout << "\t\t\tDivision is : " << a / b << endl;
		break;
	}
}
//Area of Triangle
void Area_of_Triangle() {
	system("CLS");
	float height, base;
	float area;
	cout << "\t\t\tEnter Height : ";
	cin >> height;
	cout << "\t\t\tEnter base : ";
	cin >> base;

	area = 0.5 * height * base;
	cout << "\t\t\tArea of triangle : " << area;


}




//Series
void Series() {
	system("CLS");
	int n;

	float sum = 0;
	float factor = 0;
	cout << "\n\n\n\t\t\tEnter a number :";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		factor = Factorial(i);
		sum = sum + (1 / factor);
		factor = 0;
	}
	sum = sum + 1;
	cout << "\n\t\t\tFollowing series is :" << sum << endl;
}
//Maximun Minimun
void Maximum_Min() {
	system("CLS");
	int arr[10], num, i, max, min, sum = 0;
	float average;
	cout << "\t\t\tEnter the size of the array : ";
	cin >> num;
	cout << "\t\t\tEnter the elements of the array : ";
	for (i = 0; i < num; i++)
		cin >> arr[i];
	max = arr[0];
	for (i = 0; i < num; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];
	for (i = 0; i < num; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "\t\t\tLargest element : " << max << endl;
	cout << "\t\t\tSmallest element : " << min;

	// Find sum of all array elements
	for (i = 0; i < num; i++) {
		sum += arr[i];
	}
	cout << "\n\t\t\tSum Is :" << sum;

	average = (float)sum / num; {
		cout << "\n\t\t\tAverage : " << average;
	}
}
//Martric
void Matric() {
	system("CLS");

	int a[4][4], b[4][4], mult[4][4], sum[4][4], Sub[4][4], Div[4][4], i, j, k, op;

	cout << endl
		<< "Enter elements of matrix 1:" << endl;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
		{
			cout << "Enter element a " << i + 1 << j + 1 << ":";
			cin >> a[i][j];
		}

	cout << endl
		<< "Enter elements of matrix 2:" << endl;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	cout << "\n\n ------------------------------------------ \n\n";

	cout << "1 for Addition" << endl;
	cout << "2 for Subtraction" << endl;
	cout << "3 for Multiplication" << endl;
	cout << "4 for Division" << endl;
	cout << "Enter Choice : " << endl;
	cin >> op;
	switch (op)
	{
	case 1:
		int i, j;
		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
				sum[i][j] = a[i][j] + b[i][j];

		cout << "Output Matrix: " << endl;
		for (i = 0; i < 4; ++i)
		{
			for (j = 0; j < 4; ++j)
				cout << sum[i][j] << '\t';
			cout << endl;
		}
		break;
	case 2:
		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
				Sub[i][j] = a[i][j] - b[i][j];

		cout << "Output Matrix: " << endl;
		for (i = 0; i < 4; ++i)
		{
			for (j = 0; j < 4; ++j)
				cout << Sub[i][j] << '\t';
			cout << endl;
		}
		break;
	case 3:
		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
			{
				mult[i][j] = 0;
			}

		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
				for (k = 0; k < 4; ++k)
					mult[i][j] += a[i][k] * b[k][j];

		cout << "Output Matrix: " << endl;
		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
			{
				cout << mult[i][j] << '\t';
				cout << endl;
			}
		break;
	case 4:
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				Div[i][j] = (a[i][j]) / (b[i][j]);

		cout << "Output Matrix: " << endl;
		for (i = 0; i < 4; ++i)
			for (j = 0; j < 4; ++j)
			{
				cout << Div[i][j] << '\t';
				cout << endl;
			}
	default:
		cout << "Invalid Operator";
		break;
	}

}
//Student Records
void Student_Records() {
	system("CLS");
	cout << "\n\n\t\t\t\t\t****** DEPARTMENT OF SOFTWARE ENGEENRING ******" << endl << endl;


	string arr1[20], arr2[20], arr3[20];
	int arr4[20];



	int ch = 0;

	cout << "\t\t\t\t\tHow many students do u want to enter:\t";

	cin >> ch;


	for (int i = 0; i < ch; i++)

	{

		cout << "\n\t\t\t\tEnter the Data of student: " << i + 1 << endl << endl;



		cout << "\t\t\t\tEnter Roll no: ";

		cin >> arr2[i];

		cout << "\t\t\t\tEnter Name: ";

		cin >> arr1[i];

		cout << "\t\t\t\tEnter FatherName: ";

		cin >> arr3[i];

		cout << "\t\t\t\tEnter Marks: ";
		cin >> arr4[i];
		int temp = arr4[i];
		Grading_System(temp);



	}

	system("CLS");

	cout << "\n\n\t\t\t\t\t****** DEPARTMENT OF SOFTWARE ENGEENRING ******" << endl << endl;


	cout << "\t\t\tSr.No   Roll No   Name    Father Name    Marks  Grades" << endl;

	for (int i = 0; i < ch; i++)

	{

		cout << "\t\t\t" << i << "       " << arr2[i] << "        " << arr1[i] << "       " << arr3[i] << "          " << arr4[i] << "         " << grade[i] << endl;




	}
}






//int main
int main() {
main_label: //label for main menu
	Main_Menu();

	char check;

	int main_menu; //Main Menu Selection
	cout << "\t\t\t\tSelect an option(0-10):";
	cin >> main_menu;
	switch (main_menu) {
	case 0:
		Main_Exit(); //exit code

	case 1:

		Table();
		cout << "\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}

	case 2:
		system("CLS");
		int  n;
		cout << "\n\n\t\t\t\t\t\tEnter a Positive Integer  : ";
		cin >> n;
		cout << "\t\tFactorial of " << n << " = " << Factorial(n) << "\n\n";

		cout << "\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}

	case 3:

		Calculations();
		cout << "\n\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}

	case 4:

		Arithmetic_Operation();
		cout << "\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}


	case 5:
		system("CLS");
		int marks;
		cout << "\n\n\n\n\t\t\t\tEnter Marks :";
		cin >> marks;
		Grading_System(marks);


		cout << "\n\n\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}
	case 6:
		Area_of_Triangle();
		cout << "\n\n\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code
		}
	case 7:
		Series();
		cout << "\n\n\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code
		}

	case 8:
		Maximum_Min();
		cout << "\n\n\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code
		}
	case 9:
		Matric();
		cout << "\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}
	case 10:
		Student_Records();
		cout << "\t\t\tAre you want to run more functions of our system ?\n \t\t\tEnter 'y' for yes and 'n' for No  :  ";
		cin >> check;
		if (check == 'y') {
			goto main_label;
		}
		else if (check == 'n') {
			Main_Exit(); //exit code

		}



	default:

		system("CLS");
		cout << "\n\n\n\n\n\n\n";
		cout << "\t\t\t\t _____________________________________\n";
		cout << "\t\t\t\t|                                     |\n";
		cout << "\t\t\t\t|                                     |\n";
		cout << "\t\t\t\t|         Invalid Choice              |\n";
		cout << "\t\t\t\t|                                     |\n";
		cout << "\t\t\t\t|                                     |\n";
		cout << "\t\t\t\t|_____________________________________|";
		cout << "\n\n\n\n\n";


		goto main_label;

	}

	return 0;
}
