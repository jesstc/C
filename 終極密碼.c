#include <stdio.h>
#include <stdlib.h> //rand()srand()柑
#include <time.h>  //ヘ玡丁肚ㄧ计time()﹚竡time.hい

int main(){
	srand(time(NULL)); //癘眔璶 NULL 
    //狡磅︽ぇ┮眔睹计妓(ウパ计玻ネ睹计τ秨﹍╰参常琌 0┮–Ω玻ネㄓ睹计穦妓) 
    //ノsrand()ㄧ计э跑秨﹍睹计srand()惠璶把计暗贺τ硂把计и硄盽ヘ玡丁肚碞琌ㄏノtime()ㄧ计  
    
	int ans,guess,logic=1;
	char yesno;
	ans = (rand() % 1000) + 1;
	/*  1-10 睹计 a=(rand() % 10) +1
        1-100 睹计 a=(rand() % 100) +1
        100-1000 睹计 a=(rand() % 901) +100

       и砏砏玥 ( rand() % (程-程+1) ) + 程 */
       
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
