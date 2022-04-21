#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool check(string s) {

	//Initializing en Empty Stack and character chr

	stack<char> c;
	char chr;
	int count{};

	//Iterating

	for (int i = 0; i < s.length(); i++) {

	//Excluding Spaces

		if (s[i] == ' ') {
			continue;
		}

	//Pushing if its Starting Braces into stack

		if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
			c.push(s[i]);
			continue;
		}

	//Returning False if stack is empty
		if (c.empty()) {
			return false;
		}
	
	//Using Switch Case for Closing braces and popping while checking if it corresponds to the starting bracket 

		switch (s[i]) {
		case ')':
			chr = c.top();
			c.pop();
			if (chr == '{' || chr == '[')
				return false;
			break;
		case '}':
			chr = c.top();
			c.pop();
			if (chr == '(' || chr == '[')
				return false;
			break;
		case ']':
			chr = c.top();
			c.pop();
			if (chr == '(' || chr == '{')
				return false;
			break;
		}

	}

	return (c.empty());
}


int main() {

	// Input of Infix and Checking if its Balanced or Not based on Returned BOOL Value

	string s;
	cout << "Enter an Infix Expression to check if its Balanced or Not Balanced " << endl;
	getline(cin, s);

	if (check(s)) {
		cout << "The Given Experssion is Balanced !" << endl;
	}
	else {

		cout << "The Given Expression is Not Balanced :( " << endl;;

	}


	return 0;

}
