#pragma once
#include <vector>
#include "PolarPoint.h"

using std::vector;
using System::Drawing::Graphics;

class Window {
private:
	int width, height;
	int startX, startY;
	int lastLineInd;
	vector < vector<pair<float, float>>> lines;
protected:
public:
	Window(int, int);
	Window(const Window&);
	~Window();
	void changeLocation(int, int);
	void addLine();
	void drawLine(Graphics^);
};