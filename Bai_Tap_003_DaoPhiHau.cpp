// KHAI BAO THU VIEN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#define MAX 100

// MAT NA HAM
void Nhap_Ma_Tran(int a[][100], int m, int n);
void Xuat_Ma_Tran(int a[][100], int m, int n);
void Nhap_Ma_Tran_Ngau_Nhien(int a[][100], int m, int n);
void Tim_Phan_Tu(int a[][100], int m, int n, int x);

void Menu();


// CAI DAT HAM
void Menu()
{
	int a[100][100];
	int m, n;
	do{
        printf("\nNHAP SO DONG: \n");
        scanf("%d", &m);
        if(m<1 || m>100)
        {
            printf("\n ERROR! MOI BAN NHAP LAI: \n");
        }
    }while(m<1 || m>100);
    do{
        printf("\nNHAP SO COT: \n");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("\n ERROR! MOI BAN NHAP LAI: \n");
        }
    }while(n<1 || n>100);
    int choice;
    do {
    	
    	printf("\n");
		printf("\n");
		
		printf(" 1: NHAP TAY\n");
		
		printf("\n");
		printf(" 2: KHOI TAO PHAN TU NGAU NHIEN \n");
		
		printf("\n");
		printf(" 3: TIM PHAN TU X TREN MA TRAN \n");
		printf("\n");
	    printf("\n 4: THOAT \n");
		printf("\n MOI BAN LUA CHON? 1|2|3: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("\nNHAP MA TRAN:\n");
		    Nhap_Ma_Tran(a, m, n);
		    printf("\nMA TRAN SAU KHI NHAP LA:\n");
		    Xuat_Ma_Tran(a, m, n);
		}
		if (choice == 2)
		{
			printf("\nPHAT SINH NGAU NHIEN:\n");
			Nhap_Ma_Tran_Ngau_Nhien(a, m, n);
			printf("\nMA TRAN SAU KHI NHAP LA:\n");
		    Xuat_Ma_Tran(a, m, n);
		}
		
		if (choice == 3)
		{
			int x;
			printf("\n NHAP PHAN TU CAN TIM: ");
			scanf("%d", &x);
			
			Tim_Phan_Tu(a, m, n, x);
		    
		}
		
		if (choice == 4)
		{
			printf("\n---CAM ON THAY/CO DA SU DUNG CHUONG TRINH CUA EM---\n");
			printf("\n----DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3----\n");
		}
	} while (choice != 4);

    
}

void Nhap_Ma_Tran(int a[][100], int m, int n)
{
	for(int i =0; i< m; i++){
    
        for(int j =0 ; j<n; j++){
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}


void Xuat_Ma_Tran(int a[][100], int m, int n)
{
	for(int i =0; i< m; i++){
        
        for(int j =0 ; j<n; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void Nhap_Ma_Tran_Ngau_Nhien(int a[][100], int m, int n)
{
    srand(time(NULL));
	int randNum = 0;
	
		for(int i =0; i< m; i++){
    
        for(int j =0 ; j<n; j++){
        	randNum = rand() % 50;
           a[i][j] = randNum;
        }
    }
}


void Tim_Phan_Tu(int a[][100], int m, int n, int x)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == x)
				{
					printf("\n Vi tri dong cua phan tu la: %d", i);
					printf("\n Vi tri cot cua phan tu la: %d", j);
					return;
				}
		}
	}
	printf("\n-------ERROR! PHAN TU KHONG TON TAI-------\n");
	return;
}

// THUC THI HAM
int main()
{
	Menu();
	return 0;
}
