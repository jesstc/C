#include <stdio.h>

int main(){
	int i,n,space,star;
	
	printf("please enter a integer:");
	scanf("%d",&n);
	
	for(i=1;i<=(n+1)/2;i++){
		for(space=1; space<=(n-i); space++){
			printf(" ");
		}
		for(star=1; star<=i*2-1; star++){
			printf("*");
		}
		printf("\n");
	} 
	for(i=(n-1)/2;i>=1;i--){
		for(space=i; space<=(n-1); space++){
			printf(" ");
		}
		for(star=1; star<=i*2-1; star++){
			printf("*");
		}
		printf("\n");
	} 
	
	return 0;
}
