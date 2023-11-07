#pragma once
#include "Window.h"
#include "PolarPoint.h"
#include <string>

using System::Windows::Forms::TextBox;
using System::Windows::Forms::Label;
using std::to_string;
using std::string;
using System::String;

class GraphWindow : public Window {
private:
protected:
	float maxCoordinate;
	bool hasCicle;
	vector<bool> lineIsChecked;
	vector <pair<int, pair<int, int>>> colors;
	vector < vector<PolarPoint*>> lines;
public:
	float scale;
	int lastLineInd;

	GraphWindow();
	GraphWindow(int, int);
	GraphWindow(GraphWindow&);
	~GraphWindow();
	void addLine(string, System::Drawing::Color, float, float);
	void addParams(int, int);
	void GraphWindow::reDraw(Graphics^, PictureBox^, float);
	void rotateAll(float deg);
	void changeChecked(int);
	void deleteExtra(vector<int>&);
};