#include <stdio.h>
#define SIZE 99

char revPrint(char string[SIZE], int i, int len){	
	// 當i=0時 印出答案並跳出迴圈	
	if(i == 0){
		printf("%s", string);
		return 0;
	}
	
	// 第一個跟最後一個換，第二個跟倒數第二個換，以此類推 
	char hold = string[i-1];
	string[i-1] = string[len-i];
	string[len-i] = hold; 
	
	return revPrint(string, --i, len);
}

int main(){
	char str[SIZE];
	int i, len=0, count=0;
	
	// 輸入字串 
	printf("Please enter a string: ");
	scanf("%[^\n]", str);	
	
	// 字串長度 
	for(i=0; str[i]!='\0'; i++){
		len++;
	}

	// reverse 
	i = len / 2;
	printf("Reverse: ");
	revPrint(str, i, len);
	
	return 0;
}
