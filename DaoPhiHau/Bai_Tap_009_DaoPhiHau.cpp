//KHAI BAO THU VIEN.
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
#include <time.h>


// KHAI BAO CAU TRUC.
typedef struct
{
	char Ho[50];
	char Ten_Lot[50];
	char Ten[50];
	
}Ho_Ten;

typedef struct
{
	int Ngay;
	int Thang;
	int Nam;
}Ngay_Sinh;

typedef struct
{
	char Ma_Nhan_Vien[6];
	Ho_Ten Ho_Ten_NV;
	int Gioi_Tinh;
	Ngay_Sinh Ngay_Sinh_NV;
	int Luong;
}Nhan_Vien;


// MAT NA HAM.
void Nhap_Nhan_Vien(Nhan_Vien &nv);
void Xuat_Nhan_Vien(Nhan_Vien nv);
void Nhap_DS_Nhan_Vien(Nhan_Vien *DS_NV, int &n);
void Xuat_DS_Nhan_Vien(Nhan_Vien *DS_NV, int n);
void Dem_Nhan_Vien(Nhan_Vien *DS_NV, int n);
void Xuat_DS_Nhan_Vien_Nu(Nhan_Vien *DS_NV, int n);
void Menu();



// CAI DAT HAM.
void Nhap_Nhan_Vien(Nhan_Vien &nv)
{
	
	// LAY NAM MOI NHAT.
	time_t current_time;
    struct tm *local_time;

    
    current_time = time(NULL);

    
    local_time = localtime(&current_time);

    
    int Nam_Hien_Tai = local_time->tm_year + 1900;
    
    // RANG BUOC DIEU KIEN.
	do {
		printf("\nMa nhan vien: ");
		scanf("%s", &nv.Ma_Nhan_Vien);
		
		if(strlen(nv.Ma_Nhan_Vien) <= 0 || strlen(nv.Ma_Nhan_Vien) > 6)
		{
			printf("\nMA NHAN VIEN QUA DAI! MOI NHAP LAI\n");
		}
		
	} while(strlen(nv.Ma_Nhan_Vien) <= 0 || strlen(nv.Ma_Nhan_Vien) > 6);
	
	do {
		printf("\nHo cua nhan vien: ");
		scanf("%s", &nv.Ho_Ten_NV.Ho);
		
		if(strlen(nv.Ho_Ten_NV.Ho) <= 0 || strlen(nv.Ho_Ten_NV.Ho) > 50)
		{
			printf("\nHO CUA NHAN VIEN QUA DAI! MOI NHAP LAI\n");
		}
		
	} while(strlen(nv.Ho_Ten_NV.Ho) <= 0 || strlen(nv.Ho_Ten_NV.Ho) > 50);
	
	do {
		printf("\nTen lot cua nhan vien: ");
		scanf("%s", &nv.Ho_Ten_NV.Ten_Lot);
		
		if(strlen(nv.Ho_Ten_NV.Ten_Lot) <= 0 || strlen(nv.Ho_Ten_NV.Ten_Lot) > 50)
		{
			printf("\nTEN LOT CUA NHAN VIEN QUA DAI! MOI NHAP LAI\n");
		}
		
	} while(strlen(nv.Ho_Ten_NV.Ten_Lot) <= 0 || strlen(nv.Ho_Ten_NV.Ten_Lot) > 50);
	
	
	do {
		printf("\nTen cua nhan vien: ");
		scanf("%s", &nv.Ho_Ten_NV.Ten);
		
		if(strlen(nv.Ho_Ten_NV.Ten) <= 0 || strlen(nv.Ho_Ten_NV.Ten) > 50)
		{
			printf("\nTEN CUA NHAN VIEN QUA DAI! MOI NHAP LAI\n");
		}
		
	} while(strlen(nv.Ho_Ten_NV.Ten) <= 0 || strlen(nv.Ho_Ten_NV.Ten) > 50);
	
	do {
		printf("\n1: Nam | 0: Nu: ");
		scanf("%d", &nv.Gioi_Tinh);
		
		if(nv.Gioi_Tinh != 0 && nv.Gioi_Tinh != 1)
		{
			printf("\nGIOI TINH KHONG PHU HOP! MOI NHAP LAI\n");
		}
		
	} while(nv.Gioi_Tinh != 0 && nv.Gioi_Tinh != 1);
	
	do 
	{
		printf("\nNgay sinh: ");
		scanf("%d", &nv.Ngay_Sinh_NV.Ngay);
		
		if(nv.Ngay_Sinh_NV.Ngay <= 0 || nv.Ngay_Sinh_NV.Ngay >= 31)
		{
			printf("\nNGAY SINH KHONG PHU HOP! MOI NHAP LAI\n");
		}
	} while(nv.Ngay_Sinh_NV.Ngay <= 0 || nv.Ngay_Sinh_NV.Ngay >= 31);
	
	do 
	{
		printf("\nThang sinh: ");
		scanf("%d", &nv.Ngay_Sinh_NV.Thang);
		
		if(nv.Ngay_Sinh_NV.Thang <= 0 || nv.Ngay_Sinh_NV.Thang > 12)
		{
			printf("\nTHANG SINH KHONG PHU HOP! MOI NHAP LAI\n");
		}
	} while(nv.Ngay_Sinh_NV.Thang <= 0 || nv.Ngay_Sinh_NV.Thang > 12);
	
	do 
	{
		printf("\nNam sinh: ");
		scanf("%d", &nv.Ngay_Sinh_NV.Nam);
		
		if(nv.Ngay_Sinh_NV.Nam <= 1920 || nv.Ngay_Sinh_NV.Nam > 2050 || nv.Ngay_Sinh_NV.Nam >= Nam_Hien_Tai)
		{
			printf("\nNAM SINH KHONG PHU HOP! MOI NHAP LAI\n");
		}
	} while(nv.Ngay_Sinh_NV.Nam <= 1920 || nv.Ngay_Sinh_NV.Nam > 2050 || nv.Ngay_Sinh_NV.Nam >= Nam_Hien_Tai);
	
	printf("\nMuc luong: ");
	scanf("%d", &nv.Luong);
	
	
}


