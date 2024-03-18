// KHAI BAO THU VIEN.
#include <stdio.h>
#include <conio.h>


// MAT NA HAM.



// CAI DAT HAM.



// THUC THI HAM.
int main()
{
	int *a;
	
	a = new int;
	
	*a = 1000;
	
	printf("\nGia tri cua *a = %d", *a);
	delete a;
	
	
	a = new int;
	
	*a = 10;
	
	printf("\nGia tri cua *a = %d", *a);
	delete a;
	
	
	return 0;
	
}



