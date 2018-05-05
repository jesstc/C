#include <stdio.h> 

int main(){
	int num1;
	int num2;
	int num3;
	
	printf("Please enter first number.\n");
	scanf ("%d",&num1);
	printf("Please enter second number.\n");
	scanf ("%d",&num2);
	printf("Please enter third number.\n");
	scanf ("%d",&num3);
	
	int sum1,sum2,sum3;
	
	sum1 = num1 + num2;
	sum2 = num2 + num3;
	sum3 = num1 + num3;
	
	if (sum1 > num3){
		if (sum2 > num1){
			if (sum3 > num2){
				printf("%d",num1+num2+num3);
			}
			else {
				printf("此三邊不能形成三角形");
			}
		}
		else{
			printf("此三邊不能形成三角形");
		}
	}
	else{
		printf("此三邊不能形成三角形");
	}

	return 0;
}
