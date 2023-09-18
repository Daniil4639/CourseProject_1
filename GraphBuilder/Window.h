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
	int scale;
	vector <pair<int,pair<int,int>>> colors;
	vector < vector<pair<float, float>>> lines;
protected:
public:
	Window() = default;
	Window(int, int);
	Window(const Window&);
	~Window();
	void changeLocation(int, int);
	void addLine();
	void drawLine(System::Drawing::Color, Graphics^);
	void addParams(int, int);
	void reDraw(Graphics^);
};