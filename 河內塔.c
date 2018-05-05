#include <stdio.h>

int hanoi(int n, char A, char B, char C);

int main (){
	int n;
	printf("enter the hight of hanoi:");
	scanf("%d",&n);
	
	hanoi(n,'1','2','3');
	return 0;
}

int hanoi(int n, char A, char B, char C){
	if(n > 0){
		hanoi(n-1, A, C, B);
		printf("%c -> %c\n", A,C);
		hanoi(n-1, B, A, C);
	}
}
