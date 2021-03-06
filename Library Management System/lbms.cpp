
// Libraries included in the Program

#include <conio.h>
#include <iostream>
#include <fstream>
#include "string"
using namespace std;

// Structures to store important variables

struct address {

	string cityname, countryname;
	int zipcode;

};

struct dob {

	int day, month, year;

};

struct student {

	string name, email, section;
	int student_id, phoneno, rollno;
	address add;
	dob d;

};

struct issueDetails {

	int issueDay, issueMonth, issueYear, day, month, year;;

};

struct book {

	char title[50];
	string author_name;
	long int publishing_date, total_copies, current_copies, isbn, issued_Copies;
	issueDetails bkd;

};

// Function Defintions 

void menu();
void displayBook(book &b);
void displayStudent(struct student &s);

// Input Functions for Students and Books

void inputStudent(student &s)
{
	cin.ignore();
	cout << "---------- Student Details---------- :" << endl;
	cout << "Name :" << endl;
	getline(cin, s.name);
	cout << "Student's Email :" << endl;
	getline(cin, s.email);
	cout << "Student's Section : " << endl;
	getline(cin, s.section);
	cout << "Student's Roll No :" << endl;
	cin >> s.rollno;
	cin.ignore();
	cout << "Student's ID :" << endl;
	cin >> s.student_id;
	cout << "Student's Phone Number : " << endl;
	cin >> s.phoneno;
	cin.ignore();
	cout << "---------- Student's Address---------- :" << endl;
	cout << "Country Name : " << endl;
	getline(cin, s.add.countryname);
	cout << "City Name : " << endl;
	getline(cin, s.add.cityname);
	cout << "Zip Code : " << endl;
	cin >> s.add.zipcode;
	cin.ignore();
	cout << "---------- Student's Date of Birth ---------- :" << endl;

	cout << "Enter Day :" << endl;
	cin >> s.d.day;
	cout << "Enter Month :" << endl;
	cin >> s.d.month;
	cout << "Enter Year :" << endl;
	cin >> s.d.year;



}

void inputBook(book &b)
{
	cin.ignore();
	cout << "---------Book Details---------:"<<endl;
	cout << "Enter the Book Title : " << endl;
	cin >> b.title;
	cin.ignore();
	cout << "Enter the Book Author Name : " << endl;
	getline(cin, b.author_name);
	cout << "Enter the Book's ISBN : " << endl;
	cin >> b.isbn;
	cin.ignore();
	cout << "Enter the Book Publishing Date :" << endl;
	cin >> b.publishing_date;
	cout << "Enter total Copies of Books : " << endl;
	cin >> b.total_copies;
	cout << "Enter Current Copies in Library :" << endl;
	cin >> b.current_copies;



}

// Book Issuing Function

void issueBook(issueDetails &bkd, student s, book &b, int id, char title[], int isbn) {

	// I compared both books name using strcmp and students ID too to Issue a book. 
	int res = strcmp(b.title, title);
	
	if (id == s.student_id) {
		
		if  (res==0 && isbn == b.isbn){
		cout << "---------Issue Details---------:" << endl;
		cout << "Enter Issue Day :" << endl;
		cin >> b.bkd.issueDay;
		cout << "Enter Issue Month :" << endl;
		cin >> b.bkd.issueMonth;
		cout << "Enter Issue Year :" << endl;
		cin >> b.bkd.issueYear;
		cout << "To be Returned On (Day) : " << endl;
		cin >> b.bkd.day;
		cout << "To be Returned On (Month) : " << endl;
		cin >> b.bkd.month;
		cout << "To be Returned On (Year) : " << endl;
		cin >> b.bkd.year;
		cout << "Amount of Books Currently Library Has : " << endl;
		cin >> b.current_copies;

		}
		else {
			cout << "That Book Doesn't exsist in records ";
		}
	}
	else
	{
		cout << "That student doesn't exsist in records." << endl;

	}


}
// Writing Data into Three different files  1 - student.txt   2 - book.txt   3 - issuebook.txt as required

void dataWrite(student &s){

		ofstream out("student.txt", ios::out | ios::app);
		out.write((char*)&s, sizeof(s));
		out.close();
}

