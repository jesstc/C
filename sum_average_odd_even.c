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
			odd++;        //狦计埃2緇计琌箂  计案计 
		}
		else{
			even++;       //ぃ箂玥计 
		}
		
		sum = sum + a;    //盢块asum柑 
	}
	
	printf("the sum is %d\n",sum);
	
	average = (float)sum/n;
	printf("the average is %.2f\n",average);    //ノ疊翴计衡キА 
	
	printf("the number of odd numbers = %d\n",odd);  //陪ボ案计Τ碭 
	printf("the number of even numbers = %d\n",even); //陪ボ计Τ碭 
	
	return 0;
}
