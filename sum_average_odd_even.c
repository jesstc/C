#include <stdio.h>

int main (){
	int sum=0,n,num,a,odd=0,even=0;
	float average;
	
	printf("Please the number of integers you want to enter:");
	scanf("%d",&n); 
	
	for(num=1;num<=n;num++){      
		printf("The %dth number:",num);
		scanf("%d",&a);
		
		if(a%2==0){
			odd++;        //�p�G���ư��H2�l�ƬO���s  �N���Ƭ����� 
		}
		else{
			even++;       //�����s�h���_�� 
		}
		
		sum = sum + a;    //�N��J��a�ȥ[�Jsum�̭� 
	}
	
	printf("the sum is %d\n",sum);
	
	average = (float)sum/n;
	printf("the average is %.2f\n",average);    //�ίB�I�ƺ�X���� 
	
	printf("the number of odd numbers = %d\n",odd);  //��ܰ��Ʀ��X�� 
	printf("the number of even numbers = %d\n",even); //��ܩ_�Ʀ��X�� 
	
	return 0;
}
