#pragma once
#include <string>

using std::string;

class Equation {
private:
protected:
public:
	Equation() = default;
	float solve(string, float);
	bool trySolve(string);
};