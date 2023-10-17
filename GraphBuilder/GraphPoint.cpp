#include "GraphPoint.h"

GraphPoint::GraphPoint(float x, float y) {
	X = x;
	Y = y;
}

GraphPoint::GraphPoint(GraphPoint& copy) {
	this->X = copy.X;
	this->Y = copy.Y;
}

GraphPoint::GraphPoint(GraphPoint* copy) {
	this->X = copy->X;
	this->Y = copy->Y;
}

GraphPoint::~GraphPoint() {
}

pair<float, float> GraphPoint::getCoordinates() {
	return make_pair(X, Y);
}

void GraphPoint::setParams(float x, float y) {
	X = x;
	Y = y;
}