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
		x[0]=6;     //初始化蛇的横坐标 
		y[0]=6;  //初始化蛇的竖坐标 
		speed=300;      //初始化蛇的速度为300ms
		length=5;      //初始化蛇的长度为3节
		for(int i=1;i<length;i++)
		{/* 依次得到蛇身、蛇头的坐标 */
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