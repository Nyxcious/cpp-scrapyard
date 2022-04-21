#include<iostream>
#include<string>
using namespace std;


int main() {

	// Inputing the Infix Expression 

	cout << "Enter an Infix Expression to Dispaly Number of its Braces : " << endl;
	string s;
	getline(cin, s);
	int i{}, count{};

	while (i < s.length()) {

	//Spaces Excluded

		if (s[i] == ' ') {
			i++;
			continue;
		}

	//If Braces are encountred while iteration count is increased

		if (s[i] == '[' || s[i] == '(' || s[i] == '{' || s[i] == ')' || s[i] == ']' || s[i] == '}') {

			count++;
			i++;
			continue;

		}

		i++;

	}
	if (count) {

		//Dislaying Braces as Pairs so count / 2 && If its an Odd Number Invalid Number of Braces will be shown
		//No Braces found if count is NULL

		if (count % 2 == 0) {
			cout << "Expression has " << count / 2 << " pair of Braces in it ";
		}
		else {
			cout << "Expression has Invalid Numbers of Braces in it : " << count << endl;
		}
	}
	else {
		cout << "No Braces found in this infix Expression :( ! " << endl;
	}


	return 0;
}
