#include <stdio.h>

int main(){
	char ID[30];
	char name[30];
	double balance;
	char ans;
	
	while(1){
		int logic=1;
		while(logic == 1){
			fflush(stdin);
			puts("Press 'a' to list all customer(s)");
			puts("Press 'b' to add a new customer");
			puts("Press 'c' to end this program");
			printf("Please enter your choice:");
			scanf("%c", &ans);
			
			// ¨¾§b 
			if(ans!='a' && ans!='b' && ans!='c') logic=1;
			else logic=0;
		}
		
		if(ans == 'a'){
			// list all customer
			char str[60];
			FILE *read1 = fopen("customer.txt", "r");
			FILE *read2 = fopen("customer.txt", "r");
			rewind(read1);
			rewind(read2);
			
			// read & print data from file 
			printf("%-30s%-30s%-20s\n", "ID", "NAME", "BALANCE");
			while((fgets(str, 80, read1)) != NULL){
				fgets(str, 80, read2);
				printf("%s", str);
			}
			
			// close the file
			fclose(read1);
			fclose(read2);
		}
		else if(ans == 'b'){
			// add a new customer
			FILE *write = fopen("customer.txt", "a");
			
			printf("Please enter ID, name and balance: ");
			scanf("%s %s %lf", ID, name, &balance);
			
			// print data to the file
			fprintf(write, "%-30s%-30s%-20.3lf\n", ID, name, balance);
			
			// close the file
			fclose(write);
		}
		else if(ans == 'c'){
			// end this program
			return 0;
		}
		
		puts("");
	}
	
	return 0;
}
