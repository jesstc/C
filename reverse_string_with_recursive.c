#include <stdio.h>
#define SIZE 99

char revPrint(char string[SIZE], int i, int len){	
	// ��i=0�� �L�X���רø��X�j��	
	if(i == 0){
		printf("%s", string);
		return 0;
	}
	
	// �Ĥ@�Ӹ�̫�@�Ӵ��A�ĤG�Ӹ�˼ƲĤG�Ӵ��A�H������ 
	char hold = string[i-1];
	string[i-1] = string[len-i];
	string[len-i] = hold; 
	
	return revPrint(string, --i, len);
}

int main(){
	char str[SIZE];
	int i, len=0, count=0;
	
	// ��J�r�� 
	printf("Please enter a string: ");
	scanf("%[^\n]", str);	
	
	// �r����� 
	for(i=0; str[i]!='\0'; i++){
		len++;
	}

	// reverse 
	i = len / 2;
	printf("Reverse: ");
	revPrint(str, i, len);
	
	return 0;
}
