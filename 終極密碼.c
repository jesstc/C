#include <stdio.h>
#include <stdlib.h> //rand()�Bsrand()�b�̭�
#include <time.h>  //�H�ثe���ɶ��ǤJ�����time()�w�q�btime.h��

int main(){
	srand(time(NULL)); //�O�o�n�[ NULL 
    //���ư��椧��A�ұo�쪺�üƤ@��(�]�����ѤW�@�ӼƭȲ��ͥX�U�@�ӶüơA�Ӥ@�}�l�t�γ��O 0�A�ҥH�C�����ͥX�Ӫ��üƤ~�|�@��) 
    //��srand()��Ƨ��ܤ@�}�l���üƭȡAsrand()�ݭn�@�ӰѼư����ؤl�A�ӳo�ӰѼƧڭ̳q�`�H�ثe���ɶ��ǤJ�A�]�N�O�ϥ�time()���  
    
	int ans,guess,logic=1;
	char yesno;
	ans = (rand() % 1000) + 1;
	/* �� 1-10 ���ü� a=(rand() % 10) +1
       �� 1-100 ���ü� a=(rand() % 100) +1
       �� 100-1000 ���ü� a=(rand() % 901) +100

       �ڭ̥i�H�W�ǥX�H�U���W�h�G ( rand() % (�̤j��-�̤p��+1) ) + �̤p�� */
       
    while(logic == 1){
    	
    	printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess:");
    	
    	while(guess != ans){
    		scanf("%d",&guess);
    		if(guess>ans){
    			printf("Too high.Try again.\n");
			}
			else if(guess<ans){
    			printf("Too low.Try again.\n");
			}
			else if(guess==ans){
				printf("Excellent! You guess the number!\n");
			}
		}
		
		printf("Would you like to play again (y or n)?\n");
		scanf("%c",&yesno);
		
		if((yesno=getchar()) =='y'){ 
			logic = 1;
			ans = (rand() % 1000) + 1;
		}
		else{
			logic = 0;
		}
	}
	
    return 0;
} 
