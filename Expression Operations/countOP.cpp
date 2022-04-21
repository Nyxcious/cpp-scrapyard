#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//Declaring String and getting Input of Infix Expression

	string s;
	cout << "Enter the Infix Expression to Display Number of Its Operands and Operators : " << endl;
	getline(cin, s);
	int i{}, count{};

	//Loop Used to Iterate through the String

	while (i < s.length()) {
//Spaces Excluded
		if (s[i] == ' ') {
			i++;
			continue;
		}
		else {
			count++;
			i++;
		}
	}

	//Increasing count value If Its Operator or Operand and Displaying

	if (count) {
		cout << "The Number of Operands and Operators in this Infix Expression are : " << count << endl;
	}
	else {
		cout << "Invalid Expression ! :(" << endl;
	}


	return 0;
}
