//============================================================================
// Name        : Calculator.cpp
// Author      : Ahmed Athireldin
// Version     :
// Copyright   : Your copyright notice
// Description : Basic quad-function calculator, for only 2 operands, training
//				on cleaning code and making it concise.
//============================================================================

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <limits>
#include "menu.h"
using namespace std;

int main() {
	// Welcomes the user and gives the user the choice of operations
	cout
			<< "Hello there! Welcome to my first calculator! Choose a function from below:"
			<< endl;
	menuChoosing();

	//Takes operand inputs
	operandInput();

	// Does the calculation
	Calculation(operand1, operand2);

	// Prints answer
	cout << "Your answer is: " << answer << endl << "Thank you!" << endl;

	//prompts if needs another calculation
	cout << "Do you need to do another calculation? y/n: " << flush;
	char redo;
	cin >> redo;
	switch (redo) {
	case 'y':
		cout << "Here we go!" << endl;
		main();
		break;
	case 'n':
		cout
				<< "Thank you for using my calculator! I hope to see you again soon!"
				<< endl;
		break;
	}

}

void showMenu() {
	cout << "1. Addition of 2 numbers." << endl;
	cout << "2. Subtraction of 2 numbers." << endl;
	cout << "3. Division of 2 numbers." << endl;
	cout << "4. Multiplication of 2 numbers." << endl;
}

int menuChoosing() {
	// Takes correct menu option only and shows menu every time
	do {
		// Take input choice of operation from user until it is valid
		showMenu();
		cout << "Your choice: ";
		cin >> operation;
		if (operation < 1 || operation > 4) {
			cout << "Invalid! Choose again!" << endl;
		}
	} while (operation < 1 || operation > 4);
	return operation;
}

int Add(int operand1, int operand2) {
	//Adds the operands
	answer = operand1 + operand2;
	return answer;
}

int Sub(int operand1, int operand2) {
	//subtracts the operands
	answer = operand1 - operand2;
	return answer;
}

int Divide(int operand1, int operand2) {
	//Divides the operands
	if (operand1 == 0 || operand2 == 0) {
		cout << "Error! Cannot divide by 0!" << endl;
		operandInput();
	} else {
		answer = operand1 / operand2;
	}
	return answer;
}

int Multiply(int operand1, int operand2) {
	//Multiplies the operands
	answer = operand1 * operand2;
	return answer;
}

int Calculation(int operand1, int operand2) {
	//recognizes the operation preference and does the calculations
	switch (operation) {
	case 1:
		Add(operand1, operand2);
		break;
	case 2:
		Sub(operand1, operand2);
		break;
	case 3:
		Divide(operand1, operand2);
		break;
	case 4:
		Multiply(operand1, operand2);
		break;
	}
	return answer;
}

int operandInput() {
	// Inputs first number
	cout << "state operand 1: ";
	cin >> operand1;

	// Inputs second number
	cout << "state operand 2: ";
	cin >> operand2;

	//returns operands
	return operand1;
	return operand2;
}
