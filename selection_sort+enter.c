#include <stdio.h>
#define SIZE 10

void SelectionSort(int a[SIZE]){
	int i, j, temp, min, k; //min �N��ƦC���̤p���� ; k �N��ثe min ����} 
	
	for (i=0; i<SIZE; i++) {
        min = a[i];  //���� min �� a[i] 
        k = i;       // ���� min ����}�� k 
        
        for(j=i+1; j<=SIZE; j++) {
            if (a[j]<min) { //��� a[j] �O�_�p�� min 
                min = a[j];  // �N min ������ a[j] 
                k = j;          // �N min ����} k �אּ j 
            }
        }
        
        temp = a[i];   // �N min �P a[i] ���� 
        a[i] = a[k];
        a[k] = temp;
    }
}
int main(){
	int i, data[SIZE];

    printf("Please enter 10 integers�G");
    for (i=0;i<SIZE;i++) {      //��Jn�Ӽƭ� 
        scanf("%d",&data[i]);
    }
    puts(" ");
    
    printf("The unsorted data:");  //�C�X�|���ƧǦn���}�C 
    for(i=0; i<SIZE; i++){
    	printf("%d ", data[i]);
	}
	puts(" ");
	
	SelectionSort(data);
        
    printf("The sorted data:");     //�C�X�ƧǦn�����G
    for(i = 1; i<=SIZE; i++) {
        printf("%d ", data[i]);
    }
    puts(" ");
	
	return 0;
}


