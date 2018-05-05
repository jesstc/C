#include <stdio.h>
#include "sumOfDigits_fun.h"

int main(){
    int n=1;
    
    while(n != 0){
        // 輸入數字
        printf("Please enter an integer: ");
        scanf("%d", &n);
        // 印出答案
        printf("answer: %d\n", sumOfDigits(n));
    }
   
    return 0;
}