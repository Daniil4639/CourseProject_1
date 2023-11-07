#pragma once
#include <vector>
#include <string>
#include "PolishException.h"
#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536;

using namespace std;

class PolishEntry {
private:
    long factorial(long);

    bool isDelim(char);

    bool isOperator(char);

    int priority(char);

    bool processOperator(vector<string>&, char, double);
protected:
public:
    float eval(string, double);
};