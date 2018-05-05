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
	//��J�C�Ӥ몺collected 
	
	while(input != -1){ //��input=-1�ɵ����{�� �A������-1�h�~����� 
		printf("Enter name of month: ");
		fflush(stdin);
		scanf("%s", month);
		//��J��� 
		
		printf("Total Collections: $%.2f\n", input);
		//���collections��p���I��ĤG��
		
		state = input*0.04;
		county = input*0.05;
		totaltax = state+county;
		sales = input-totaltax;
		//�p��U�ӭȪ��j�p 
		
		printf("Sales: $%.2f\n", sales);
		printf("County Sales Tax: $%.2f\n", county);
		printf("State Sales Tax: $%.2f\n", state);
		printf("Total Sales Tax: $%.2f\n", totaltax);
		//print�X�U�ӭ�
		puts("\n");
		
		printf("Enter total amount collected (-1 to quit):");
    	scanf("%f", &input);
	    //��J�C�Ӥ몺collected 
	}
	
	return 0;
} 
