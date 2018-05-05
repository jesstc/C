//算出一到一百的質數，並print出來 
#include <stdio.h>

int main (){
	int a,b,logic;
	
	for(a=2;a<=100;a++){
		logic=1;
		//每個數字一開始先將logic=1 
		
		for(b=2; b<a; b++){
			if(a%b==0){
			    logic=0;
			}
		}  //當a除以比a小的數整除時，logic=0(代表不是質數) 
		
		if(logic==1){
			printf("%d\n",a);
		}	//如果除完logic還是=1，代表是質數，所以print出來 
	} 	
	
	return 0;
}