void Xuat_Nhan_Vien(Nhan_Vien nv)
{
	printf("\n\n\nMA NHAN VIEN: %s", nv.Ma_Nhan_Vien);
	printf("\nHO CUA NHAN VIEN: %s", nv.Ho_Ten_NV.Ho);
	printf("\nTEN LOT CUA NHAN VIEN: %s", nv.Ho_Ten_NV.Ten_Lot);
	printf("\nTEN CUA NHAN VIEN: %s", nv.Ho_Ten_NV.Ten);
	
	
	switch(nv.Gioi_Tinh)
	{
		case 1:
		{
		
			printf("\nGIOI TINH CUA NHAN VIEN: NAM");
		}
		break;
		
		case 0:
		{
			
			printf("\nGIOI TINH CUA NHAN VIEN: NU");
		}
		break;
	
		default:
			
		break;
	}
	
	printf("\nNGAY/THANG/NAM SINH: %d / %d / %d ", nv.Ngay_Sinh_NV.Ngay, nv.Ngay_Sinh_NV.Thang, nv.Ngay_Sinh_NV.Nam);
	printf("\nMUC LUONG: %d", nv.Luong);

}

void Nhap_DS_Nhan_Vien(Nhan_Vien *DS_NV, int &n)
{
	printf("\nMOI NHAP SO LUONG NHAN VIEN: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; ++i)
	{
		Nhap_Nhan_Vien(*(DS_NV + i));	
	}
}

void Xuat_DS_Nhan_Vien(Nhan_Vien *DS_NV, int n)
{
	
	for(int i = 0; i < n; ++i)
	{
		Xuat_Nhan_Vien(*(DS_NV + i));	
	}
}

void Dem_Nhan_Vien(Nhan_Vien *DS_NV, int n)
{
	
	// LAY NAM MOI NHAT.
	time_t current_time;
    struct tm *local_time;

    
    current_time = time(NULL);

    
    local_time = localtime(&current_time);

    
    int Nam_Hien_Tai = local_time->tm_year + 1900;
    
    
    for(int i = 0; i < n; i++)
    {
    	// CONG THUC DE TINH TUOI NHAN VIEN.
    	int Tuoi_Nhan_Vien = Nam_Hien_Tai - (DS_NV + i)->Ngay_Sinh_NV.Nam;
    	
    	if(Tuoi_Nhan_Vien >= 50)
    	{
    		printf("\n--------------------------------\n");
    		Xuat_Nhan_Vien(*(DS_NV + i));
    		return;
		}
		
	}
	printf("\n--------------------------------\n");
	printf("\nKHONG TIM THAY NHAN VIEN DUOI 50 TUOI HET\n");
}

void Xuat_DS_Nhan_Vien_Nu(Nhan_Vien *DS_NV, int n)
{
	for(int i = 0; i < n; i++)
    {
    	
    	if((DS_NV + i)->Gioi_Tinh == 0)
    	{
    		printf("\n--------------------------------\n");
    		Xuat_Nhan_Vien(*(DS_NV + i));
    		return;
		}
		
	}
	printf("\n--------------------------------\n");
	printf("\nKHONG TIM THAY NHAN VIEN NU TRONG DANH SACH NAY\n");
}

void Menu()
{
	Nhan_Vien *ds;
	ds = new Nhan_Vien;
	
	int so_luong = 0;
	int chon = 0;
	
	
	do
	{
		printf("\n1. NHAP DANH SACH NHAN VIEN \n");
		printf("\n2. XUAT DANH SACH NHAN VIEN \n");
		printf("\n3. DEM SO LUONG NHAN VIEN LON HON 50 TUOI \n");
		printf("\n4. XUAT DANH SACH NHAN VIEN NU \n");
		printf("\n5. THOAT \n");
		printf("\nMOI NHAP LUA CHON: ");
		scanf("%d", &chon);
		
	
		switch(chon)
		{
			case 1:
			{
				Nhap_DS_Nhan_Vien(ds, so_luong);
			}	
			break;
			
			case 2:
			{
				printf("\nDANH SACH SINH VIEN \n");
				printf("%d", so_luong);
				Xuat_DS_Nhan_Vien(ds, so_luong);	
			}	
			break;
			
			case 3:
			{
				Dem_Nhan_Vien(ds, so_luong);
			}
			break;
			
			case 4:
			{
				Xuat_DS_Nhan_Vien_Nu(ds, so_luong);
			}
			break;
			
			default:
			break; 
		}
		
		if (chon == 5)
		{
			printf("\nCAM ON THAY CO DA SU DUNG CHUONG TRINH CUA EM\n");
			printf("\nDAO PHI HAU - LOP 18DTHE3 ");	
		}	
	}while(chon != 5);
	
	delete []ds;
}




// THUC THI HAM.
int main()
{
	Menu();
	return 0;
}
