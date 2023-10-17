#include "Window.h"
#include "GraphBuilder.h"

using System::Drawing::Drawing2D::GraphicsPath;
using System::Drawing::Pen;
using System::Drawing::Color;

Window::Window(int width, int height) {
	startX = width / 2;
	startY = height / 2;
	this->width = width;
	this->height = height;
}

Window::Window(const Window& copy) {
	startX = copy.startX;
	startY = copy.startY;
	width = copy.width;
	height = copy.height;
}

Window::~Window() {
}

void Window::changeLocation(int addX, int addY) {
	startX += addX;
	startY -= addY;
}

void Window::addParams(int width, int height) {
	this->startX = width / 2;
	this->startY = height / 2;
	this->width = width;
	this->height = height;
}