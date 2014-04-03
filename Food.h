#ifndef GUARD_Food_h
#define GUARD_Food_h

#include "Frame.h"

class Food{
private:
	int x;
	int y;
public:
	Food(){}
	int getFoodX() {return x; }
	int getFoodY() {return y; }
	void generateFood(Frame&);
	void printfFood();
};

#endif