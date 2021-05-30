
#include<iostream>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;


//void sizeofchars() {

//Finding size of main C++ data types: 

//	cout << "------------------------------------------\n";
//	cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n";
//	cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n";
//	cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n";
//	cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n";
//	cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
//	cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n";
//	cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
//	cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
//	cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
//}

//void upperandlower() {

//	cout << "\n\n Check the upper and lower limits of integer :\n";
// #include <climits>   // integer limits in header file
//	cout << "--------------------------------------------------\n";
//	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
//	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
//	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
//	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
//	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
//	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
//	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
//	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
//	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
//	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
//	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
//	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
//	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
//	cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
//	cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
//	cout << endl;
//};

//void formatting() {

//#include <iomanip>    // Needed to do formatted I/O

//	cout << "\n\n Formatting the output :\n";
//	cout << "----------------------------\n";
//
//	double pi = 3.14159265; // this is floating point number
//	cout << fixed << setprecision(4); // number is set to display with 4 decimal places
//	cout << " The value of pi : " << pi << endl;
//	cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // setw() sets the total width
//	cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|" << endl;
//
//	cout << setfill('-'); // setfill() sets to fill the blanks with specified character
//	cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl;
//	cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|" << endl;
//
//	cout << scientific;  // set value in scientific format with exponent
//	cout << " The value of pi in scientific format is : " << pi << endl;
//
//	bool done = false; // this is boolean variable
//	cout << " Status in number : " << done << endl;
//	cout << boolalpha;     // set output in alphabet true or false
//	cout << " Status in alphabet : " << done << endl;
//	cout << endl;
//}

//void intswap(){

		// Swapping these two numbers 
	
	/*int num27 = 592;
	int num33 = 633;
	int temp = num27;
	num27 = num33;
	num33 = temp;
	cout << num27 << endl;
	cout << num33 << endl;*/



//}

//void timeprint() {

	//#include <ctime>

	/*time_t t = time(NULL);
	tm* tPtr = localtime(&t);
	cout << "\n\n Display the Current Date and Time :\n";
	cout << "----------------------------------------\n";
	cout << " seconds = " << (tPtr->tm_sec) << endl;
	cout << " minutes = " << (tPtr->tm_min) << endl;
	cout << " hours = " << (tPtr->tm_hour) << endl;
	cout << " day of month = " << (tPtr->tm_mday) << endl;
	cout << " month of year = " << (tPtr->tm_mon) + 1 << endl;
	cout << " year = " << (tPtr->tm_year) + 1900 << endl;
	cout << " weekday = " << (tPtr->tm_wday) << endl;
	cout << " day of year = " << (tPtr->tm_yday) << endl;
	cout << " daylight savings = " << (tPtr->tm_isdst) << endl;
	cout << endl;
	cout << endl;


	cout << " Current Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
	cout << " Current Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
	cout << endl;*/
//}

//void series() {
//
//	cout << "\n\n Print a mystery series:\n";
//	cout << "-------------------------\n";
//	cout << " The series are: \n";
//	int nm1 = 1;
//	while (true)
//	{
//		++nm1;
//		if ((nm1 % 3) == 0)
//			continue;
//		if (nm1 == 50)
//			break;
//		if ((nm1 % 2) == 0)
//		{
//			nm1 += 3;
//		}
//		else
//		{
//			nm1 -= 3;
//		}
//		cout << nm1 << " ";
//	}
//	cout << endl;
//	}

//void swapagain() {

	//cout << "\n\n Swap two numbers without using third variable:\n";
	//cout << "---------------------------------------------------\n";
	//int a = 1;
	//int b = 2;
	//a = a + b;   // 3
	//b = a - b;	// 1
	//a = a - b;	// 2

	//cout << " After swapping the 1st number is : " << a << "\n";
	//cout << " After swapping the 2nd number is : " << b << "\n\n";
//}

//void stringman() {
//
//	// include <string>
//
//	cout << "\n\n Show the manipulation of a string:\n";
//	cout << " -------------------------------------\n";
//	string txt = "welcome, w3resource";
//	cout << " The length of the string:: " << txt.length() << endl;
//	cout << " The char at index 1 of the string:: " << txt.at(1) << endl;
//	cout << " The char at index 1 of the string [using array ]:: " << txt[1] << endl;
//	cout << " Is the string empty:: " << txt.empty() << endl;
//	cout << " Retrieve the sub-string from 3rd position for 4 characters:: " << txt.substr(3, 4) << endl;
//	cout << " The sub-string replace by 'went':: " << txt.replace(3, 4, "went") << endl;
//	cout << " Append a string ' end' at last of the string:: " << txt.append(" end") << endl;
//	cout << " Append a string ' end' at last of the string using operator:: " << txt + " end" << endl;
//	cout << " The string ' insert ' inserting at 3rd position of the string:: " << txt.insert(3, " insert ") << endl;
//
//	string txt1;
//	txt1 = txt;
//	cout << " The new string is:: " << txt1 << endl;
//
//	cout << " Input a sentence:: ";
//	getline(cin, txt);
//	cout << txt << endl << endl;
//}


int main() {

	//Finding size of main C++ data types: 
	//sizeofchars();

	//Finding Upper and Lower Limits of Datatypes
	//upperandlower();

	//Output formatting with setw and bool
	//formatting();

	//Swapping Two Numbers
	/*intswap();*/

	// Printing Current Local Time 
	//timeprint();
	
	// Printing Mystery Series from 1 to 50
	/*series();*/

	//Swapping two variables not using temp
	/*swapagain();*/

	//String Manipulations
	//stringman();

	//Replacing words in a string 


	_getch();
	return 0;

};
