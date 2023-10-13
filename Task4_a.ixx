module;
#include <math.h>
export module student3:a;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant24
		{
			namespace Task4
			{
				double a(int i)
				{
					return pow(-1, i) * ((i * i + 1) / (static_cast<double>(i) * i * i + 3));
				}
			}
		}
	}
}
