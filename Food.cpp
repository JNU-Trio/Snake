#include "Food.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>

void Food::generateFood(Frame& frame){
	srand((unsigned)time(NULL));       //初始化随机数
		while(1){
			x=rand()%(frame.getFrameW()-1);
			y=rand()%frame.getFrameH();
			if(x==0||y==0){
				continue;
			}
			x=2*x+frame.getFrameX();
			y=y+frame.getFrameY();
			
			break;
		}
}

void Food::printfFood(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	gotoxy(hOut,x,y);
	printf("F");
}