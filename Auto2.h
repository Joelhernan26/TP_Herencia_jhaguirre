#ifndef AUTO2_H
#define AUTO2_H
#include <ctime>
#include "Auto.h"

//CLASE HIJA 2
class Auto2 : public Auto{	
	
public:
	
	Auto2(int v, int x0,int y0);
	Auto2(){};
	void Cambio();
	void update();
	
};


#endif