void dataWrite(book &b) {

	ofstream out("book.txt", ios::out | ios::app);
	out.write((char*)&b, sizeof(b));
	out.close();
}

void dataWrite(issueDetails &bkd){

	ofstream out("issuebook.txt", ios::out | ios::app);
	out.write((char*)&bkd, sizeof(bkd));
	out.close();

}

// Displaying Data in those files

void displayStudent(struct student &s) {

			
			ifstream out("student.txt", ios::binary);
			out.read((char*)&s, sizeof(s));
			while (!out.eof())
			{

				cout << "----------------Student Record---------------" << endl;
				cout << "Name : ";
				cout << s.name << endl;
				cout << "Email : ";
				cout << s.email << endl;
				cout << "Phone Number : ";
				cout << s.phoneno << endl;
				cout << "Roll# : ";
				cout << s.rollno << endl;
				cout << "Section : ";
				cout << s.section << endl;
				cout << "Country Name : ";
				cout << s.add.countryname << endl;
				cout << "City Name : ";
				cout << s.add.cityname << endl;
				cout << "Zip Code ";
				cout << s.add.zipcode << endl;
				cout << "Date of Birth : ";
				cout << s.d.day << "/" << s.d.month << "/" << s.d.month << endl;
				out.read((char*)&s, sizeof(s));
			}
			out.close();


}

void showIssued(book b, int isbn, student s, int id, issueDetails bkd) {
	

	ifstream out("issuebook.txt", ios::binary);
	out.read((char*)&bkd, sizeof(bkd));
	while (!out.eof())
	{

		int totalIssued = b.total_copies- b.current_copies;

	if (b.isbn == isbn) {
		cout << "----------------" << b.title<<"----------------------"<<endl;
		cout << "Number of Copies Issued : " << totalIssued<<endl;
		cout << "Number of Total Copies :" << b.total_copies<<endl;
		cout << "Number of Copies Remaining : " << b.current_copies<<endl;
		cout << "Issued Date :" << b.bkd.issueDay <<"/"<<b.bkd.issueMonth<<"/"<<b.bkd.issueYear << endl;
		cout << "Date To Be Returned On : " << b.bkd.day << "/" << b.bkd.month << "/" << b.bkd.year << endl;

		cout << "Student's ID having this book : ";
		cout << id <<endl;
		b.current_copies = b.total_copies - totalIssued;


	}
	else {
		cout << "You have entered an invalid ISBN number !";
	}
	out.read((char*)&bkd, sizeof(bkd));
	}
	out.close();


	
}
void displayBook(struct book &b) {


	ifstream out("book.txt", ios::binary);
	out.read((char*)&b, sizeof(b));
	while (!out.eof())
	{

		cout << "Here is all the books information : " << endl;
		cout << "--------------------------------------" << endl;
		cout << "---------------Book Name :" << b.title << "--------------" << endl;
		cout << "Author Name : ";
		cout << b.author_name << endl;
		cout << "ISBN : ";
		cout << b.isbn << endl;
		cout << "Publishing Date : ";
		cout << b.publishing_date << endl;
		cout << "Total Copies : ";
		cout << b.total_copies << endl;
		cout << "Author : ";
		cout << b.author_name << endl;
		cout << "Current Copies In Library : ";
		cout << b.current_copies << endl;
		cout << "--------------------------------------" << endl;

		out.read((char*)&b, sizeof(b));
	}
	out.close();


}

// Functions Created to Delete the Enteries

