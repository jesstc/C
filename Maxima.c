#include <stdio.h>

float maximum(float a,float b,float c,float d);

int main (){
	float a,b,c,d;
	printf("Please enter four float number:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	
	printf("the maximum number is %f",maximum(a,b,c,d));
	
	return 0;
}

float maximum(float a,float b,float c,float d){
	float max;
	max = a;
	
	if(b>max){
		max = b;
	}
    if(c>max){
		max = c;
	}
	if(d>max){
		max = d;
	}
	
	return max;
}
