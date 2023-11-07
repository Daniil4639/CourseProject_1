#include "PolishException.h"

PolishException::EvalException::EvalException(string message) {
	this->message = message;
}

char const* PolishException::EvalException::what() const throw() {
	return message.c_str();
}

PolishException::WrongEquationException::WrongEquationException(string message) {
	this->message = message;
}

char const* PolishException::WrongEquationException::what() const throw() {
	return message.c_str();
}