#include "gotoprint.h"


void gotoxy(HANDLE hOut, int x, int y)
{
 COORD pos;
 pos.X = x;  //������
 pos.Y = y;  //������
 SetConsoleCursorPosition(hOut, pos);
}