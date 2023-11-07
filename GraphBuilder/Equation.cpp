#include "Equation.h"
#include "PolishEntry.h"
#include <algorithm>

float Equation::solve(string eq, float param) {
	PolishEntry* pol = new PolishEntry();
	return pol->eval(eq, param);
}

bool Equation::trySolve(string eq) {
	PolishEntry* pol = new PolishEntry();
	
	try {
		pol->eval(eq, 1);
	}
	catch (PolishException::WrongEquationException wrEx) {
		return 0;
	}
	catch (exception) {
		return 0;
	}

	return 1;
}