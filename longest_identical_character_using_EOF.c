#include <stdio.h>

int main(){
	// 輸入字元 
	printf("Please enter a series of characters:\n");
	
	char enter=getchar();
	char ch, ch_1;
	int result;
	int size=0, size_1=0;
	
	// ch作為比較值 
	ch = enter;
	size++;

	while(result=(enter=getchar()) != EOF){	
		// 輸入的字元與ch相等
		if(enter == ch){
			size++;
		}
		// 輸入字元與ch不同  
		else{
			// 字串長度大於目前最常字串長度			
			if(size > size_1){
				size_1 = size;
				ch_1 = ch;
			}
			
			// 字串長度重新計算 比較值改變 
			size = 1;
			ch = enter;
		}
	}
	
	// 印出答案 
	printf("The longest identical character is ‘%c’, the length is %d.\n", ch_1, size_1);

	return 0;
}
