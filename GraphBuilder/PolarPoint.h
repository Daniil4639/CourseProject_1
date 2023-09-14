#pragma once
#include <iostream>

using std::pair;
using std::make_pair;

class PolarPoint {
private:
	float r;
	float deg;
protected:
public:
	PolarPoint(float, float);
	PolarPoint(const PolarPoint&);
	~PolarPoint();
	void setParams(float, float);
	pair<float, float> getParams();
	pair<float, float> transform();
};