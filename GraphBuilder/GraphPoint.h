#pragma once
#include <iostream>

using std::pair;
using std::make_pair;

class GraphPoint {
private:
protected:
	float X;
	float Y;
public:

	GraphPoint() = default;
	GraphPoint(float, float);
	GraphPoint(GraphPoint&);
	GraphPoint(GraphPoint*);
	~GraphPoint();
	pair<float, float> getCoordinates();
	void setParams(float, float);
};