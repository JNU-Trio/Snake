#include "gotoprint.h"
#include "Frame.h"
#include <iostream>
#include <Windows.h>


void Frame::draw_frame()
{
	int i;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);  //定义显示器句柄变量
 gotoxy(hOut,FrameX+2*Frame_width+3,FrameY+13);  //打印选择菜单
 printf("Esc 退出游戏");
 gotoxy(hOut,FrameX+2*Frame_width+3,FrameY+15);
 printf("长按方向键：加速");
 gotoxy(hOut,FrameX,FrameY);       //打印框角
 printf("╔");
 gotoxy(hOut,FrameX+2*Frame_width-2,FrameY);
 printf("╗");
 gotoxy(hOut,FrameX,FrameY+Frame_height);
 printf("╚");
 gotoxy(hOut,FrameX+2*Frame_width-2,FrameY+Frame_height);
 printf("╝");
 for(i=2;i<2*Frame_width-2;i+=2)
 {
  gotoxy(hOut,FrameX+i,FrameY);
  printf("═");         //打印上横框
 }
 for(i=2;i<2*Frame_width-2;i+=2)
 {
  gotoxy(hOut,FrameX+i,FrameY+Frame_height);
  printf("═");         //打印下横框
 }
 for(i=1;i<Frame_height;i++)
 {
  gotoxy(hOut,FrameX,FrameY+i); 
  printf("║");         //打印左竖框
 }
 for(i=1;i<Frame_height;i++)
 {
  gotoxy(hOut,FrameX+2*Frame_width-2,FrameY+i); 
  printf("║");         //打印右竖框
 }

}