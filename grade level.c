#include<stdio.h>

int main() {
	int score=0, num=0;

	do{
		printf("%s\n", "Please enter the scores: ");
		scanf("%d", &score);

		if(score != -1){
			if(score>=80 && score<=100) {
				printf("%s\n", "Your grade is A\n");
			}else if(score>=70 && score<80) {
				printf("%s\n", "Your grade is B\n");
			}
			else if(score>=60 && score<70) {
				printf("%s\n", "Your grade is C\n");
			}
			else {
				printf("%s\n", "Your grade is F\n");
			}

			num++;
		}
	}while(score != -1);

	printf("%s%d\n", "The total number of grades is: ", num);

	return 0;
}
