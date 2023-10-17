#pragma once
#include <vector>
#include "PolarPoint.h"

using std::vector;
using System::Drawing::Graphics;
using System::Windows::Forms::PictureBox;

class Window {
private:
protected:
	int width, height;
public:
	int startX, startY;

	Window() = default;
	Window(int, int);
	Window(const Window&);
	~Window();
	void changeLocation(int, int);
	void addParams(int, int);
};