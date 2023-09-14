#include "PolarPoint.h"

PolarPoint::PolarPoint(float r = 0, float deg = 0) {
	this->r = r;
	this->deg = deg;
}

PolarPoint::PolarPoint(const PolarPoint& copy) {
	this->r = copy.r;
	this->deg = copy.deg;
}

void PolarPoint::setParams(float r, float deg) {
	this->r = r;
	this->deg = deg;
}

pair<float, float> PolarPoint::getParams() {
	return make_pair(this->r, this->deg);
}

pair<float, float> PolarPoint::transform() {
	float x = r * cos(deg);
	float y = r * sin(deg);
	return make_pair(x, y);
}

PolarPoint::~PolarPoint() {}