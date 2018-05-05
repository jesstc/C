# include <stdio.h>

int swap(int *a, int *b){
	int tmp = *a; 
	*a = *b;
	*b = tmp; 
}

int main(){
	int array_size=0, i, j, k;
	// 輸入陣列大小 
	printf("Enter the size of array: ");
	scanf("%d", &array_size);
	
	// 輸入陣列內的數值 
	int array[array_size];
	for(i=0; i<array_size; i++){
		printf("array[%d]=", i);
		scanf("%d", &array[i]);
	}
	
	// bubble sort
	for(i=1; i<array_size; i++){
		for(j=0; j<array_size-1; j++){
			if(array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
		// 印出交換後的陣列 
		for(k=0; k<array_size; k++){
			printf("%d ", array[k]);
		}
		printf("\n");
	}
	
	return 0;
}
