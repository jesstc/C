//��X�@��@�ʪ���ơA��print�X�� 
#include <stdio.h>

int main (){
	int a,b,logic;
	
	for(a=2;a<=100;a++){
		logic=1;
		//�C�ӼƦr�@�}�l���Nlogic=1 
		
		for(b=2; b<a; b++){
			if(a%b==0){
			    logic=0;
			}
		}  //��a���H��a�p���ƾ㰣�ɡAlogic=0(�N���O���) 
		
		if(logic==1){
			printf("%d\n",a);
		}	//�p�G����logic�٬O=1�A�N��O��ơA�ҥHprint�X�� 
	} 	
	
	return 0;
}
