#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 
#include <windows.h> 

typedef struct bulletposition{
	int x;
	int y;
} Bulletpos;

//typedef struct barrierposition{
//	int x;
//	int y;
//} Barrierpos;

void hide();
void Control(int x, int y);
void printAirplan(int x);
void updateBulletPos(Bulletpos a[]);
void oneShot(Bulletpos a[], int x, int y);
void printAllBullet(Bulletpos a[], int x, int y);
void initBulletpos(Bulletpos a[]);
int Game();

void Hide(){
	// 隱藏光標 
	CONSOLE_CURSOR_INFO cursor_info={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void Control(int x, int y){
	Bulletpos bullets[y];
	initBulletpos(bullets);  // 初始化陣列 
	
	while(1){
		system("cls"); //清屏 
		Hide();        //隱藏光標 
		printAllBullet(bullets, x, y); // bullets
		printAirplan(x);               // print airplan
		
		// control airplan
		char input;
		
		if(kbhit()){ 
			//determine whether user entered something from the keybroad or not
			input = getch(); //the getch() function should use #include<conio.h>
			
			if(input == 'a'){  // 左 
				if(x >= 0) x--;
			}
			if(input == 'd'){  // 右 
				if(x<=37) x++;
			}
			if(input == 'w'){  // 上 
				y--;
			}
			if(input == 's'){  // 下 
				if(y<=22) y++;
				else y=22;
			}
		}
	}	
} 

void printAirplan(int x){
	int i,j;
	for(j=0;j<x;j++)
		printf(" ");
		printf("  *\n");
	
	for(j=0;j<x;j++)
		printf(" ");
		printf("*****\n");
	
	for(j=0;j<x;j++)
		printf(" ");
		printf(" * * \n");
}

//void updateBarrierPos(Barrierpos b[]){
//	int i;
//	for(i=0;i<21;i++){
//		b[i]
//	}
//}
void updateBulletPos(Bulletpos a[]){
	// update the all position (bullet)
	int i;
	for(i=21; i>0; i--){
		a[i].x = a[i-1].x;
		a[i].y = a[i-1].y;
	}
}

void oneShot(Bulletpos a[], int x, int y){
	// add new x and y (bullet) 
	if(a[0].x != 0){
		// 第一發子彈 不執行 
		updateBulletPos(a);
	}
	// position of airplan
	a[0].x = x;
	a[0].y = y; 
}

void printAllBullet(Bulletpos a[], int x, int y){
	// add new x and y (bullet) 
	oneShot(a, x, y);

	// 設定y座標的最大值 
	int y_max=21;
	if(y > y_max){
		y = y_max;
	}
	// y座標 
	int i, count_blank;
	for(i=y; i>=0; i--){ 
		// 還沒發射子彈
		if(a[i].x == 0){
			printf("\n");
			continue;
		}
		
		// x座標
		for(count_blank=1; count_blank<a[i].x; count_blank++){   
			printf(" ");
		}
		printf("   \"\n");
	}
}

void initBulletpos(Bulletpos a[]){
	// 初始化陣列 
	int i;
	for(i=0; i<22; i++){
		a[i].x = 0;
		a[i].y = 0;
	}
}

int Game(){
	// 飛機初始座標 
	int x=20;
	int y=22;
	
	Control(x, y);
	
	return 0;
}

int main(){
	Game();
	return 0;
}

// 座標test 
//	for(i=0; i<25; i++){
//		printf("(%d, %d)\n", a[i].x, a[i].y);
//	}

