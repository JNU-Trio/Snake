#ifndef GUARD_Snake_h
#define GUARD_Snake_h

#include "Frame.h"
#include "Food.h"
class Snake{
private:
	int length;
	int speed;
	int x[100];
	int y[100];
	int tail[2];
public:
	Snake(){
		x[0]=6;     //��ʼ���ߵĺ����� 
		y[0]=6;  //��ʼ���ߵ������� 
		speed=300;      //��ʼ���ߵ��ٶ�Ϊ300ms
		length=5;      //��ʼ���ߵĳ���Ϊ3��
		for(int i=1;i<length;i++)
		{/* ���εõ�������ͷ������ */
		x[i]=x[i-1]+1;
		y[i]=y[i-1];
 } 
	}
	void printSnake();
	void changeDirect(char );
	void snakeMove();
	bool hitWall(Frame& );
	bool hitItself();
	bool eatFood(Food&);
	bool foodOnSnake(Food&);

};


#endif