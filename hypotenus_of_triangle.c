#include <stdio.h>
#include <math.h>   //�����}�ڸ��Υ��� 

double hypotenuse(double a,double b); //�e���n��double�����int 

double hypotenuse (double a ,double b){  //�e���n��double�����int  
	return sqrt(a*a+b*b);  //���褣���^2 �u��pow(����,����)�άO������(a*a) 
}

int main (){
	double A,B;
	
	printf("Please enter two number as two sides of triangle.\n");
	scanf("%lf %lf",&A,&B);
	
	printf("hypotenuse = %.1f",hypotenuse(A,B));
		
	return 0;
} 


