#include<stdio.h>
#define SIZE 10

//swap:�洫��Ӱ}�C�̭����Ʀr
//bubble sort:���Ʀa���X�L�n�ƧǪ��ƦC�A�@�������Ӥ����A�p�G�L�̪����ǿ��~�N��L�̥洫�L�ӡC

void swap(int x[], int y[]){ //�ϥή�:swap(&a[i],&b[i]) 
	int hold;
	
	hold = x[0];
	x[0] = y[0];
	y[0] = hold;
}

int main(){
	int array[SIZE] = {33,22,55,11,66,35,7,90,43,85};
	unsigned int pass;
	int i;
	
	for(pass = 1; pass < SIZE; pass++){
		for(i=0; i<SIZE; i++){
		    if(array[i+1]<array[i]){
		    	swap(&array[i],&array[i+1]);
		    }
    	}
	}
	
	int a;
	for(a=0; a<SIZE; a++){
		printf("%7d",array[a]);
	}
	
}
