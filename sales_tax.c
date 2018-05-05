/*
Sales tax is collected from buyers and remitted to the government.
A retailer has to file a monthly sales tax report which lists the sales for the month and the amount of sales tax collected, at both the county and state levels.
Develop a progran that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state taxes.
Assume that states have a 4% sales tax and counties have a 5% sales tax.
*/

#include <stdio.h>

int main(){
	float input, sales, county, state, totaltax;
	char month[10];
	
	printf("Enter total amount collected (-1 to quit):");
	scanf("%f", &input);
	//輸入每個月的collected 
	
	while(input != -1){ //當input=-1時結束程式 ，不等於-1則繼續執行 
		printf("Enter name of month: ");
		fflush(stdin);
		scanf("%s", month);
		//輸入月份 
		
		printf("Total Collections: $%.2f\n", input);
		//顯示collections到小數點後第二位
		
		state = input*0.04;
		county = input*0.05;
		totaltax = state+county;
		sales = input-totaltax;
		//計算各個值的大小 
		
		printf("Sales: $%.2f\n", sales);
		printf("County Sales Tax: $%.2f\n", county);
		printf("State Sales Tax: $%.2f\n", state);
		printf("Total Sales Tax: $%.2f\n", totaltax);
		//print出各個值
		puts("\n");
		
		printf("Enter total amount collected (-1 to quit):");
    	scanf("%f", &input);
	    //輸入每個月的collected 
	}
	
	return 0;
} 
