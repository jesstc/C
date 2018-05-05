#include <stdio.h>

int GCD(int x,int y);

int GCD(int x,int y){   //程そ计function 
	int i,gcd;
	
	if(x>y){
		i = x;
	}
	else{
		i = y;
	}
	//盢耕计i (眖程秨﹍埃)
	
	while(x%i != 0 || y%i != 0){ //讽x埃i緇计㎝y埃i緇计0i琌x籔y程そ计 
		i--;
	}
	gcd = i;
	
	return gcd;  //块gcd 
}

/*患癹糶猭:(x>y)
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
		num2 = 100 - num1; //num1num2单100 
		printf("The gcd of %d and %d is %d\n",num1,num2,GCD(num1,num2));
	}
		
	return 0;
}


