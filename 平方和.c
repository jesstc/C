#include<stdio.h>
#include<math.h>

// �p��O�_������M��function 
int listSumOfTwoSqrt(int ans){
    int A, count=0;
    float B, B_floor; // B = ans-A*A ���}�ڸ�
    
    // ��B����ƮɡA�Y���Ʀ�����M 
    for(A=1; A<=ans; A++){
        B = sqrt(ans - A*A);
        B_floor = floor(B); // ��B�h���p���I�᪺���
		
        if(B-B_floor == 0 && A<B_floor){
            printf("x=%d,y=%d. %d^2+%d^2=%d\n", A, (int)B, A, (int)B, ans);
            count++;
        }
    }
    // ���ƨS������M 
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
