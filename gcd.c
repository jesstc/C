#include <stdio.h>

int GCD(int x,int y);

int GCD(int x,int y){   //�̤j���]�ƪ�function 
	int i,gcd;
	
	if(x>y){
		i = x;
	}
	else{
		i = y;
	}
	//�N���j���Ʀr��Ji (�q�̤j�}�l��)
	
	while(x%i != 0 || y%i != 0){ //��x���Hi���l�ƩMy���Hi���l�ƬҬ�0���ɭԡAi�Y�Ox�Py���̤j���]�� 
		i--;
	}
	gcd = i;
	
	return gcd;  //��Xgcd 
}

/*���j�g�k:(x>y)
 if(x%y==0){
     return y;
 }
 else{
     return GCD(y,x%y);
 }
 */
 

int main (){
	int num1,num2;
	
	for(num1=1;num1<=50;num1++){
		num2 = 100 - num1; //num1�Bnum2�ۥ[����100 
		printf("The gcd of %d and %d is %d\n",num1,num2,GCD(num1,num2));
	}
		
	return 0;
}


