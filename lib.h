#include <stdlib.h>

int total_times = 0;

float bigger(float y, float z)
{
	total_times++;
	if (y > z)
	{
		return y;
	}
	return z;
}

float Gia_Tri_Nho_Nhat(float x, float y)
{
	total_times++;
	if (x > y)
	{
		return y;
	}
	return x;
}