module;
#include <math.h>
export module student3:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant24
		{
			namespace Task4
			{
				export double f2(double x)
				{
					double f;
					if (x > 3.6) f = 45 * x * x + 5;
					else
						f = 5 * x / (10 * x * x + 1);
					return f;
				}
			}
		}
	}
}
