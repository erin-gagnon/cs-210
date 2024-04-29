/*
 * Calculator.cpp
 *
 *  Date: March 24, 2024
 *  Author: Erin Gagnon
 */

#include <iostream>

using namespace std;

int main() //changes void main to int main
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y' /*changed to single quotes*/;
	while (answer == 'y' || answer == 'Y') //added uppercase inclusion in OR statement
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2; //changed order of op1 and op2
		if (operation == '+') //removed semicolon, changed to "+" to single quote
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //changed chevron direction
		if (operation == '-') //removed semicolon
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //changed chevron direction
		if (operation == '*')
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl; //added semicolon
		if (operation == '/')
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

		cout << "Do you wish to evaluate another expression?(Y or N) " << endl; //added y or n for clarity
		cin >> answer;

		while (true)
		{

			if (answer != 'Y' && answer != 'y');  /*added language to terminate*/
			cout << "Program Finished" << endl;
			break;

		}
	

		return 0;
	}
}
