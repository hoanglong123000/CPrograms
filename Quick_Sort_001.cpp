// Bài tập 02

// KHAI BÁO THƯ VIỆN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#define MAX 100


// MẶT NẠ HÀM
void Nhap_So_Phan_Tu(int &n);
void Khoi_Tao_Day_So(int &n, int A[]);
void Khoi_Tao_Day_So_Ngau_Nhien(int &n, int A[]);
void Xuat_Ket_Qua(int n, int A[]);
void Them_Phan_Tu_Tai_Vi_Tri_J(int &n, int A[], int &phantu, int &vitri);
void Cap_Nhat_Phan_Tu_Tai_Vi_Tri_J(int n, int A[], int &phantu, int &vitri);
void Xoa_Phan_Tu_Trong_Day_Tai_Vi_Tri_J(int &n, int A[], int &vitri);
void Tim_Phan_Tu_X(int n, int A[], int &phantu);
void Sap_Xep_Day_So_Tang_Dan(int n, int A[]);
void Sap_Xep_Day_So_Giam_Dan(int n, int A[]);
void Hoan_Doi(int &GiaTri_1, int &GiaTri_2);
void Menu_Lua_Chon();



// CÀI ĐẶT HÀM
void Menu_Lua_Chon()
{
	int n;
	int A[MAX];
	int choice;
	int choice_01;
	int choice_02;
	int choice_03;
	int phantu;
	int vitri;
	
	do {
		
		printf("\n");
		printf("\n");
		printf("\n---------- CHUONG TRINH THAO TAC TREN MANG MOT CHIEU --------\n");
		printf(" 1: Cai dat mang\n");
		
		printf("\n");
		printf(" 2: Thao tac tren mang \n");
		
		printf("\n");
		printf(" 3: Kiem tra thong tin mang \n");
		
		
		printf("\n");
		printf(" 4: Thoat \n");
		printf("\n Moi ban chon? (1|2|3|4): ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			
			Nhap_So_Phan_Tu(n);
			
			printf("\n	Lua chon de khoi tao: ");
			printf("\n ---1. Khoi tao day so theo y minh.---");
		    printf("\n ---2. Khoi tao day so ngau nhien.---\n");
		    printf("\n Lua chon cua ban: ");
			scanf("%d", &choice_01);
			
			switch(choice_01)
			{

			    case 1:
				{
					printf("1. Khoi tao day so theo y minh.");
					Khoi_Tao_Day_So(n, A);
				}
				break;
				
				case 2:
				{
					printf("2. Khoi tao day so ngau nhien.");
					Khoi_Tao_Day_So_Ngau_Nhien(n, A);
				}
				break;
				
				default:
				{
					printf("	He thong dang tu dong thoat khoi... Xin cho....	");
				}
					break;
			}
			
			Xuat_Ket_Qua(n, A);	
		}
		
		if(choice == 2)
		{
			printf("\n ---1. Them mot phan tu vao vi tri bat ky---\n");
			printf("\n ---2. Cap nhat lai phan tu vao vi tri bat ky---\n");
			printf("\n ---3. Xoa phan tu tai vi tri bat ky---\n");
			printf("\n ---4. Tim phan tu---\n");
			printf("\n ---5. Sap xep phan tu tang dan---\n");
			printf("\n ---6. Sap xep phan giam dan---\n");
			printf("\n");
			printf("\n ---Xin moi chon: ");
			scanf("%d", &choice_03);
			switch(choice_03)
			{
				case 1:
					{
						Them_Phan_Tu_Tai_Vi_Tri_J(n, A, phantu, vitri);
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				case 2:
					{
						Cap_Nhat_Phan_Tu_Tai_Vi_Tri_J(n, A, phantu, vitri);
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				case 3:
					{
						Xoa_Phan_Tu_Trong_Day_Tai_Vi_Tri_J(n, A, vitri);
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				case 4:
					{
						Tim_Phan_Tu_X(n, A, phantu);
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				case 5:
					{
						Sap_Xep_Day_So_Tang_Dan(n, A);
						printf("\n			Mang sap xep tang dan	\n");
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				case 6:
					{
						Sap_Xep_Day_So_Giam_Dan(n, A);
						printf("\n			Mang sap xep giam dan	\n");
						Xuat_Ket_Qua(n, A);
					}
				break;
				
				default:
					{
							
					}
				break;
			}
			
			
			
		}
		
		if(choice == 3)
		{
			Xuat_Ket_Qua(n, A);
		}
		
	} while(choice != 4);
	
	printf("\n-------- CAM ON THAY/CO DA SU DUNG THU CHUONG TRINH THAO TAC TREN MANG 1 CHIEU CUA EM ----- \n");
	printf("\n-------- XIN CHUC THAY/CO MOT NGAY TOT LANH A ------ <3 \n");
	printf("\n-------- DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3 ----------\n");
}

void Nhap_So_Phan_Tu(int &n)
{
	printf("	Nhap so phan tu: ");
	scanf("%d", &n);
	
	printf("\n	So phan tu la: %d", n);
}

void Khoi_Tao_Day_So(int &n, int A[])
{
	for(int i = 0; i < n; i++)
    {
        printf("\n	Nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
        printf("\n");
    }
    
//    for(int i = 0; i < n; i++)
//    {
//    	printf("\n %d", A[i]);
//	}
}



void Khoi_Tao_Day_So_Ngau_Nhien(int &n, int A[])
{
	srand(time(NULL));
	int randNum = 0;
	
	for(int i = 0; i < n; i++)
	{
	    randNum = rand() % 100000;
	    A[i] = randNum;
	    
	}
	
}

void Xuat_Ket_Qua(int n, int A[])
{
	printf("\n \n 	So luong phan tu trong mang: %d \n", n);
	
	
	printf("\n			Mang A: \n");
	for(int i = 0; i < n; i++)
	{
		printf(" %d		", A[i]);
	}
}

void Them_Phan_Tu_Tai_Vi_Tri_J(int &n, int A[], int &phantu, int &vitri)
{
	printf("\n	Nhap phan tu can them: ", &phantu);
	scanf("%d", &phantu);
	
	printf("\n	Nhap vi tri can chen vao: ", &vitri);
	scanf("%d", &vitri);
	
	if(vitri > n)
	{
		printf("\n=======DU LIEU NAM NGOAI VUNG CUA MANG! MOI BAN NHAP LAI========\n");
		return;
	}
	else
	{
		n++;
	
		for (int i = n - 1; i >= vitri; i--)
		{
			A[i] = A[i - 1];
		}
	        
		
		A[vitri - 1] = phantu;
	}
	
}

void Cap_Nhat_Phan_Tu_Tai_Vi_Tri_J(int n, int A[], int &phantu, int &vitri)
{
	
    printf("\n	Nhap vi tri can cap nhat:");
    scanf("%d", &vitri);
    
    
    printf("\n	Nhap gia tri thay doi:");
    scanf("%d", &phantu);
    
    if(vitri < 0)
    {
        printf("\n==========MANG RONG=========");
        
    }
	if(vitri >= n)
    {
        printf("\n=======DU LIEU NAM NGOAI VUNG CUA MANG! MOI BAN NHAP LAI========\n");	
        return;
    }
    
    for(int i = 0; i < n; i++)
    {
		if(vitri == i)
        {
            A[i] = phantu;
        }    
    }
}

void Tim_Phan_Tu_X(int n, int A[], int &phantu)
{
	printf("\n	Nhap phan tu can tim: ");
	scanf("%d", &phantu);
	
	
	for(int i = 0; i < n; i++)
	{
		if(A[i] == phantu)
		{
			printf("\n	Vi tri cua phan tu tim duoc: %d", i);
		}	
	}
		
}

void Xoa_Phan_Tu_Trong_Day_Tai_Vi_Tri_J(int &n, int A[], int &vitri)
{
	printf("\n		Nhap vi tri can xoa: ");
	scanf("%d", &vitri);
	
	if(vitri == -1)
	{
		printf("\n=======VI TRI KHONG TON TAI======");
			
	}
	
	
	
	for(int i = vitri; i < n -1; i++)
	{
		A[i] = A[i + 1];
	
	}
	n--;
}

void Hoan_Doi(int &GiaTri_1, int &GiaTri_2)
{
	int Bien_Tam = GiaTri_1;
	GiaTri_1 = GiaTri_2;
	GiaTri_2 = Bien_Tam;
}

// Ap dung thuat toan Sap xep noi bot (Bubble Sort) tang dan.
// Thoi gian xu ly: O(n^2).

void Sap_Xep_Day_So_Tang_Dan(int n, int A[])
{
 	for (int i = 0; i < n; i++)
   {
       for (int j = n-1; j > i; j--)
       {
           if(A[j] < A[j-1])
               Hoan_Doi(A[j], A[j-1]);
       }
   }
}

// Ap dung thuat toan Sap xep noi bot (Bubble Sort) giam dan.
// Thoi gian xu ly: O(n^2).

void Sap_Xep_Day_So_Giam_Dan(int n, int A[])
{
	for (int i = 0; i < n; i++)
   {
       for (int j = n-1; j > i; j--)
       {
           if(A[j] > A[j-1])
               Hoan_Doi(A[j], A[j-1]);
       }
   }
	
}

// HÀM THỰC THI


int main()
{
	Menu_Lua_Chon();
	
	return 0;
}