#include <iostream>
#include <string>
#include <stack>
using namespace std;

//Function to Return the result(int) that takes string as parameter

int postfixEvaluation(string postfix)
{

//Empty Stack

    stack<int> s;

//Range Based For Loop through postfix expression

    for (char ch : postfix)
    {
//Checking if the Character is Integer or Not, If yes Pushing it into stack

        if (ch >= '0' && ch <= '9') {
            s.push(ch - '0');
        }
//Otherwise Int a takes top value and stack pops then b takes top value and stack pops
        else {

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

// If its Operator we push result of b and a into stack

            if (ch == '+') {
                s.push(b + a);
            }
            else if (ch == '-') {
                s.push(b - a);
            }
            else if (ch == '*') {
                s.push(b * a);
            }
            else if (ch == '/') {
                s.push(b / a);
            }
        }
    }

// At end when only result remains we return that result to Main Function

    return s.top();
}

int main()
{
 // Getting Postfix Expression from User

    string exp, postfix = "", value;
    cout << "Enter the Postfix Expression and Its Operands Values to Return its Result: " << endl;
    getline(cin, exp);

 //Loop to iterate through expression

    for (int i = 0; i < exp.length(); i++) {

// Excluding Spaces

        if (exp[i] == ' ')
            continue;
        else {
// If User wants to add int values adding those ints to the Postfix expression

            if (exp[i] >= '0' && exp[i] <= '9') {
                postfix += exp[i];
            }
//Else if user wants to add the expression itself adding the expression first
//Detecting the Operands in Expression

            else if (exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z') {

//Each time it encounters a Operand it takes value of that operand from User

                cout << "Enter the Value of " << exp[i] << ":" << endl;
                int count{};
                getline(cin, value);

//Detecting if its int or not using Range Based for loop 
 //Invalid Input if its not Int and Increasing Count for later

                for (char const& c : value) {
                    if (isdigit(c) == 0) {
                        cout << "Invalid Input" << endl;
                        count++;
                    }

                }
// Now if count has Null value we add value to postfix else User Tries Again with correct values

                if (!count) {
                    postfix += value;
                }

                else {

                    cout << "Try Again with Correct Values :( !" << endl;
                    exit(0);
                }
//Detecting if we encounter a operator and adding it to expression
            }

            if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^') {

                postfix += exp[i];

            }
        }
    }
//Collectively that added expression is passed into Evaulation Function which returns its Result

    cout << "The Result of Your Postfix Expression " << postfix << " is : " << postfixEvaluation(postfix);

    return 0;

}
