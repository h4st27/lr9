#include "func.h"
#define _USE_MATH_DEFINES   
#include <math.h>
using namespace std;

double func(int x, int y)
{
	double m;
	m = x - pow(pow(x, 2.) / 6., 1. / 5.) + (pow(x, 2. * y) / 120) + exp(3. * x) + (2. / (x - (8. * y)));
	return m;
}

double func2(int c)
{
	int PI = 3.14;
	double z;
	z = (1. + tan(c) + tan(c / 2.) + tan(255 / 180 * PI)) / (pow(sin(c), 3.) * cos(3. * c));
	return z;
}

double func3(double a, double b)
{
	double k;
	k = a - b;
	double j, i;
	j = modf(k, &i);
	return j;
}