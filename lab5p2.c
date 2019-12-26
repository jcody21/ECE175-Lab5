#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Author: John Cody
// Date Created: 02/21/2018
// Program Details: This program takes user input, and then swaps the values. 

void swap (float *p_a, float *p_b);

int main(void) {

	float a = 0.0, b = 0.0;

	printf("Input: Enter a and b : ");
	scanf(" %f %f", &a, &b);
	
	swap(&a, &b);

	printf("Output : a = %.2f, b = %.2f\n", a, b);

	return 0;
}

void swap(float *p_a, float *p_b) {
	
	float transfer;

	transfer = *p_a;
	*p_a = *p_b;
	*p_b = transfer;

	return;
}