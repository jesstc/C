# include <stdio.h>

double leibiz(int k){
	int  i;
	double sum=0, denominator, numerator;
	
	for(i=0; i<=k; i++){
		// ���l (�Yi �㰣2�h���l��1�A���㰣�h��-1 )
		if(i%2 == 1){
			numerator = -1;
		}
		else if(i%2 == 0){
			numerator = 1;
		}
		// ���� 
		denominator = (i * 2) + 1;
				
		// �`�M 
		sum = sum + (numerator / denominator);
	}	
	
	return (4*sum);
}

int main(){
	int k;
	
	// ��Jk�� 
	printf("Please enter a integer: ");
	scanf("%d", &k);
	
	// �L�X���� 
	printf("leibniz(%d) = %f\n", k, leibiz(k));
	
	return 0;
}
