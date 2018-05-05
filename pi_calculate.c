# include <stdio.h>

double leibiz(int k){
	int  i;
	double sum=0, denominator, numerator;
	
	for(i=0; i<=k; i++){
		// 分子 (若i 整除2則分子為1，不整除則為-1 )
		if(i%2 == 1){
			numerator = -1;
		}
		else if(i%2 == 0){
			numerator = 1;
		}
		// 分母 
		denominator = (i * 2) + 1;
				
		// 總和 
		sum = sum + (numerator / denominator);
	}	
	
	return (4*sum);
}

int main(){
	int k;
	
	// 輸入k值 
	printf("Please enter a integer: ");
	scanf("%d", &k);
	
	// 印出答案 
	printf("leibniz(%d) = %f\n", k, leibiz(k));
	
	return 0;
}
