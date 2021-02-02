/*
 * menu.h
 *
 *  Created on: Jan 29, 2021
 *      Author: Ahmad
 */

#ifndef MENU_H_
#define MENU_H_

void showMenu();
int operation;
int answer;
int menuChoosing();
int operandInput();
int operand1;
int operand2;
int Calculation(int operand1, int operand2);
int Add(int operand1, int operand2);
int Sub(int operand1, int operand2);
int Multiply(int operand1, int operand2);
int Divide(int operand1, int operand2);



#endif /* MENU_H_ */
