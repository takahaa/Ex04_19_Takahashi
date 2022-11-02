#include "getVolumeSurface.h"

//*surface = surfaceのアドレスにある値
int getVolumeSurface(double x, double y, double z, double *surface)
{
	*surface = (x * y + y * z + x * z) * 2;
	return x * y * z;
}
