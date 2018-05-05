#include <stdio.h>
#include <math.h>   //內有開根號及平方 

double hypotenuse(double a,double b); //前面要用double不能用int 

double hypotenuse (double a ,double b){  //前面要用double不能用int  
	return sqrt(a*a+b*b);  //平方不能用^2 只有pow(底數,次方)或是直接乘(a*a) 
}

int main (){
	double A,B;
	
	printf("Please enter two number as two sides of triangle.\n");
	scanf("%lf %lf",&A,&B);
	
	printf("hypotenuse = %.1f",hypotenuse(A,B));
		
	return 0;
} 


