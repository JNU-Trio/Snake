#include "gotoprint.h"
#include "Frame.h"
#include <iostream>
#include <Windows.h>


void Frame::draw_frame()
{
	int i;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);  //������ʾ���������
 gotoxy(hOut,FrameX+2*Frame_width+3,FrameY+13);  //��ӡѡ��˵�
 printf("Esc �˳���Ϸ");
 gotoxy(hOut,FrameX+2*Frame_width+3,FrameY+15);
 printf("���������������");
 gotoxy(hOut,FrameX,FrameY);       //��ӡ���
 printf("�X");
 gotoxy(hOut,FrameX+2*Frame_width-2,FrameY);
 printf("�[");
 gotoxy(hOut,FrameX,FrameY+Frame_height);
 printf("�^");
 gotoxy(hOut,FrameX+2*Frame_width-2,FrameY+Frame_height);
 printf("�a");
 for(i=2;i<2*Frame_width-2;i+=2)
 {
  gotoxy(hOut,FrameX+i,FrameY);
  printf("�T");         //��ӡ�Ϻ��
 }
 for(i=2;i<2*Frame_width-2;i+=2)
 {
  gotoxy(hOut,FrameX+i,FrameY+Frame_height);
  printf("�T");         //��ӡ�º��
 }
 for(i=1;i<Frame_height;i++)
 {
  gotoxy(hOut,FrameX,FrameY+i); 
  printf("�U");         //��ӡ������
 }
 for(i=1;i<Frame_height;i++)
 {
  gotoxy(hOut,FrameX+2*Frame_width-2,FrameY+i); 
  printf("�U");         //��ӡ������
 }

}