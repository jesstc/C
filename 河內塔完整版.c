#include <stdio.h>

void hanoi(int n, int s, int m, int d);
int time = 0;  //�p�⦳�X�ӨB�J 

int main (){
	int n;
	printf("Please enter the number of disks you have:");
	scanf("%d",&n);
	//��Jhanoi���Ӽ� 
	
	hanoi(n,1,2,3);
	printf("The total number of movements is %d\n", time);  //��ܻݭn�X�ӨB�J 
	
	return 0;
}

void hanoi(int n, int s, int m, int d){
	if(n > 0){
		hanoi(n-1, s, d, m);
		printf("move disk %d from peg %d to peg %d\n", n, s, d);
		time++;
		hanoi(n-1, m, s, d);
	    //�N(n-1)�h�@�D�Ȧs�W�A�M��A�N��n�h����ؼЬW�A�H������ 
	}
}
