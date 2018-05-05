#include <stdio.h>
#define SIZE 100

// function
int index(char a[SIZE], char b[SIZE], int len, int len_t){
	int i=0, j=0;
	
    // error
	for(i=0; i<len; i++){
		if(a[i] == b[0]){
			for(j=1; j<len_t; j++){
				if(a[i+j] == b[j]){
					if(j == len_t-1){
						return i;
					}
					else{
						continue;
					}
				}
				else{
					break;
				}
			}
		}
		
	}
	return -1;
    
    // success
    while(a[i] != '\0'){
        if(a[i] == b[j]){
            if(b[i+1] == '\0'){
                return(i-j+1);
            }
            else{
                i++;
                j++;
            }
        }
        else{
            i++;
            j=0;
        }
    }
    retrun -1;
        
//期中考找很多個
}

int main(){
	// 設定初始值 
	char str[SIZE] = "", str_target[SIZE] = "";
	
	// 輸入字串 
	printf("Please enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("Please enter the target string: ");
	fgets(str_target, sizeof(str_target), stdin);
	
	// 數字串有幾個字元
	int len=0, len_target=0, i=0, j=0;
	for(i=0; str[i] != '\0'; i++){
		len++;
	}
	len--;
	for(j=0; str_target[j] != '\0'; j++){
		len_target++;
	}
	len_target--;
	
	// 計算
	printf("%d\n", index(str, str_target, len, len_target)); 
	
	return 0;
}