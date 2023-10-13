#include <math.h>
module student2;

double RBPO::Lab2::Variant24::Task3::a(int i)
{
	return pow(-1, i) * ((i * i + 1) / (static_cast<double>(i) * i * i + 3));
}