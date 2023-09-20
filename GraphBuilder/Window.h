#pragma once
#include <vector>
#include "PolarPoint.h"

using std::vector;
using System::Drawing::Graphics;
using System::Windows::Forms::PictureBox;

class Window {
private:
	int width, height;
	int startX, startY;
	int scale;
	int lastLineInd = -1;
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
	void addParams(int, int);
	void reDraw(System::Drawing::Color,  Graphics^, PictureBox^);
};