void delStudents() {

	student s;
	int roll;
	bool flag = false;
	ifstream out("student.txt", ios::in);
	ofstream temp("temp.txt", ios::out | ios::app);
	out.read((char*)&s, sizeof(s));
	cout << "---------------Welcome To Admin Panel----------------" << endl;
	cout << "Enter Student's Roll No to Delete Data :";
	cin >> roll;
	while (!out.eof()) {
		if (s.rollno == roll)
		{
			flag = true;
		}
		else {
			temp.write((char*)&s, sizeof(s));
		}
		out.read((char*)&s, sizeof(s));
	}
	if (flag == true) {
		cout << "Student's Record Has Been Deleted !"<<endl;
		exit;
	}
	else
	{
		cout << "Record Was Not Found !";
		exit;
	}
	out.close();
	temp.close();
	remove("student.txt");
	rename("temp.txt", "student.txt");
}
void delBooks(){
	book b;
	int isbn;
	bool flag = false;
	ifstream out("book.txt", ios::in);
	ofstream temp("rand.txt", ios::out | ios::app);
	out.read((char*)&b, sizeof(b));
	cout << "---------------Welcome To Admin Panel----------------" << endl;
	cout << "Enter Book's ISBN to Delete :";
	cin >> isbn;
	while (!out.eof()) {
		if (b.isbn == isbn)
		{
			flag = true;
		}
		else {
			temp.write((char*)&b, sizeof(b));
		}
		out.read((char*)&b, sizeof(b));
	}
	if (flag == true) {
		cout << "Book's Record Has Been Deleted !" << endl;
		exit;
	}
	else
	{
		cout << "Book Was Not Found !";
		exit;
	}
	out.close();
	temp.close();
	remove("book.txt");
	rename("rand.txt", "book.txt");
}

// Functions To Update the Enteries

void updateStudents() {

	student s;
	int roll;
	bool flag = false;
	int inc = 0;
	int position = 0;
	int choice;
	fstream out("student.txt", ios::in | ios::out | ios::ate);
	out.seekg(0, ios::beg);
	out.read((char*)&s, sizeof(s));
	cout << "---------------Welcome To Admin Panel----------------" << endl;
	cout << "Enter Student's Roll No : ";
	cin >> roll;
	while (!out.eof()) {
		inc++;
		if (s.rollno == roll)
		{
			cout << "---------- Student Details---------- :" << endl;
			cout << "1- To Update Name" << endl;
			cout << "2- To Update Email" << endl;
			cout << "3- To Update Roll Number" << endl;
			cout << "4- To Update Phone Number" << endl;
			cout << "5- To Update Section" << endl;
			cout << "6- To Update Phone Number" << endl;



			cout << "Select an Option"<<endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Enter New Name : "<<endl;
				cin >> s.name;
				break;
			case 2:
				cout << "Enter New Email :" << endl;
				cin >> s.email;
				break;
			case 3:
				cout << "Enter New Roll Number :" << endl;
				cin >> s.rollno;
				break;
			case 4:
				cout << "Enter New Roll Number :" << endl;
				cin >> s.rollno;
				break;
			case 5:
				cout << "Enter New Roll Number :" << endl;
				cin >> s.rollno;
				break;

			case 6:
				cout << "Enter New Roll Number :" << endl;
				cin >> s.rollno;
				break;

			case 7:
				inputStudent(s);
				break;
			default:
				break;
			}
			position = (inc - 1) * sizeof(s);
			out.seekp(position);

			out.write((char*)&s, sizeof(s));
			flag = true;
			break;
		}

		out.read((char*)&s, sizeof(s));
	}
	if (flag == true) {
		cout << "Your Information Has Been Changed !"<<endl;
	}
	else
	{
		cout << "Record Was Not Found !"<<endl;
	}

}

