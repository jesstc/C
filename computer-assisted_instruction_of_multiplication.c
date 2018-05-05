#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiplication();
void judge(int ans); 

int main(){
    srand(time(NULL));
    
    judge(multiplication());
	
	return 0;
}

int multiplication(){
	int a,b,ans;
    a = (rand() % 10) + 0; 
    b = (rand() % 10) + 0;
    ans = a*b;
    
    printf("How much is %d times %d\n",a,b);
    
    return ans;
}

void judge(int ans){
	int enter;
	scanf("%d",&enter);
	
    if(enter == ans){
	    printf("Very good!\n");
	    judge(multiplication());
  	}
    else{
    	printf("No. Please try again.");
	    judge(ans);
    }	
}
