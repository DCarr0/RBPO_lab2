#include <math.h>
import student2;
double RBPO::Lab2::Variant24::Task3::f2(double x)
{
	double f;
	if (x > 3.6) f = 45 * x * x + 5;
	else
		f = 5 * x / (10 * x * x + 1);
	return f;
}