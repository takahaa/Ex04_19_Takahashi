#include "getVolumeSurface.h"

//*surface = surface�̃A�h���X�ɂ���l
int getVolumeSurface(double x, double y, double z, double *surface)
{
	*surface = ((x * y) + (y * z) + (x * z)) * 2;
	return x * y * z;
}