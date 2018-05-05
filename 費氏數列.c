#include <stdio.h>

int Fabonacco(int n){
    int num1=1, num2=1, ans=1, count;
    
    for(count=1; count<=n; count++){
    	// 禣ん计玡ㄢ计 
        if(count <= 2){
            printf("F%d = %d\n", count, 1);
        }
        // 禣ん计材ぇ计 
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
    
    // 璸衡籔陪ボ
    Fabonacco(n);
    
    return 0;
}
