#include<stdio.h>
#define SIZE 10

//swap:交換兩個陣列裡面的數字
//bubble sort:重複地走訪過要排序的數列，一次比較兩個元素，如果他們的順序錯誤就把他們交換過來。

void swap(int x[], int y[]){ //使用時:swap(&a[i],&b[i]) 
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
