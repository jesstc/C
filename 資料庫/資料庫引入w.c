#include <stdio.h>

int main(){
	FILE *cfPtr;
	
	if((cfPtr = fopen("clients.txt","w")) == NULL){  
	    //w->�|�л\�e�@���Ҽg�� (�q�Y�g���) 
	    //a->�|�b���e�g���᭱�A�W�[�A���|�л\���e�g���F�� 
	    //r->Ū�X 
	    //NULL->�ŭ�(���ܦh�إi�઺��])->file�����} 
		puts("File could not be openedQQ");
	}
	else{  //���\���}��
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
      
        fclose(cfPtr); // fclose closes file //�i���i�L�A�g����n 
	}
}
