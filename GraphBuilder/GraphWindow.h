#pragma once
#include "Window.h"
#include "PolarPoint.h"

using System::Windows::Forms::TextBox;
using System::Windows::Forms::Label;

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
	void addLine(TextBox^, System::Drawing::Color);
	void addParams(int, int);
	void GraphWindow::reDraw(Graphics^, PictureBox^, float);
	void rotateAll(float deg);
	void changeChecked(int);
	void deleteExtra(vector<int>&);
};