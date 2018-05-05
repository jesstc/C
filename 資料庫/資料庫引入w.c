#include <stdio.h>

int main(){
	FILE *cfPtr;
	
	if((cfPtr = fopen("clients.txt","w")) == NULL){  
	    //w->會覆蓋前一次所寫的 (從頭寫到尾) 
	    //a->會在之前寫的後面再增加，不會覆蓋之前寫的東西 
	    //r->讀出 
	    //NULL->空值(有很多種可能的原因)->file打不開 
		puts("File could not be openedQQ");
	}
	else{  //成功打開時
	    puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        unsigned int account; // account number
        char name[30]; // account name
        double balance; // account balance

        scanf("%d%29s%lf", &account, name, &balance);

        // write account, name and balance into file with fprintf
        while (!feof(stdin)) { 
           fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
           printf("%s", "? ");
           scanf("%d%29s%lf", &account, name, &balance);
        }   
      
        fclose(cfPtr); // fclose closes file //可有可無，寫比較好 
	}
}
