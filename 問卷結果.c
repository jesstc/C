#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 5

int StronglyDisagree=0, Disagree=0, Neutral=0, Agree=0, StronglyAgree=0;

int consequence(int a){
	if(a==1 || a==2){
		++StronglyDisagree;
	}
	else if(a==3 || a==4){
		++Disagree;
	} 
	else if(a==5 || a==6){
		++Neutral;
	} 
	else if(a==7 || a==8){
		++Agree;
	} 
	else if(a==9 || a==10){
		++StronglyAgree;
	} 
} 
int main(){
	int frequency[FREQUENCY_SIZE] = {0};
	
	int responses[RESPONSES_SIZE] = {
		1,2,6,4,8,5,9,7,8,10,
		1,6,3,8,6,10,3,8,2,7,
		6,5,7,6,8,6,7,5,6,6,
		5,6,7,5,6,4,8,6,8,10	 
	};
	
	int i;
	for (i=1; i<=RESPONSES_SIZE; i++){
		consequence(responses[i]);
	}
	
	printf("%17s%17s\n","answer","frequency");
	printf("%17s%17d\n","strongly disagree",StronglyDisagree);
	printf("%17s%17d\n","disagree",Disagree);
	printf("%17s%17d\n","neutral",Neutral);
	printf("%17s%17d\n","agree",Agree);
	printf("%17s%17d\n","strongly agree",StronglyAgree);
	
	return 0;
}






