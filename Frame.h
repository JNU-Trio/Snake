#ifndef GUARD_Frame_h
#define GUARD_Frame_h

#include "gotoprint.h"
#include <iostream>
class Frame {
public:
	Frame(int X, int Y, int W, int H){
	FrameX=X;
	FrameY=Y;
	Frame_width=W;
	Frame_height=H;

}
	int getFrameX() {return FrameX;}
	int getFrameY() {return FrameY;}
	int getFrameH() {return Frame_height;}
	int getFrameW() {return Frame_width;}
 	void draw_frame();
private:
	int FrameX;
	int FrameY;
	int Frame_height;
	int Frame_width;
};
#endif