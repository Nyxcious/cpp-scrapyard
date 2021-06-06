
#include <iostream>
#include <vector>

using namespace std;

int main()

{
	//double srooms, lrooms, cost, total, ran; 
	/*const double tax = {0.06};
	const int psmall = { 25 };
	const int plarge = { 35 };
	cout << "How many small rooms you want to clean? " << endl;
	cin >> srooms;
	cout << "How many large rooms you want to clean? " << endl;
	cin >> lrooms;

	cout << " Estimate for Carpet Cleaning Service : " << endl;

	cout << "Number of small rooms : " << srooms << endl;
	cout << "Number of large rooms : " << lrooms << endl;
	cout << "Price per small room : $" << psmall<<endl;
	cout << "Price per large room : $" << plarge<<endl;
	cost = (lrooms*plarge) + (srooms*psmall);
	cout << "Cost : $" << cost << endl;
	cout << "Tax : $"<< cost * tax<<endl;
	ran = cost * tax;
	total = cost + ran;
	cout << "================================"<<endl;
	cout << "Total Estimate : $" << total<<endl;
	cout << "This estimate is valid for 30 days only ";*/

	/*char vowels[] = { 'A', 'E','I', 'O','U' };
	cout << "The first vowel is : " << vowels[0] << endl;
	cout << "The last vowel is : " << vowels[4] << endl;*/

	/*vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << 0 << " " <<vector1.at(0)<<endl;
	cout << 1 << " " <<vector1.at(1)<<endl;
	cout << size(vector1) << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << 0 << " " << vector2.at(0) << endl;
	cout << 1 << " " <<vector2.at(1) << endl;
	cout << size(vector2) << endl;

	vector < vector < int>> _2d
	{


	};

	_2d.push_back(vector1);
	_2d.push_back(vector2);

	cout <<1 <<1 << " " << _2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;
	cout << 0 << 0<<" " <<_2d.at(0).at(0) << endl;
	cout << 0 <<1 << " " <<_2d.at(0).at(1) << endl;
	cout << 1 <<0 << " " <<_2d.at(1).at(0) << endl;
	cout << 1 << 1 << " " <<_2d.at(1).at(1) << endl;

	cout << 0 << " " << vector1.at(0) << endl;
	cout << 1 << " " << vector1.at(1)<<endl;*/


	//int  value{};

	//cout << "Enter the amount in cents : " << endl;
	//cin >> value;
	//const int dollar{ 100 };
	//const int quarter{ 25 };
	//const int dime = { 10 };
	//const int nickel = { 5 };
	//const int penny = { 1 };

	//int balance{}, dol{}, qua{}, dim{}, nic{}, pen{};

	//dol = value / dollar;
	//balance = value - (dol * dollar);
	//
	//qua = balance / quarter;
	//balance -= qua * quarter; 

	//dim = balance / dime;
	//balance -= dim * dime;

	//nic = balance / nickel;
	//balance -= nic * nickel;

	//pen = balance;
	//
	//cout << "You can provide the change as follows : " << endl;
	//cout << "Dollars : " << dol << endl << "Quarters : " << qua << endl << "Dimes : " << dim << endl << "Nickels : " << nic << endl << "Pennies : " << pen << endl;

	//Range based for loop

	/*vector <int> nums{ 10,20,30,40,50 };
	// you can use auto instead of int too to deduce the type itself
	for (auto numbers : nums) {
		cout << numbers << endl;
	}*/


	//Input Validation 

	//int number, i{};
	//bool isEven = { false };
	//
	//
	//while (!isEven) {
	//	cout << "Enter a number to check if its even : " << endl;
	//	cin >> number;
	//	if (number % 2 == 0) {
	//		isEven = true;
	//	}
	//	else {
	//		cout << "Invalid Input, Try Again" << endl;
	//	}
	//}
	//
	//cout << "Thankyou for testing out this program :) btw "<< number<< " is Even :)" << endl;
	//

	 // Nested loops
	//
	//for (int num1{ 1 }; num1 <= 10; num1++) {
	//	for (int num2{ 1 }; num2 <= 10; num2++) {
	//		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	//	}
	//	cout << "=================== " << endl;
	//}

	//int grid[5][3] {};
	//
	//for (int rows{ 0 }; rows <5; rows++) {
	//	for (int cols{ 0 }; cols <3; cols++) {
	//		grid[rows][cols] = 1000;
	//	}
	//
	//}
	//
	//for (int rows{ 0 }; rows <5; rows++) {
	//	for (int cols{ 0 }; cols < 3; cols++) {
	//		cout << grid[rows][cols] << " ";
	//	}
	//	cout <<endl;
	//}

	// Nested loop histogram using vectors (dynmaic data) using Range Based loop type c++ 2011


	//int num_items{ };
	//cout << "How many items do you have?"<<endl;
	//cin >> num_items;
	//
	//vector <int> data{};
	//
	//for (int i{ 1 }; i <= num_items; i++) {
	//	int data_item{};
	//	cout << "Enter data item " << i << ": ";
	//	cin >> data_item;
	//	data.push_back(data_item);
	//}
	//cout << "\n Displaying Histogram " << endl;
	//for (auto val : data) {
	//	for (int i{ 1 }; i <= val; ++i) {
	//		if (i % 5 == 0) {
	//			cout << "*"; // Every fifth number is asteric
	//		}
	//		else {
	//			cout << "-";
	//		}
	//		cout << "-";
	//	}
	//	cout << endl;
	//}
	//
	//cout << endl;

	/*char selection{};
	vector <int> series{};
	do {
		system("CLS");
		char option{};
		cout << "A - Add a Number " << endl;
		cout << "P - Print Numbers " << endl;
		cout << "M - Display Avergare of the Numbers " << endl;
		cout << "S - Diplay the Smallest Number " << endl;
		cout << "L - Display the Largest Number " << endl;
		cout << "N-  Number Search " << endl;
		cout << "C-  Clear the List " << endl;
		cout << "Q - Quit " << endl;
		cin >> option;

		int numbers{};
		int num{};
			if (option == 'A' || option == 'a') {
				cout << "How many numbers you want to add ?" << endl;
				cin >> numbers;
				for (int i{ 1 }; i <= numbers; i++) {
					cout << "Enter the "<< i <<" Number : " << endl;
					cin >> num;
					series.push_back(num);
					cout << "The number : " << num << " was added to the list "<<endl;
				}
				
			}
		
			else if (option == 'P' || option == 'p') {
				if (series.size() == 0) {
					cout << "[] - The list is empty, Please Input Some Values !" << endl;
				}
				else {
					cout << "Here are the numbers in the list : " << endl;
					cout << "[";
					for (int i{ 0 }; i < series.size(); i++) {
						cout<< series.at(i) ;
					}
					cout << "]";
				}
			}

			else if (option == 'M' || option == 'm') {
				if (series.size() == 0) {
					cout << "[] - The list is empty, Please Input Some Values !"<<endl;
				}else{
					double running_average{ 0 };
					double avg{ 0 };
					cout << "Here is the Average of the numbers : " << endl;
					for (double i{ 0 }; i < series.size(); i++) {
						running_average += series.at(i);
					}

					avg = running_average / series.size();
					cout << avg << endl;
				}
			}

			else if (option == 'S' || option == 's') {
				if (series.size() == 0) {
					cout << "[] - The list is empty, Please Input Some Values !" << endl;
				}
				else {
					int min = series.at(0);
					for (int i{ 0 }; i < series.size(); i++) {
						if (series.at(i) < min)
							min = series.at(i);
					}

					cout << "The Minimun Number in The Series is : " << min << endl;
				}
			}

			else if (option == 'L' || option == 'l') {
				if (series.size() == 0) {
					cout << "[] - The list is empty, Please Input Some Values !" << endl;
				}
				else {
					int max = series.at(0);
					for (int i{ 0 }; i < series.size(); i++) {
						if (series.at(i) > max)
							max = series.at(i);
					}

					cout << "The Maximum Number in The Series is : " << max << endl;

				}
			}

			else if (option == 'C' || option == 'c') {
				if (series.size() == 0) {
					cout << "[] - The list is already Empty" << endl;
				}
				else {
					series.clear();
					cout << "Series have been cleard !" << endl;
				}

			}

			else if (option == 'N' || option == 'n') {
				if (series.size() == 0) {
					cout << "[] - The list is Empty, Input Some Values !" << endl;
				}
				else {
					int number{};
					int time{0};
					cout << "Enter the number you want to search in the List : " << endl;
					cin >> number;
				
					for (int i{ 0 }; i < series.size(); i++) {
						if (series.at(i) == number) {
							time++;
						}

					}
					if (time == 0) {
						cout << "The Number was not found in the series !" << endl;
					}
					else {
						cout << "The number " << number << " has occured " << time << " times in the series " << endl;
					}
				}

			}

			else if (option == 'Q' || option == 'q') {
				system("CLS");
				cout << "Goodbye - Program Terminated !";
				break;

			}

			else {
				cout << "Invalid Input, Please Try Again !" << endl;
			}
			cout << "Do you want to Go Again : (Y/N)?";
		cin >> selection;
	} while (selection == 'y' || selection =='Y');


// Cipher Message Program
//string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
//string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
//
//string message{};
//
//cout << "Enter the messge :" << endl;
//getline(cin, message);
//
//cout << "Encrpyting the Message :" << endl;
//
//string encrypted_message{};
//
//for (char c : message) {
//
//	size_t positon = alphabet.find(c);
//	if (positon != string::npos) {
//		char new_char{key.at(positon)};
//		encrypted_message += new_char;
//		
//	}
//	else {
//		encrypted_message += c;
//	}
//	
//}
//cout << encrypted_message << endl;
//cout << "Decrypting the Message : " << endl;
//
//string decrypted_message{};
//
//for (char a : encrypted_message) {
//
//	size_t pos = key.find(a);
//	if (pos != string::npos) {
//		char dec_char{ alphabet.at(pos) };
//		decrypted_message += dec_char;
//		
//
//	}
//	else {
//	
//		decrypted_message += a;
//
//	}
//
//}
//
//cout << decrypted_message << endl;
//
//
//
//return 0;
}
