#include "PolarPoint.h"

PolarPoint::PolarPoint(float r = 0, float deg = 0) : GraphPoint(r * cos(deg), r * sin(deg)) {
	this->r = r;
	this->deg = deg;
}

PolarPoint::PolarPoint(PolarPoint& copy) : GraphPoint(copy){
	this->r = copy.r;
	this->deg = copy.deg;
}

PolarPoint::PolarPoint(PolarPoint* copy) : GraphPoint(copy) {
	this->r = copy->r;
	this->deg = copy->deg;
}

void PolarPoint::setParams(float r, float deg) {
	this->r = r;
	this->deg = deg;
	GraphPoint::setParams(r * cos(deg), r * sin(deg));
}

pair<float, float> PolarPoint::getParams() {
	return make_pair(this->r, this->deg);
}

pair<float, float> PolarPoint::transform() {
	return GraphPoint::getCoordinates();
}

void PolarPoint::rotate(float deg) {
	this->deg += deg;
	setParams(this->r, this->deg);
}

PolarPoint::~PolarPoint() {}