// KHAI BAO THU VIEN
#include <stdio.h>
#include <conio.h>
#include <time.h>
#define MAX 100
#include <string.h>
#include <ctype.h>

// CAI DAT STRUCT
typedef struct
{
	char Ho[20];
	char Ten_Lot[30];
	char Ten[30];
	
}HoTen;

typedef struct
{
	char Ma_Sach[10];
	char Ten_Sach[100];
	HoTen Ho_Ten_Tac_Gia;
	int Nam_Xuat_Ban;
	float Gia;
}QuyenSach;


// MAT NA HAM
void Nhap_Quyen_Sach(QuyenSach &qs);
void Nhap_DS_Quyen_Sach(QuyenSach ds[], int &n);
void Xuat_Quyen_Sach();
void Xuat_DS_Quyen_Sach(QuyenSach ds[], int n);
void Tim_Ten_Quyen_Sach(QuyenSach ds[], int n);
void Tim_Gia_Quyen_Sach_Cao_Nhat(QuyenSach ds[], int n);
void Cap_Nhat_Gia_Sach(QuyenSach ds[], int n);
void Menu();


// CAI DAT HAM
void Nhap_Quyen_Sach(QuyenSach &qs)
{
	printf("\nMOI NHAP MA SACH: ");
	scanf(" %s", &qs.Ma_Sach);
	
	printf("\nMOI NHAP TEN SACH: ");
	scanf(" %s", &qs.Ten_Sach);
	
	printf("\nMOI NHAP HO CUA TAC GIA: ");
	scanf(" %s", &qs.Ho_Ten_Tac_Gia.Ho);
	
	printf("\nMOI NHAP TEN O GIUA CUA TAC GIA: ");
	scanf(" %s", &qs.Ho_Ten_Tac_Gia.Ten_Lot);
	
	printf("\nMOI NHAP TEN CUA TAC GIA: ");
	scanf(" %s", &qs.Ho_Ten_Tac_Gia.Ten);
	
	printf("\nMOI NHAP NAM XUAT BAN CUA SACH: ");
	scanf("%d", &qs.Nam_Xuat_Ban);
	
	printf("\nMOI NHAP GIA CUA SACH: ");
	scanf("%f", &qs.Gia);
	
}

void Nhap_DS_Quyen_Sach(QuyenSach ds[], int &n)
{

	printf("\nNHAP SO LUONG QUYEN SACH: ");
	

	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		printf("\n\nQUYEN THU %d", i + 1);
		Nhap_Quyen_Sach(ds[i]);
	}
}

void Xuat_Quyen_Sach(QuyenSach qs)
{
	
	printf("\nMA CUA QUYEN SACH:  %s", qs.Ma_Sach);
	printf("\nTEN CUA QUYEN SACH: %s", qs.Ten_Sach);
	printf("\nHO CUA TAC GIA: %s", qs.Ho_Ten_Tac_Gia.Ho);
	printf("\nTEN LOT CUA TAC GIA: %s", qs.Ho_Ten_Tac_Gia.Ten_Lot);
	printf("\nTEN CUA TAC GIA: %s", qs.Ho_Ten_Tac_Gia.Ten);
	printf("\nNAM XUAT BAN CUA SACH: %d", qs.Nam_Xuat_Ban);
	printf("\nGIA CUA SACH: %.2f", qs.Gia);
}

void Xuat_DS_Quyen_Sach(QuyenSach ds[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\n\n QUYEN THU %d", i + 1);
		Xuat_Quyen_Sach(ds[i]);
		
	}
}



void Tim_Ten_Quyen_Sach(QuyenSach ds[], int n)
{
	char Ten_Sach_Can_Tim[50];	
	printf("\n\nNHAP TEN SACH CAN TIM: ");
	scanf(" %s", &Ten_Sach_Can_Tim);
	

	
	for(int i = 0; i < n; i++)
	{
		// Buoc 1: Chuyen ca hai ten sach ve dang chu thuong truoc.

		
		// Buoc 2: Bat dau thuc hien so sanh.
		if(strcmp(ds[i].Ten_Sach, Ten_Sach_Can_Tim) == 0)
		{
			Xuat_Quyen_Sach(ds[i]);
		}
		
	}
	return;
	
}

void Tim_Gia_Quyen_Sach_Cao_Nhat(QuyenSach ds[], int n)
{
	int Gia = 0;
	
	
	for(int i = 0; i < n; i++)
	{
		if(ds[i].Gia >= Gia)
		{
			Gia = ds[i].Gia;
		}
	}
	
	for(int j = 0; j < n; j++)
	{
		if(ds[j].Gia == Gia)
		{
			Xuat_Quyen_Sach(ds[j]);
		}
	}
}


void Cap_Nhat_Gia_Sach(QuyenSach ds[], int n)
{
	char Ma_Sach[10];
	printf("\nMOI BAN NHAP MA SACH: ");
	scanf(" %s", &Ma_Sach);
	int Gia = 0;
	
	
	
	for(int i = 0; i < n; i++)
	{
		if(strcmp(Ma_Sach, ds[i].Ma_Sach) == 0)
		{
			printf("\nMOI BAN CAP NHAT LAI GIA CUA QUYEN SACH: ");
			scanf("%f", &ds[i].Gia);
			
			Xuat_Quyen_Sach(ds[i]);
		}
	}
}




void Menu()
{
	QuyenSach ds[MAX];
	int So_Luong;
	int choice;
	
	
	
	do
	{
		printf("\n");
		printf("\n");
		printf("\n---------------CHUONG TRINH QUAN LY SACH CUA DAO PHI HAU-------------\n");
		
		printf("\n1. NHAP DANH SACH BAO GOM QUYEN SACH \n");
		printf("\n2. XUAT DANH SACH BAO GOM CAC QUYEN SACH \n");
		printf("\n3. XUAT DANH SACH BAO GOM CAC QUYEN SACH TIM THEO TEN \n");
		printf("\n4. XUAT THONG TIN CUA CUON SACH CO GIA CAO NHAT \n");
		printf("\n5. CAP NHAT LAI GIA CUA QUYEN SACH \n");
		printf("\n6. THOAT \n");
		printf("\n");
		
		printf("\n MOI THAY/CO LUA CHON: ");
		scanf("%d", &choice);
		
		if(choice == 1)
		{
			Nhap_DS_Quyen_Sach(ds, So_Luong);
		}
		
		if(choice == 2)
		{
			Xuat_DS_Quyen_Sach(ds, So_Luong);
		}
		
		if(choice == 3)
		{
			Tim_Ten_Quyen_Sach(ds, So_Luong);
		}
		
		if(choice == 4)
		{
			Tim_Gia_Quyen_Sach_Cao_Nhat(ds, So_Luong);
		}
		
		if(choice == 5)
		{
			Cap_Nhat_Gia_Sach(ds, So_Luong);
		}
		
		if(choice == 6)
		{
			printf("\n---CAM ON THAY/CO DA SU DUNG CHUONG TRINH CUA EM---\n");
			printf("\n----DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3----\n");
		}
		
		
	} while (choice != 6);
	
	
}

// THUC THI HAM

int main()
{
	Menu();
	return 0;
}