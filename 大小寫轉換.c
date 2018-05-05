#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 99

char upper(int len, char enter[SIZE]);
char lower(int len, char enter[SIZE]);
char reverse(int len, char enter[SIZE]);

int main(){
    // 設定字串大小
    char enter[SIZE]="";
    char enter1[SIZE]="";
    int i;
    
    // 輸入字串
    printf("Enter a string: ");
    fgets(enter, sizeof(enter), stdin);
    int len = strlen(enter);
    for(i=0; i<SIZE; i++){
    	enter1[i] = enter[i];
	}
    
    // 印出使用者輸入字串
    printf("Your input is: ");
    puts(enter);
    
    upper(len, enter);
    lower(len, enter);
	reverse(len, enter1);
	printf("\n");
    
    return 0;
}

char upper(int len, char enter[SIZE]){
    // 轉換成大寫
    printf("The string after uppercased is: ");
    int i=0;
    for(i=0; i<len; i++){
        if(islower(enter[i]) != 0){
            enter[i] = toupper(enter[i]);
        }
        printf("%c", enter[i]);
    }
    
    return 0;
}
char lower(int len, char enter[SIZE]){
	    // 轉換成小寫
    printf("The string after lowercased is: ");
    int i;
    for(i=0; i<len; i++){
        if(isupper(enter[i]) != 0){
            enter[i] = tolower(enter[i]);
        }
        printf("%c", enter[i]);
    }
    
    return 0;
}
char reverse(int len, char enter1[SIZE]){
	// reverse
    printf("When we make your input string reversed: ");
    int i;
	for(i=len-2; i!=0; i--){
    	printf("%c", enter1[i]);
	}
	
	return 0;
}