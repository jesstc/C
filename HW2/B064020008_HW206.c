#include <stdio.h>

// function to list all answer
int listSumOfConNum(int sum){
	int logic=0;      // 判斷是否有答案 
	int i;
	for(i=1; i<sum; i++){
		int x_now = i;    // 起始值(x) 
		int sum_now = 0;  // 將sum歸零 
		
		int j;
		for(j=x_now; j<sum; j++){
			sum_now += j;
			
			if(sum_now > sum) break;
			else if(sum_now == sum){
				// print the answer
				printf("Sum of %d to %d is %d.\n", x_now, j, sum_now);
				logic = 1;
				break;
			}
		} 
	}
	
	return logic;
}

int main(){
	int sum=0;
	
	// enter the number
	printf("Please enter a integer: ");
	scanf("%d", &sum);
	
	if(listSumOfConNum(sum) != 1) puts("Not found!");
	
	return 0;	
}


