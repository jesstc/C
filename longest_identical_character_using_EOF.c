#include <stdio.h>

int main(){
	// ��J�r�� 
	printf("Please enter a series of characters:\n");
	
	char enter=getchar();
	char ch, ch_1;
	int result;
	int size=0, size_1=0;
	
	// ch�@������� 
	ch = enter;
	size++;

	while(result=(enter=getchar()) != EOF){	
		// ��J���r���Pch�۵�
		if(enter == ch){
			size++;
		}
		// ��J�r���Pch���P  
		else{
			// �r����פj��ثe�̱`�r�����			
			if(size > size_1){
				size_1 = size;
				ch_1 = ch;
			}
			
			// �r����׭��s�p�� ����ȧ��� 
			size = 1;
			ch = enter;
		}
	}
	
	// �L�X���� 
	printf("The longest identical character is ��%c��, the length is %d.\n", ch_1, size_1);

	return 0;
}
