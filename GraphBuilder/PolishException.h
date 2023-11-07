#pragma once

#include <exception>
#include <string>

using namespace std;

class PolishException {
public:
	class EvalException : public exception {
	private:
	protected:
		string message;
	public:
		EvalException(string message);
		virtual char const* what() const throw();
	};

	class WrongEquationException : public exception {
	private:
	protected:
		string message;
	public:
		WrongEquationException(string message);
		virtual char const* what() const throw();
	};
};