#include <stdio.h>
#include <limits.h>  //iNT_MIN的定義處 

int main (){
	int counter,number,largest,second,largest_position,second_position;
	
	largest = INT_MIN;
	second = INT_MIN;
	for (counter=0;counter<10;++counter){
		printf("Please enter the %dth number",counter);
		scanf("%d",&number);
		if (number>largest){
			second = largest;
			second_position = largest_position;
			largest = number;
			largest_position = counter;
		}
		else {
			if (number>second){
				second = number;
				second_position = counter;
			}
		}
	}
	
	printf("the largest number is %d at position %d\n",largest,largest_position);
	printf("the second largest number is %d at position %d\n",second,second_position);
	
	return 0;	
}
