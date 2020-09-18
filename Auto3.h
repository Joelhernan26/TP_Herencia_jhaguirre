#ifndef AUTO3_H
#define AUTO3_H
#include <ctime>
#include "Auto.h"

//CLASE HIJA 3
class Auto3 : public Auto {

public:
	
	Auto3(int v, int x0,int y0);
	Auto3(){};
	void Colorear();
	void update();
	
	
	
};


#endif

