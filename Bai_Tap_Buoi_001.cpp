// Chương trình giải phương trình bậc 1.

// KHAI BÁO THƯ VIỆN
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// MẶT NẠ HÀM
void Menu();
void nhap_he_so(float &a, float &b);
int giai_PTB1(float a, float b, float &x); // 1: 1 nghiem, 0: vo nghiem, -1: vo so nghiem.
void Xuat_Ket_Qua(float a, float b);


// CÀI ĐẶT HÀM

// 1. Menu: chạy chương trình 1 lần, nhiều test.
void Menu()
{
	float a, b, x;
	int choice;
	
	do {
		printf("\n");
		printf("1: Giai phuong ax + b = 0");
		printf("\n");
		printf("2: Thoat\n");
		printf("Moi ban chon? (1|2): ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			nhap_he_so(a, b);
			Xuat_Ket_Qua(a, b);
		}
	} while(choice != 2);
}

// 2. nhap_he_so: Nhập hệ số a, b.
void nhap_he_so(float &a, float &b)
{
	printf("Nhap a =");
	scanf("%f", &a);
	
	printf("Nhap b =");
	scanf("%f", &b);
}

// 3.giai_PTB1: Giải phương trình bậc 1.
int giai_PTB1(float a, float b, float &x)
{
	if(a == 0)
	{
		if (b == 0) return -1;
		else return 0;
	}
	else
	{
		x = -b/a;
		return 1;
	}
}

// 4.Xuat_Ket_Qua: Xuất kết quả của phương trình.
void Xuat_Ket_Qua(float a, float b)
{
	float x;
	int op = giai_PTB1(a, b, x);
	
	switch(op)
	{
		case -1:
			printf("Phuong trinh VSN");
			break;
		case 0:
			printf("Phuong trinh VN");
			break;
		case 1:
			printf("Phuong trinh co nghiem x= %f", x);
			break;	
			
	}
	
}


// HÀM THỰC THI
int main()
{
	Menu();
	return 0;
}