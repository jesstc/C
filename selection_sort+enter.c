#include <stdio.h>
#define SIZE 10

void SelectionSort(int a[SIZE]){
	int i, j, temp, min, k; //min 代表數列中最小的值 ; k 代表目前 min 的位址 
	
	for (i=0; i<SIZE; i++) {
        min = a[i];  //紀錄 min 為 a[i] 
        k = i;       // 紀錄 min 的位址為 k 
        
        for(j=i+1; j<=SIZE; j++) {
            if (a[j]<min) { //比較 a[j] 是否小於 min 
                min = a[j];  // 將 min 紀錄為 a[j] 
                k = j;          // 將 min 的位址 k 改為 j 
            }
        }
        
        temp = a[i];   // 將 min 與 a[i] 互換 
        a[i] = a[k];
        a[k] = temp;
    }
}
int main(){
	int i, data[SIZE];

    printf("Please enter 10 integers：");
    for (i=0;i<SIZE;i++) {      //輸入n個數值 
        scanf("%d",&data[i]);
    }
    puts(" ");
    
    printf("The unsorted data:");  //列出尚未排序好的陣列 
    for(i=0; i<SIZE; i++){
    	printf("%d ", data[i]);
	}
	puts(" ");
	
	SelectionSort(data);
        
    printf("The sorted data:");     //列出排序好的結果
    for(i = 1; i<=SIZE; i++) {
        printf("%d ", data[i]);
    }
    puts(" ");
	
	return 0;
}


