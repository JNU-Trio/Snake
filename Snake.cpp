#include "Snake.h"
#include <iostream>
#include <Windows.h>

void Snake::printSnake(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=0;i<length;i++)
	{
	  gotoxy(hOut,x[i],y[i]);
	  if(i==length-1)
		  printf("H");       //��ӡ��ͷ
	else
		  printf("X");

	}
}

void Snake::snakeMove(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	gotoxy(hOut,x[0],y[0]);
	printf("  ");       /* �����β*/
	for(int i=1;i<length;i++)
	{/* ��һ�ڵ���������ȡ��ǰһ�ڵ����� */
		x[i-1]=x[i];
		y[i-1]=y[i];
	}
}

bool Snake::hitItself(){
	for(int i=0;i<length-1;i++){
		if(x[length-1]==x[i]&&y[length-1]==y[i])
			return TRUE;
	}
	return FALSE;
}

bool Snake::hitWall(Frame& frame){
	if(y[length-1]==frame.getFrameY()-1||y[length-1]==frame.getFrameY()+frame.getFrameH()-1||
		x[length-1]==frame.getFrameX()-1||x[length-1]==frame.getFrameX()+frame.getFrameW()*2-1)
		return TRUE;
	return FALSE;
}

void Snake::changeDirect(char ch){
	switch(ch){
			case 'w':{
							snakeMove();
							y[length-1]-=1;
							break;}
			case 's':{
							snakeMove();
							y[length-1]+=1;
							break;}
			case 'a':{
							 snakeMove();
							 x[length-1]-=1;
							 break;}
			case 'd':{
							 snakeMove();
							 x[length-1]+=1;
							 break;}
					}
}