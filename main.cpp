#include "Frame.h"
#include "gotoprint.h"
#include "Snake.h"
#include <iostream>
#include <conio.h>
int main(){
 char ch=77;
 HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 Frame frame1=Frame(4,4,20,20);
 frame1.draw_frame();
 Snake snake=Snake();
 while(1)
 {
	   if(_kbhit())
  {/* �ж��Ƿ��¼��̣�������£�ch���ռ������� */
   ch=_getch();
   if(_kbhit())
   {/* ����������̣������ */
    Sleep(20);
   
   }
  }
		 snake.changeDirect(ch);
		 snake.printSnake();
		 if(snake.hitItself()||snake.hitWall(frame1)){
			 gotoxy(hOut,6,6); 
			 printf("Game Over");
			 Sleep(2000);
	         break;
		 } 
		 Sleep(300);
	 
 }
}
