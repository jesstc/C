#include <stdio.h>
#include <stdlib.h>

int main () {
	int a=1,b,c;
	
	while (a<=9){	
		b=1;
		while (b<=9){
			c=a*b;
			printf ("%d*%d=%d\n",a,b,c);
			b++;	
		}	
		a++;
	}
	
	return 0;
}
