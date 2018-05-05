#include <stdio.h>

int main (){
	int i,j,blank;
	
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%s","*");
		}
		printf("\n");	
	}
	
	printf("\n");
	
	for(i=10;i>0;i--){
		for(j=1;j<=i;j++){
			printf("%s","*");
		}
		printf("\n");	
	}
	
	printf("\n");
	
	for(i=10;i>0;i--){
		for(blank=1;blank<=(10-i);blank++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%s","*");
		}
		printf("\n");	
	}
	
	printf("\n");
		
	for(i=1;i<=10;i++){
		for(blank=10-i;blank>=1;blank--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%s","*");
		}
		printf("\n");	
	}
		
	return 0;
} 
