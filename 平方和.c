#include<stdio.h>
#include<math.h>

// 計算是否有平方和的function 
int listSumOfTwoSqrt(int ans){
    int A, count=0;
    float B, B_floor; // B = ans-A*A 的開根號
    
    // 當B為整數時，即此數有平方和 
    for(A=1; A<=ans; A++){
        B = sqrt(ans - A*A);
        B_floor = floor(B); // 取B去掉小數點後的整數
		
        if(B-B_floor == 0 && A<B_floor){
            printf("x=%d,y=%d. %d^2+%d^2=%d\n", A, (int)B, A, (int)B, ans);
            count++;
        }
    }
    // 此數沒有平方和 
    if(count == 0){
    	printf("\"Not Found!\"\n");
	}
}

int main(){
    //find the answer until ans = -1
    int ans;
    do{
    	// enter a number
        printf("Please enter a number:");
        scanf("%d", &ans);
	    listSumOfTwoSqrt(ans);
	    printf("\n");
	}
	while(ans != -1);
	
	return 0;
}
