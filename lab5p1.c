#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Author: John Cody
// Date Created: 02/21/2018
// Program Details: This program uses pointers to output values without using the variables that were initially used. 

int main(void) {
	
	double x = 1.0;
	int y = 2;
	float z = 3.0;

	double* p_x;
	int* p_y;
	float* p_z;

	p_x = &x;
	p_y = &y;
	p_z = &z;

	printf("x = %.1lf\n", *p_x);
	printf("y = %d\n", *p_y);
	printf("z = %.1f\n", *p_z);
	printf("sum = %.1lf\n", *p_x + *p_y + *p_z);

	return 0;
}