void updateBooks() {

	book b;
	int isbn;
	bool flag = false;
	int inc = 0;
	int position = 0;
	int choice;
	fstream out("book.txt", ios::in | ios::out | ios::ate);
	out.seekg(0, ios::beg);
	out.read((char*)&b, sizeof(b));
	cout << "---------------Welcome To Admin Panel----------------" << endl;
	cout << "Enter Book's ISBN To Change Details : ";
	cin >> isbn;
	while (!out.eof()) {
		inc++;
		if (b.isbn == isbn)
		{
			cout << "---------- Books Details---------- :" << endl;
			cout << "1- To Update Book's Title " << endl;
			cout << "2- To Update Book's Author " << endl;
			cout << "3- To Update Book's ISBN " << endl;
			cout << "4- To Update Book's Publishing Date " << endl;
			cout << "5- To Update Total Book's Copies " << endl;
			cout << "6- To Update Current Copies Available " << endl;



			cout << "Select an Option" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Enter New Title : " << endl;
				cin >> b.title;
				break;
			case 2:
				cout << "Enter New Author :" << endl;
				cin >> b.author_name;
				break;
			case 3:
				cout << "Enter New ISBN :" << endl;
				cin >> b.isbn;
				break;
			case 4:
				cout << "Enter New Publishing Date :" << endl;
				cin >> b.publishing_date;
				break;
			case 5:
				cout << "Enter New Total Copies :" << endl;
				cin >> b.total_copies;
				break;

			case 6:
				cout << "Enter New Current Copies :" << endl;
				cin >> b.current_copies;
				break;

			case 7:
				inputBook(b);
				break;
			default:
				break;
			}
			position = (inc - 1) * sizeof(b);
			out.seekp(position);

			out.write((char*)&b, sizeof(b));
			flag = true;
			break;
		}

		out.read((char*)&b, sizeof(b));
	}
	if (flag == true) {
		cout << "Your Information Has Been Changed !" << endl;
		exit;
	}
	else
	{
		cout << "Record Was Not Found !" << endl;
		exit;
	}
}

// Start Menu Function

	void menu() {

		int opt;
		int id;

//  Admin Panel Password

		int admin = 12345;
		int attempt;
		int isbn;
		char b_title[50];
		student s;
		book b;
		issueDetails bkd;
		char choice;


		do {

			system("CLS");
			cout << "=======================" << endl;
			cout << "1 - Add Student" << endl;
			cout << "2 - Add Book" << endl;
			cout << "3 - Check Students Record" << endl;
			cout << "4 - Check Book Record" << endl;
			cout << "5 - Issue Book" << endl;
			cout << "6 - Issued Book Details" << endl;
			cout << "7 - Update Records " << endl;
			cout << "8 - Delete Records " << endl;
			cout << "=======================" << endl;

			cout << "Enter Your Option : ";
			cin >> opt;
			switch (opt)
			{
			case 1:
				inputStudent(s);
				dataWrite(s);
				break;
			case 2:
				inputBook(b);
				dataWrite(b);
				break;
			case 3:
				displayStudent(s);
				break;

			case 4:
				displayBook(b);
				break;

			case 5:
				cout << "Enter Student ID to Issue the Book : " << endl;
				cin >> id;
				cin.ignore();
				cout << "Enter Book Title : " << endl;
				cin >> b_title;
				cout << "Enter Books ISBN : " << endl;
				cin >> isbn;
				issueBook(bkd, s, b, id, b_title, isbn);
				dataWrite(bkd);
				break;

			case 6:
				cout << "----------------Issued Books Detail---------------" << endl;
				cout << "Enter Book's ISBN to Search for its Issue Details :";
				cin >> isbn;
				showIssued(b, isbn, s, id, bkd);
				break;
			case 7:
		// Use Password mentioned above to enter Admin Panel

				cout << "Enter Admin Password to Update Data : " << endl;
				cin >> attempt;
				if (attempt == admin) {
					cout << "----------------Success---------------" << endl;
					cout << "1- To Update Student's Details "<<endl;
					cout << "2- To Update Book's Details " << endl;
					int option;
					cin >> option;
					switch (option)
					{
					case 1: updateStudents();
						break;
					case 2: updateBooks();
						break;
					default:
						break;
					}
				}
				else {
					cout << "Invalid Details !" << endl;
				}
				break;
			case 8:
				cout << "Enter Admin Password to Delete Student's Data : " << endl;
				cin >> attempt;
				if (attempt == admin) {
					cout << "----------------Success---------------" << endl;
					cout << "1- To Delete Student's Details " << endl;
					cout << "2- To Delete Book's Details " << endl;
					int option;
					cin >> option;
					switch (option)
					{
					case 1: delStudents();
						break;
					case 2: delBooks();
						break;
					default:
						break;
					}
				}
				else {
					cout << "Invalid Details !" << endl;
				}
				break;
			   default:
				break;
			}
	
		cout << "Do you want to perform another task (y/n) ";
		cin >> choice;
	} while (choice == 'y');


}

// Main Function 


int main() {
	menu();
	_getch();
	return 0;

}
