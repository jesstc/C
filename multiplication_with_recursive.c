#include <stdio.h>

//¥Î»¼°j¼gx*y 

unsigned int mystery(unsigned int a, unsigned int b){
	if(1 == b){
		return a;
	}
	else{
		return a + mystery(a,b-1);
	}
} 

int main(){
	printf("%s","enter two positive integers:");
	unsigned int x,y;
	scanf("%u%u",&x,&y);
	
	printf("The result is %u\n",mystery(x,y));
} 
