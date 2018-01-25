#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
	int studentNum, totalScore = 0;
	int* studentScore;
	int i;


	printf("Input Students number : ");
	scanf("%d", &studentNum);

	studentScore = (int*)malloc(sizeof(int) * studentNum);

	for (i = 0; i < studentNum; i++) {
		printf("%d's Students's score : ", i + 1);
		scanf("%d", &studentScore[i]);
		totalScore += studentScore[i];
	}

	printf("All Students's average is : %d\n", totalScore / studentNum);
	free(studentScore);
	return 0;
}
