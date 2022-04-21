#include<iostream>
#include<string>
#include<stack>
using namespace std;


// Returning True or False on whether passed char is Operand or Not 

bool isOperand(char ch) {
	if (ch >= '0' && ch <= '9')
		return true;
	if (ch >= 'a' && ch <= 'z')
		return true;
	if (ch >= 'A' && ch <= 'Z')
		return true;

	return false;
}

// Returning the Precedence (weight) of operator (ch)

int getPrecedence(char ch) {

	int weight = -1;
	switch (ch)
	{
	case '+':
	case '-':
		weight = 1;
	case'*':
	case'/':
		weight = 2;
	case'^':
		weight = 3;

	}
	return weight;

}


// Checking if char is Operator or Not

bool isOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Function to Convert Infix to Postfix taking String exp as parameter

string expToPost(string exp) {

// Empty Stack Started

	stack<char> c;

// Starting Postfix string to empty

	string postfix = "";

//Loop to iterate through the expression

	for (int i = 0; i < exp.length(); i++) {

//Excluding Spaces

		if (exp[i] == ' ' || exp[i] == ',')
			continue;
//Checking if Operand then adding it to postfix expression directly

		if (isOperand(exp[i]))
		{
			postfix += exp[i];
		}
// If its bracket pushing it into stack and popping when closing bracket is encountered

		else if (exp[i] == '(')
		{
			c.push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			while ((c.top() != '(') && (!c.empty()))
			{
				char temp = c.top();
				postfix += temp;
				c.pop();
			}
			if (c.top() == '(')
			{
				c.pop();
			}
		}

// If string 'char' is operator pushing if stack is empty

		else if (isOperator(exp[i]))
		{
			if (c.empty())
			{
				c.push(exp[i]);
			}
			else
			{
//Checking if one operator has higher precedence pushing it to stack else popping the top 

				if (getPrecedence(exp[i]) > getPrecedence(c.top()))
				{
					c.push(exp[i]);
				}
				else if ((getPrecedence(exp[i]) == getPrecedence(c.top())) && (exp[i] == '^'))
				{
					c.push(exp[i]);
				}
				else
				{
					while ((!c.empty()) && (getPrecedence(exp[i]) <= getPrecedence(c.top())))
					{
						postfix += c.top();
						c.pop();
					}
					c.push(exp[i]);
				}
			}
		}
	}
//While Stack is not empty adding top to the postfix and Returning postfix to the Main Function 

	while (!c.empty())
	{
		postfix += c.top();
		c.pop();
	}

	return postfix;
}

int main() {

	// Input of Infix and Returning Postfix

	string exp, postfix;


	cout << "Enter an exp Expression to convert it into Postfix Expression :  " << endl;
	getline(cin, exp);
	cout << "Expression Before Conversion to Postfix : " << endl;
	cout << exp << endl;
	postfix = expToPost(exp);
	cout << "After Conversion the Posfix Expression is : " << postfix << endl;


	return 0;

}
