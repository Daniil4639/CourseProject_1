#include "Window.h"
#include "GraphBuilder.h"

using System::Drawing::Drawing2D::GraphicsPath;
using System::Drawing::Pen;
using System::Drawing::Color;

Window::Window(int width = 0, int height = 0) {
	lastLineInd = -1;
	startX = width / 2;
	startY = height / 2;
	this->width = width;
	this->height = height;
}

Window::Window(const Window& copy) {
	lastLineInd = copy.lastLineInd;
	startX = copy.startX;
	startY = copy.startY;
	lines = copy.lines;
	width = copy.width;
	height = copy.height;
}

Window::~Window() {
	for (int i = 0; i < lines.size(); i++) {
		lines[i].~vector();
	}
	lines.~vector();
}

void Window::changeLocation(int addX, int addY) {
	startX += addX;
	startY -= addY;
	for (int i = 0; i < lines.size(); i++) {
		for (int j = 0; j < lines[i].size(); j++) {
			lines[i][j].first += addX;
			lines[i][j].second -= addY;
		}
	}
}

void Window::addLine() {
	Equation eq;

	vector<pair<float, float>> newLine;
	for (int i = 0; i <= 4096; i++) {
		PolarPoint point(eq.solve(i * M_PI / 180), i * M_PI / 180);
		pair<float, float> res = point.transform();
		if (i >= 360 && sqrt((res.first - newLine[0].first) * (res.first - newLine[0].first) + (res.second - newLine[0].second) * (res.second - newLine[0].second)) < 0.0001) {
			newLine.push_back(newLine[0]);
			break;
		}
		if (res.first <= -startX) {
			newLine.push_back(make_pair(0, res.second));
		}
		else if (res.first >= (width - startX - 1)) {
			newLine.push_back(make_pair(width - startX - 1, res.second));
		}
		else if (res.second <= -startY) {
			newLine.push_back(make_pair(res.first, 0));
		}
		else if (res.second >= (height - startY - 1)) {
			newLine.push_back(make_pair(res.first, height - startY - 1));
		}
		else {
			newLine.push_back(res);
			continue;
		}

		if (i > 720) {
			break;
		}
	}

	this->lines.push_back(newLine);
	this->lastLineInd++;
}

void Window::drawLine(Graphics^ gr) {
	Pen ^pen = gcnew Pen(Color::Red);
	GraphicsPath^ path = gcnew GraphicsPath();

	int scale = 10;

	for (int i = 0; i < lines[lastLineInd].size() - 1; i++) {
		path->AddLine(lines[lastLineInd][i].first * scale + startX, -lines[lastLineInd][i].second * scale + startY, lines[lastLineInd][i + 1].first * scale + startX, -lines[lastLineInd][i + 1].second * scale + startY);
	}

	gr->DrawPath(pen, path);
}