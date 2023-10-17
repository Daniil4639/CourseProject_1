﻿#include "PolishEntry.h"

long PolishEntry::factorial(long arg) {
	long res = 1;
	for (int i = 2; i <= arg; i++) {
		res *= i;
	}

	return res;
}

bool PolishEntry::isDelim(char simb) {
	return simb == ' ';
}

bool PolishEntry::isOperator(char symb) {
	return symb == '+' || symb == '-' || symb == '*'
		|| symb == '/' || symb == '%' || symb == '^' || symb == 'l' || symb == 'n'
		|| symb == 'f' || symb == 'a' || symb == 's' || symb == 'c' || symb == 't'
		|| symb == 'q' || symb == 'u' || symb == 'i' || symb == 'o' || symb == 'p';
}

int PolishEntry::priority(char op) {
    switch (op) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
    case '%':
        return 2;
    case '^':
        return 3;
    case 'n': // ln
    case 'f': // fact
    case 'a': // abs
    case 's': // sin
    case 'c': // cos
    case 't': // tg
    case 'q': // ctg
    case 'u': // asin
    case 'i': // acos
    case 'o': // atg
    case 'p': // actg
        return 4;
    default:
        return -1;
    }
}

bool PolishEntry::processOperator(vector<string>& values, char op, double arg) {
    string rStr, lStr;
    double r, l = 1;

    rStr = values[values.size() - 1];
    values.pop_back();

    if (rStr == "x") {
        r = arg;
    }
    else if (rStr == "π") {
        r = M_PI;
    }
    else if (rStr == "e") {
        r = M_E;
    }
    else {
        r = stod(rStr);
    }

    if (op != 'n' && op != 'a' && op != 'f'
        && op != 's' && op != 'c' && op != 't' && op != 'q'
        && op != 'u' && op != 'i' && op != 'o' && op != 'p') {

        lStr = values[values.size() - 1];
        values.pop_back();

        if (lStr == "x") {
            l = arg;
        }
        else if (lStr == "π") {
            l = M_PI;
        }
        else if (lStr == "e") {
            l = M_E;
        }
        else {
            l = stod(lStr);
        }
    }

    switch (op) {
    case '+':
        values.push_back(to_string(l + r));
        break;
    case '-':
        values.push_back(to_string(l - r));
        break;
    case '*':
        values.push_back(to_string(l * r));
        break;
    case '/':
        values.push_back(to_string(l / r));
        break;
    case '%':
        values.push_back(to_string((int)l % (int)r));
        break;
    case '^':
        values.push_back(to_string(pow(l ,r)));
        break;
    case 'n':
        values.push_back(to_string(log(r)));
        break;
    case 'a':
        values.push_back(to_string(abs(r)));
        break;
    case 'f':
        values.push_back(to_string(factorial(r)));
        break;
    case 's':
        values.push_back(to_string(sin(r)));
        break;
    case 'c':
        values.push_back(to_string(cos(r)));
        break;
    case 't':
        values.push_back(to_string(tan(r)));
        break;
    case 'q':
        values.push_back(to_string(1.0 / tan(r)));
        break;
    case 'u':
        values.push_back(to_string(asin(r)));
        break;
    case 'i':
        values.push_back(to_string(acos(r)));
        break;
    case 'o':
        values.push_back(to_string(atan(r)));
        break;
    case 'p':
        values.push_back(to_string(M_PI/2 - atan(r)));
        break;
    }

    return true;
}

float PolishEntry::eval(string s, double arg) {
    vector<string> values;
    vector<char> op;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (isDelim(c)) {
            continue;
        }
        if (c == '(') {
            op.push_back(c);
        }
        else if (c == ')') {
            while (op[op.size() - 1] != '(') {
                processOperator(values, op[op.size() - 1], arg);
                op.pop_back();
            }
            op.pop_back();
        }
        else if (isOperator(c)) {
            if (c == 'l' && s[i + 1] == 'n') {
                c == 'n';
            }
            else if (c == 'c' && s[i + 1] == 't') {
                c = 'q';
            }
            else if (c == 'a' && s[i + 1] == 's') {
                c = 'u';
            }
            else if (c == 'a' && s[i + 1] == 'c' && s[i+2] == 'o') {
                c = 'i';
            }
            else if (c == 'a' && s[i + 1] == 't') {
                c = 'o';
            }
            else if (c == 'a' && s[i + 1] == 'c' && s[i + 2] == 't') {
                c = 'p';
            }

            if (c == '-') {
                bool minusOk = false;
                int j = i - 1;
                while (j >= 0) {
                    if (s[j] == ' ') {
                        j--;
                    }
                    else if (s[j] >= '0' && s[j] <= '9' || s[j] == 'x') {
                        minusOk = true;
                        break;
                    }
                    else {
                        break;
                    }
                }

                if (!minusOk) {
                    values.push_back("0");
                }
            }

            while (!op.empty() && priority(op[op.size() - 1]) >= priority(c)) {
                processOperator(values, op[op.size() - 1], arg);
                op.pop_back();
            }
            op.push_back(c);

            if (c == 'a' || c == 's' || c == 'c' || c == 'q' || c == 'o') {
                i += 2;
            }
            else if (c == 'f' || c == 'u' || c == 'i' || c == 'p') {
                i += 3;
            }
            else if (c == 'n' || c == 't') {
                i++;
            }
        }
        else if (c == 'x') {
            values.push_back("x");
        }
        else if (c == 'π') {
            values.push_back("π");
        }
        else if (c == 'e') {
            values.push_back("e");
        }
        else {
            string operand = "";
            while (i < s.length() && (s[i] >= '0' && s[i] <= '9' || s[i] == '.')) {
                operand += s[i];
                i++;
            }
            i--;
            values.push_back(operand);
        }
    }

    while (!op.empty()) {
        processOperator(values, op[op.size() - 1], arg);
        op.pop_back();
    }

    string res = values[0];
    if (res == "x") {
        return arg;
    }
    else if (res == "e") {
        return M_E;
    }
    else if (res == "π") {
        return M_PI;
    }
    else {
        return stod(res);
    }

}