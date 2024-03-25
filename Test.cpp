#include <stdio.h>
#include "lib.h"

int main(void)
{
	float val1, val2, ret;
	printf("Enter two float values: ");
	scanf("%f%f", &val1, &val2);
	ret = bigger(val1, val2);
	printf("%f is the biggest\n", ret);
	
	float Nho_Nhat = Gia_Tri_Nho_Nhat(val1, val2);
	printf("%f la nho nhat\n", Nho_Nhat);
	return 0;
}