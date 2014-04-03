#include "Frame.h"
#include "gotoprint.h"
#include "Food.h"
#include "Snake.h"
#include <iostream>
#include <conio.h>
int main(){
 char ch=77;
   int j=0;
 HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 Frame frame1=Frame(4,4,20,20);
 frame1.draw_frame();
 Snake snake=Snake();
 Food food=Food();
 food.generateFood(frame1);
 while(1)
 { 
	  j=0;
	   if(_kbhit())
  {/* 判断是否按下键盘，如果按下，ch接收键盘输入 */
	  
   ch=_getch();
   if(_kbhit())
   {/* 如果长按键盘，则加速 */
    Sleep(20);
	j=1;
   
   }
	   }	
	   
	   while(1){
		   if(snake.foodOnSnake(food)){
			   food.generateFood(frame1);
			   continue;
		   }
		   else{
			   food.printfFood();
			   break;
		   }
	   }
		 snake.changeDirect(ch);
		 if(snake.eatFood(food))
			 food.generateFood(frame1);
		 snake.printSnake();
		 if(snake.hitItself()||snake.hitWall(frame1)){
			 gotoxy(hOut,6,6); 
			 printf("Game Over");
			 Sleep(2000);
	         break;
		 } 
		 if(j==0){
		 Sleep(300);
		 }
		 else {
			 Sleep(50);}
 }
}
