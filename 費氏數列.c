#include <stdio.h>

int Fabonacco(int n){
    int num1=1, num2=1, ans=1, count;
    
    for(count=1; count<=n; count++){
    	// 費氏數列前兩個數字 
        if(count <= 2){
            printf("F%d = %d\n", count, 1);
        }
        // 費氏數列第三個之後的數字 
        else{
            num2 = ans;            
            ans = num1 + num2;
            num1 = num2;

            printf("F%d = %d\n", count, ans);
        }
    }
}
int main(){
    // enter a number
    int n;
    printf("Please enter a number:");
    scanf("%d", &n);
    
    // 計算與顯示
    Fabonacco(n);
    
    return 0;
}
