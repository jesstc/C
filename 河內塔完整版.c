#include <stdio.h>

void hanoi(int n, int s, int m, int d);
int time = 0;  //計算有幾個步驟 

int main (){
	int n;
	printf("Please enter the number of disks you have:");
	scanf("%d",&n);
	//輸入hanoi的個數 
	
	hanoi(n,1,2,3);
	printf("The total number of movements is %d\n", time);  //顯示需要幾個步驟 
	
	return 0;
}

void hanoi(int n, int s, int m, int d){
	if(n > 0){
		hanoi(n-1, s, d, m);
		printf("move disk %d from peg %d to peg %d\n", n, s, d);
		time++;
		hanoi(n-1, m, s, d);
	    //將(n-1)層一道暫存柱，然後再將第n層移到目標柱，以此類推 
	}
}
