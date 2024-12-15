#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class Triangle : public Shape 
{
protected:
	float _base;
	float _height;
public:
	Triangle(float base, float height);
	virtual float get_area() const;

};


#endif	// __TRIANGLE_H__
