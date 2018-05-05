#include <stdio.h>
#define SIZE 10

//SlectionSort
int main(){
	int array[SIZE] = {22,30,50,1,90,6,20,99,44,64};
    int i, j, temp, min, k; //min 代表數列中最小的值 ; k 代表目前 min 的位址 

//    printf("輸入數值的個數： ");    //輸入n*/
//    scanf("%d" ,&n);
//    printf("\n");

//    for (i=1;i<=n;i++) {      //輸入n個數值 
//        printf("請輸入數值：");
//        printf("data[%d]=",i);
//        scanf("%d",&data[i]);
//    }

    for (i=0; i<SIZE; i++) {
        min = array[i];  //紀錄 min 為 data[i] 
        k = i;                  // 紀錄 min 的位址為 k 
        for(j=i+1; j<=SIZE; j++) {
            if (array[j]<min) { //比較 data[j] 是否小於 min 
                min = array[j];  // 將 min 紀錄為 data[j] 
                k = j;          // 將 min 的位址 k 改為 j 
            }
        }
        temp = array[i];   // 將 min 與 data[i] 互換 
        array[i] = array[k];
        array[k] = temp;
    }
    printf("\n資料排序後為\n");     /* 列出排序好的結果 */
    for(i = 1; i <= SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
	
}


