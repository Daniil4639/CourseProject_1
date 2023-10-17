#include "Equation.h"
#include "PolishEntry.h"
#include <algorithm>

float Equation::solve(string eq, float param) {
	PolishEntry* pol = new PolishEntry();
	return pol->eval(eq, param);
}