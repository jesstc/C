#include<stdio.h>

int main (){
	int count;

    printf("Dec\tBin\t\tOct\tHex\n");
    //�L�Xtitle 
    
    for (count = 0; count <256; count ++){
    	int bin[8], i, count1;
	    count1 = count;
	    for(i=0; i<8; i++){
		    bin[7-i] = count1%2;
		    count1 = count1/2;
		    //13���G�i��N�O: 13%2=1�N��1�O�G�i��K�Ӽƪ��̫�@�ӼơA�ҥH�s�b�ĤK��(7)��m�A�H������ 
	    }  //�Nbinary�]���@�Ӱ}�C 
	
        printf("%-2d\t%d%d%d%d%d%d%d%d \t%-3o\t%x\n",count, bin[0], bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7], count, count);
    }
    
	return 0;
}

