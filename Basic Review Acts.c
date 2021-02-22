#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

int main() {


	/*
	Write a program ask the user two integers then add, multiple, divide and subtract them
	Expected Output 1:
	Input any 2 integer: 16 4
	ADD = 20
	MUL = 64
	DIV = 4
	SUB =  12
---------------------------------------------------------
	Expected Output 2:
	Input any 2 integer: 15 10
	ADD = 25
	MUL = 150
	DIV = 1.5
	SUB =  5
	*/



	int num1, num2, resultAdd, resultSub, resultMult;
	float resultDiv;

	printf("Please enter a number \n");
	scanf_s(" %d", &num1);
	printf("Entered Number is %d \n \n", num1);
	printf("Please enter another number \n");
	scanf_s(" %d", &num2);
	printf("Entered Number is %d \n \n", num2);	

	resultAdd = num1 + num2;
	resultMult = num1 * num2;
	resultDiv = (float)num1 / num2;
	resultSub = num1 - num2;

	printf("Result: Addition %d \n", resultAdd);
	printf("Result: Multiplication %d \n", resultMult);
	printf("Result: Division %.1f \n", resultDiv);
	printf("Result: Subtraction %d \n", resultSub);
};
