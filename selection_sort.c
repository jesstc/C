#include <stdio.h>
#define SIZE 10

//SlectionSort
int main(){
	int array[SIZE] = {22,30,50,1,90,6,20,99,44,64};
    int i, j, temp, min, k; //min �N��ƦC���̤p���� ; k �N��ثe min ����} 

//    printf("��J�ƭȪ��ӼơG ");    //��Jn*/
//    scanf("%d" ,&n);
//    printf("\n");

//    for (i=1;i<=n;i++) {      //��Jn�Ӽƭ� 
//        printf("�п�J�ƭȡG");
//        printf("data[%d]=",i);
//        scanf("%d",&data[i]);
//    }

    for (i=0; i<SIZE; i++) {
        min = array[i];  //���� min �� data[i] 
        k = i;                  // ���� min ����}�� k 
        for(j=i+1; j<=SIZE; j++) {
            if (array[j]<min) { //��� data[j] �O�_�p�� min 
                min = array[j];  // �N min ������ data[j] 
                k = j;          // �N min ����} k �אּ j 
            }
        }
        temp = array[i];   // �N min �P data[i] ���� 
        array[i] = array[k];
        array[k] = temp;
    }
    printf("\n��ƱƧǫᬰ\n");     /* �C�X�ƧǦn�����G */
    for(i = 1; i <= SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
	
}


