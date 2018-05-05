#include<stdio.h>

int main (){
	int count;

    printf("Dec\tBin\t\tOct\tHex\n");
    //印出title 
    
    for (count = 0; count <256; count ++){
    	int bin[8], i, count1;
	    count1 = count;
	    for(i=0; i<8; i++){
		    bin[7-i] = count1%2;
		    count1 = count1/2;
		    //13的二進位就是: 13%2=1代表1是二進位八個數的最後一個數，所以存在第八個(7)位置，以此類推 
	    }  //將binary設成一個陣列 
	
        printf("%-2d\t%d%d%d%d%d%d%d%d \t%-3o\t%x\n",count, bin[0], bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7], count, count);
    }
    
	return 0;
}

