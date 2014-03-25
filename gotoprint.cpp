#include "gotoprint.h"


void gotoxy(HANDLE hOut, int x, int y)
{
 COORD pos;
 pos.X = x;  //ºá×ø±ê
 pos.Y = y;  //×Ý×ø±ê
 SetConsoleCursorPosition(hOut, pos);
}