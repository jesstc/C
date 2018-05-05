#include <stdio.h>

// gcd
int gcd(int a, int b){
	// gcd(a, b)，且a>b 
	if(a > b){
		if(a % b == 0){
			// a整除b 
			return b;
		}
		else{
			// a不整除b 
			return gcd(b, a%b);
		}
	}
	else{
		return gcd(b, a);
	}
}

// lcm
int lcm(int a, int b){
	int ans=1;
	
	// lcm(照公式)
	ans = (a*b) / gcd(a, b);
	
	return ans;
}

int main(){
	int x, y;
	
	// enter integers
	printf("Please enter two integers: ");
	scanf("%d %d", &x, &y);
	
	// print the answer
	printf("lcm(%d, %d) = %d", x, y, lcm(x, y));
	
	return 0;
}
