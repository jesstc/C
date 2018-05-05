#include <stdio.h>
#define SIZE 99

int mismatched_char(char a[], char b[]){
	int i=0, len=0, ans=0;
	
	// 計算兩字串長度是否相等 
	for(i=0; a[i] != '\0'; i++){
		len++;
	}
	for(i=0; b[i] != '\0'; i++){
		len--;
	}
	
	if(len == 0){
		// 兩字串長度相等 
		for(i=0; a[i] != '\0'; i++){
			if(a[i] != b[i]){
				ans++;
			}
		}
		
		return ans;
	}
	else{
		// 兩字串長度不等 
		return -1;
	}
}

int main(){
	char x[SIZE]="", y[SIZE]="";
	
	// 輸入兩個字串 
	printf("Please enter two strings:\nFirst string: ");
	scanf("%[^\n]", x);
	printf("Second string: ");
	fflush(stdin);
	scanf("%[^\n]", y);
	
	// 印出答案 
	printf("mismatched_char(\"%s\",\"%s\") = %d", x, y, mismatched_char(x, y));
	
	return 0;
	
}
