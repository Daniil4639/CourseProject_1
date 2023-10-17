#include "GraphWindow.h"
#include "Equation.h"
#include "GraphBuilder.h"
#include <iomanip>
#include <string>
#include <msclr\marshal_cppstd.h>

using System::Drawing::Pen;
using System::Drawing::Color;
using System::Drawing::Drawing2D::GraphicsPath;
using std::to_string;
using std::string;
using System::String;

GraphWindow::GraphWindow() : Window(){
	maxCoordinate = 1;
	hasCicle = false;
	scale = 0;
	lastLineInd = -1;
}

GraphWindow::GraphWindow(int width, int height) : Window(width, height) {
	maxCoordinate = 1;
	hasCicle = false;
	scale = 0;
	lastLineInd = -1;
}

GraphWindow::GraphWindow(GraphWindow& copy) : Window(copy) {
	maxCoordinate = copy.maxCoordinate;
	lastLineInd = copy.lastLineInd;
	lines = copy.lines;
	colors = copy.colors;
	lines = copy.lines;
	colors = copy.colors;
}

GraphWindow::~GraphWindow() {
	for (int i = 0; i < lines.size(); i++) {
		lines[i].~vector();
	}
	lines.~vector();
	colors.~vector();
}

void GraphWindow::addLine(TextBox^ text, System::Drawing::Color col) {
	Equation eq;
	lineIsChecked.push_back(false);
	this->colors.push_back(make_pair(col.R, make_pair(col.G, col.B)));

	vector<PolarPoint*> newLine;
	for (float i = 0; i <= 8192; i += 0.2) {

		string str = msclr::interop::marshal_as<std::string>(text->Text);

		PolarPoint* point = new PolarPoint(eq.solve(str, i * M_PI / 180), i * M_PI / 180);

		if (abs(point->transform().first) > maxCoordinate) {
			maxCoordinate = abs(point->transform().first);
		}

		if (abs(point->transform().second) > maxCoordinate) {
			maxCoordinate = abs(point->transform().second);
		}

		if (i >= 360 && sqrt((point->transform().first - newLine[0]->transform().first) * (point->transform().first - newLine[0]->transform().first) + (point->transform().second - newLine[0]->transform().second) * (point->transform().second - newLine[0]->transform().second)) < 0.0001) {
			newLine.push_back(new PolarPoint(newLine[0]));
			hasCicle = true;
			break;
		}

		newLine.push_back(point);
	}

	this->lines.push_back(newLine);
	this->lastLineInd++;
}

void GraphWindow::addParams(int width, int height) {
	Window::addParams(width, height);
	this->maxCoordinate = 1;
	hasCicle = false;
	this->scale = 0;
}

void GraphWindow::reDraw(Graphics^ gr, PictureBox^ picBox, float scale) {
	if (maxCoordinate > width / 2) {
		maxCoordinate = width / 2;
	}

	if (this->scale == 0) {
		if (hasCicle) {
			this->scale = max(1, min((width / 2) / maxCoordinate, (height / 2) / maxCoordinate) / 2);
		}
		else {
			this->scale = min((width / 2) / maxCoordinate, (height / 2) / maxCoordinate) + 2;
		}

		scale = this->scale;
	}

	GraphicsPath^ circle = gcnew GraphicsPath();
	for (float i = 0; i < 360; i += 0.2) {
		PolarPoint* circlePoint1 = new PolarPoint(1, i);
		PolarPoint* circlePoint2 = new PolarPoint(1, i + 0.2);

		circle->AddLine(circlePoint1->transform().first * scale + startX, -circlePoint1->transform().second * scale + startY, circlePoint2->transform().first * scale + startX, -circlePoint2->transform().second * scale + startY);
	}

	gr->DrawPath(gcnew Pen(Color::LightGray), circle);

	gr->DrawLine(gcnew Pen(Color::LightGray), Point(0, startY), Point(width, startY));
	gr->DrawLine(gcnew Pen(Color::LightGray), Point(startX, 0), Point(startX, height));

	for (int j = 0; j <= lastLineInd; j++) {
		Pen^ pen = gcnew Pen(Color::FromArgb(colors[j].first, colors[j].second.first, colors[j].second.second));
		GraphicsPath^ path = gcnew GraphicsPath();

		for (int i = 0; i < lines[j].size() - 1; i++) {
			path->AddLine(lines[j][i]->transform().first * scale + startX, -lines[j][i]->transform().second * scale + startY, lines[j][i + 1]->transform().first * scale + startX, -lines[j][i + 1]->transform().second * scale + startY);
		}

		//path->AddLine(startX, startY, startX + width / 3, startY + height / 3);

		gr->DrawPath(pen, path);
	}
}

void GraphWindow::rotateAll(float deg) {
	for (int i = 0; i <= lastLineInd; i++) {
		if (lineIsChecked[i]) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j]->rotate(deg * M_PI / 180);
			}
		}
	}
}

void GraphWindow::changeChecked(int index) {
	lineIsChecked[index] = !lineIsChecked[index];
}

void GraphWindow::deleteExtra(vector<int>& falsePositions) {

	lastLineInd -= falsePositions.size();

	for (int i = falsePositions.size() - 1; i >= 0; i--) {
		lineIsChecked.erase(lineIsChecked.begin() + falsePositions[i]);
		colors.erase(colors.begin() + falsePositions[i]);
		lines.erase(lines.begin() + falsePositions[i]);
	}
}