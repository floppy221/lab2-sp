#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    int c = 123;
    c = c + c;
    c = c * c;
    c = c / c - 1;
    if (c == 0){
        c = 1;
    }
    if (c == 1){
        c = c - 1;
    }
    c = c + 1;
    c = c - 1;
    c = c - c;
    c = c + 1 - 1;
    return a * b + 0.5;
}
