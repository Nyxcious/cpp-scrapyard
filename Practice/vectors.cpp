#include<conio.h>
#include <iostream>
#include <vector>
using namespace std;

char toUpper( char option){

	toupper(option);
	return option;
}

vector <int> addNum(vector <int> series, int numbers) {

	int num{};

	for (int i{ 1 }; i <= numbers; i++) {
		cout << "Enter the " << i << " Number : " << endl;
		cin >> num;
		series.push_back(num);
		cout << "The number : " << num << " was added to the list " << endl;
	}

	return series;


}

void printNum(vector <int> series) {
	cout << "Here are the numbers in the list : " << endl;
	cout << "[";
	for (int i{ 0 }; i < series.size(); i++) {
		cout << series.at(i);
	}
	cout << "]";
}

void avgNum(vector <int> series) {

	double running_average{ 0 };
	double avg{ 0 };
	cout << "Here is the Average of the numbers : " << endl;
	for (double i{ 0 }; i < series.size(); i++) {
		running_average += series.at(i);
	}
	avg = running_average / series.size();
	cout << avg << endl;

}

void numMin(vector <int> series) {

	int min = series.at(0);
	for (int i{ 0 }; i < series.size(); i++) {
		if (series.at(i) < min)
			min = series.at(i);
	}
	cout << "The Minimun Number in The Series is : " << min << endl;
}

void maxNum(vector <int> series) {
	int max = series.at(0);
	for (int i{ 0 }; i < series.size(); i++) {
		if (series.at(i) > max)
			max = series.at(i);
	}
	cout << "The Maximum Number in The Series is : " << max << endl;
}

void numClear(vector <int> series) {
	series.clear();
	cout << "Series have been cleard !" << endl;
}

void numSearch(vector <int> series) {

	int number{};
	int time{ 0 };
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

bool endNum(bool isEnd) {
	system("CLS");
	cout << "Goodbye - Program Terminated !";
	return isEnd = { true };
	exit;
}
 

 void menu() {

	 char selection{};
	 vector <int> series{};
	 do {
		 system("CLS");
		 char select{};
		 cout << "A - Add a Number " << endl;
		 cout << "P - Print Numbers " << endl;
		 cout << "M - Display Avergare of the Numbers " << endl;
		 cout << "S - Diplay the Smallest Number " << endl;
		 cout << "L - Display the Largest Number " << endl;
		 cout << "N-  Number Search " << endl;
		 cout << "C-  Clear the List " << endl;
		 cout << "Q - Quit " << endl;
		 cin >> select;
		 char option = toupper(select);
		 int numbers{};
		 if (option == 'A') {
			 cout << "How many numbers you want to add ?" << endl;
			 cin >> numbers;
			 series = addNum(series, numbers);

		 }

		 else if (option == 'P') {
			 if (series.size() == 0) {
				 cout << "[] - The list is empty, Please Input Some Values !" << endl;
			 }
			 else {
				 printNum(series);
			 }
		 }
		 else if (option == 'M') {
			 if (series.size() == 0) {
				 cout << "[] - The list is empty, Please Input Some Values !" << endl;
			 }
			 else {
				 avgNum(series);
			 }
		 }
		 else if (option == 'S') {
			 if (series.size() == 0) {
				 cout << "[] - The list is empty, Please Input Some Values !" << endl;
			 }
			 else {

				 numMin(series);
			 }
		 }
		 else if (option == 'L') {
			 if (series.size() == 0) {
				 cout << "[] - The list is empty, Please Input Some Values !" << endl;
			 }
			 else {
				 maxNum(series);
			 }
		 }
		 else if (option == 'C') {
			 if (series.size() == 0) {
				 cout << "[] - The list is already Empty" << endl;
			 }
			 else {
				 numClear(series);
			 }
		 }
		 else if (option == 'N') {
			 if (series.size() == 0) {
				 cout << "[] - The list is Empty, Input Some Values !" << endl;
			 }
			 else {
				 numSearch(series);

			 }
		 }
		 else if (option == 'Q') {
			 bool isEND{false};
			 bool end = endNum(isEND);
			 if (end) {
				 break;
			 }
		 }
		 else {
			 cout << "Invalid Input, Please Try Again !" << endl;
		 }

		 cout << "Do you want to Go Again : (Y/N)?";
		 cin >> selection;
	 } while (selection == 'y' || selection == 'Y');


}



int main() {


	menu();


	return 0;
}
