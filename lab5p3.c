#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Author: John Cody
// Date Created: 02/21/2018
// Program Details: This program takes a dataset of grades and outputs the min, max and average of those grades.

void grades(FILE *inp, int *p_min, int *p_max, float *p_ave);

int main(void) {
	
	int min, max;
	float average = 0;

	FILE* gradef;

	gradef = fopen("grades.txt", "r");

	if (gradef == NULL) {
		printf("The grades file could not be opened.\n");
		return -1;
	}

	grades(gradef, &min, &max, &average);
	printf("Output: Min: %d, Max : %d, Ave : %.2f\n", min, max, average);

	fclose(gradef);

	return 0;
}

void grades(FILE *inp, int *p_min, int *p_max, float *p_ave) {

	int transfer = 0, counter = 0, max = 0, min = 100, sum = 0;
	
	while (feof(inp) < 1) {
		fscanf(inp, " %d", &transfer);
		if (transfer < min) {
			min = transfer;
		}
		if (transfer > max) {
			max = transfer;
		}
		sum += transfer;
		counter++;
	}

	*p_min = min;
	*p_max = max;
	*p_ave = (sum*1.0) / (counter*1.0);

	return;
}