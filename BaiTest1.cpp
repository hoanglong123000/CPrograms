// 1. PHẦN KHAI BÁO.
// 1.1 PHẦN KHAI BÁO THƯ VIỆN.
#include <stdio.h>
#include <math.h>
#define MAX 100

// 1.2 PHẦN KHAI BÁO BIẾN.


// 1.3 PHẦN KHAI BÁO HÀM.
int ham_01(int &a);
int ham_02(int a);
void ham_03(int a, int b);

// 2. PHẦN CÀI ĐẶT CÁC HÀM.
int ham_01(int &a)
{
	a = -a;
	return a;
}

int ham_02(int a)
{
	int b = ham_01(a);
	return b;
}

void ham_03(int a, int b)
{
	int c = 0;
	c = a + b;
	
	printf("Ket qua cua c: %d", c);
	printf("\n");
}

// 3. PHẦN THỰC THI - HÀM MAIN().

int main()
{
	int a = 5;
	int b = ham_02(a);

	
	printf("Ket qua cua a: %d", a);
	printf("\n");
	printf("Ket qua cua b: %d", b);
	printf("\n");
	ham_03(a, b);
	
	return 0;
}