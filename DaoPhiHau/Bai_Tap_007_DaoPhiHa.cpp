// KHAI BAO THU VIEN
#include <stdio.h>
#include <time.h>
#define MAX 100
#define RANGE 100



// MAT NA HAM.

void NhapMang(int a[MAX], int &n);
void XuatMang(int a[MAX], int n);
void Menu();




// CAI DAT HAM.
void NhapMang(int a[MAX], int &n)
{
	printf("\nNhap so nguyen: ");
	scanf("%d", &n);
	
    for (int i = 0; i < n; i++) {
    	printf("\nPHAN TU THU %d: ", i);
        scanf("%d", &a[i]);
    }

}


void XuatMang(int a[MAX], int n)
{
	int temp = 0;
	
	printf("\nMANG SO NGUYEN DA NHAP:\n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void Menu()
{
	int a[MAX];
	int n;
	int choice = 0;
	
	
	
	do
	{
		printf("\n");
		printf("\n");
		printf("\n---------------CHUONG TRINH QUAN LY MANG CUA DAO PHI HAU-------------\n");
		
		printf("\n1. NHAP MANG \n");
		printf("\n2. XUAT MANG\n");
		printf("\n3. THOAT \n");
		printf("\n");
		
		printf("\nMOI NHAP: ");
		scanf("%d", &choice);
		
		
		if (choice == 1)
		{
			NhapMang(a, n);
		}
		
		if (choice == 2)
		{
			XuatMang(a, n);
		}
		
		if (choice == 3)
		{
			printf("\n---CAM ON THAY/CO DA SU DUNG CHUONG TRINH CUA EM---\n");
			printf("\n----DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3----\n");
		}
		
	}while(choice != 3);
	
}


// THUC THI HAM.
int main()
{
	Menu();
	return 0;
}



