#pragma once
#include <iostream>
#include "GraphPoint.h"

using std::pair;
using std::make_pair;
using System::Drawing::Point;

class PolarPoint : GraphPoint{
private:
	float r;
	float deg;
protected:
public:
	PolarPoint(float, float);
	PolarPoint(PolarPoint&);
	PolarPoint(PolarPoint*);
	~PolarPoint();
	void setParams(float, float);
	pair<float, float> getParams();
	pair<float, float> transform();
	void rotate(float);
};