
// KHAI BAO THU VIEN.
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 1000000
#define RANGE 1000



// MAT NA HAM.
void Nhap_Ma_Tran(int *a, int &n, int &m);
void Xuat_Ma_Tran(int *a, int n, int m);
void Xuat_Ma_Tran_Chan_Le(int *a, int n, int m);
void Tong_Cot(int *a, int n, int m, int &k);
void Tong_Dong(int *a, int n, int m, int &k);
void Tim_So_X(int *a, int n, int m, int &x);
void Trung_Binh_Cong(int *a, int n, int m);
void Tong_Duong_Cheo_Chinh_Vuong(int *a, int n, int m);
void Tong_Duong_Cheo_Phu_Vuong(int *a, int n, int m);
void Xuat_Nam_Duoi_Duong_Cheo_Chinh(int *a, int n, int m);
void Xuat_Nam_Tren_Duong_Cheo_Phu(int *a, int n, int m);
void delay(int giay);
bool Kiem_Tra_Vuong(int *a, int n, int m);
void Menu();



// CAI DAT HAM.
void Nhap_Ma_Tran(int *a, int &n, int &m)
{
	do {
		printf("\nXIN MOI NHAP SO DONG ");
		scanf("%d", &n);
		
		if (n <= 0)
		{
			printf("\nSO DONG KHONG HOP LE! XIN MOI NHAP LAI\n");
			
		}
	} while(n <= 0);
	
	do 
	{
		printf("\nXIN MOI NHAP SO COT ");
		scanf("%d", &m);
		
		if (m <= 0)
		{
			printf("\nSO COT KHONG HOP LE! XIN MOI NHAP LAI\n");
		}
		
	} while(m <= 0);
	
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			k = i * n + j;
			*(a + k) = rand() % RANGE;
		}
	}
	
}

void Xuat_Ma_Tran(int *a, int n, int m)
{
	printf("\nMA TRAN %dx%d: \n", n, m);
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			k = i * n + j;
			printf("%4d", *(a+k));
		}
		printf("\n");
	}
}

void Xuat_Ma_Tran_Chan_Le(int *a, int n, int m)
{
	int k = 0;
	for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
        	
        	k = i * n + j;
        	
        	if(*(a + k) % 2 == 0)
        	{
        		printf(" %4d", *(a + k));
			}
			
			else
			{
				char c = 'X';
				printf(" %4c", c);
			}
            
        }
        printf("\n");
    }
}

void Tong_Cot(int *a, int n, int m, int &k)
{
	printf("\n\n   NHAP SO COT CAN TINH:");
	scanf("%d", &k);
	
	int Ket_Qua = 0;
	
	int vitri = 0;
	
	for(int i = 0; i < n; i++)
	{
		vitri = i * n + k;
		Ket_Qua = Ket_Qua + *(a + vitri);
	}
	
	printf("\nKET QUA TONG CUA COT %d LA: %d\n", k, Ket_Qua);
	
}

void Tong_Dong(int *a, int n, int m, int &k)
{
	printf("\n\n   NHAP SO DONG CAN TINH:");
	scanf("%d", &k);
	
	int Ket_Qua = 0;
	int vitri = 0;
	
	for(int i = 0; i < n; i++)
	{
		vitri = k * n + i;
		Ket_Qua = Ket_Qua + *(a + vitri);
	}
	
	printf("\nKET QUA TONG CUA DONG %d LA: %d\n", k, Ket_Qua);
	
}

void Tim_So_X(int *a, int n, int m, int &x)
{
	printf("\n----NHAP SO X CAN TIM: ");
	scanf("%d", &x);
	
	int k = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			k = i * n + j;
			
			if (*(a + k) == x)
				{
					printf("\n    1 \n");
					printf("\n Vi tri dong cua phan tu la: %d", i);
					printf("\n Vi tri cot cua phan tu la: %d", j);
					return;
				}
		}
	}
	printf("\n 0 \n");
	return;
}

void Trung_Binh_Cong(int *a, int n, int m)
{
	int Ket_Qua = 0;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			k = i * n + j;
			Ket_Qua += *(a + k);
		}
	}
	float KQ_Trung_Binh = (float) Ket_Qua/ (m*n);
	printf("\n\nTrung binh cong tren ma tran la: %2f", KQ_Trung_Binh);
}


bool Kiem_Tra_Vuong(int *a, int n, int m)
{
	if (n == m)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Tong_Duong_Cheo_Chinh_Vuong(int *a, int n, int m)
{
	if(Kiem_Tra_Vuong(a, n, m))
	{
		int k = 0;
		int Ket_Qua = 0;
		for (int i = 0; i < n; i++) 
		{
	      for (int j = 0; j < m; j++)
		  {
	         if (i == j)
	         	k = i * n + j;
	            Ket_Qua = Ket_Qua + *(a + k);
	      }
		}
		printf("\n----------KET QUA CUA TONG DUONG CHEO CHINH: %d", Ket_Qua);
	}
	else
	{
		printf("\n-----------------------ERROR! MA TRAN KHONG VUONG! NEN KHONG THE TINH DUOC DUONG CHEO CHINH TREN MA TRAN-----------------------\n");
	}
}

void Tong_Duong_Cheo_Phu_Vuong(int *a, int n, int m)
{
	if(Kiem_Tra_Vuong(a, n, m))
	{
		int tong = 0;
		int k = 0;
		for(int i = 0; i < m; i++)
		{
				int k = i * m + (m - 1 - i);
				tong += *(a + k);
		}
		printf("\n----------KET QUA CUA TONG DUONG CHEO PHU: %d", tong);
	}
	else
	{
		printf("\n-----------------------ERROR! MA TRAN KHONG VUONG! NEN KHONG THE TINH DUOC DUONG CHEO PHU TREN MA TRAN-----------------------\n");
	}
}

void Xuat_Nam_Tren_Duong_Cheo_Phu(int *a, int n, int m)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{        
         for (int j = 0; j < m; j++)
         {
         	k = i * n + j;
		 	// Khong bao gom cac phan tu tren duong cheo phu.
        	if ((i + j) < (n - 1)) // (dong + cot) < (n -1)
        	{
        		printf(" %4d", *(a + k));
            	
			}
			else
			{
				printf(" %4d", 0);
			}
				
				
		 }
		 printf("\n");
    }
}


void Xuat_Nam_Duoi_Duong_Cheo_Chinh(int *a, int n, int m)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{        
         for (int j = 0; j < m; j++)
         {
         	k = i * n + j;
		 	// Khong bao gom cac phan tu tren duong cheo chinh.
        	if (i > j) // dong > cot.
        	{
        		printf(" %4d", *(a + k));
            	
			}
			else
			{
				printf(" %4d", 0);
			}
				
				
		 }
		 printf("\n");
    }
}





void Menu(){
	
	int choice,n,m;
	int *a;
	a=new int[MAX];
	
	do{
		system("cls");
		printf("\n1. NHAP MA TRAN\n");
		printf("\n2. XUAT MA TRAN\n");
		printf("\n3. XUAT MA TRAN CHAN LE\n");
		printf("\n4. XUAT KET QUA TINH SO COT TREN MA TRAN\n");
		printf("\n5. XUAT KET QUA TINH SO DONG TREN MA TRAN\n");
		printf("\n6. TIM SO X TREN MA TRAN\n");
		printf("\n7. TRUNG BINH CONG TREN MA TRAN\n");
		printf("\n8. TONG DUONG CHEO CHINH TREN MA TRAN\n");
		printf("\n9. TONG DUONG CHEO PHU TREN MA TRAN\n");
		printf("\n10. CAC PHAN TU NAM DUOI DUONG CHEO CHINH LA \n");
		printf("\n11. CAC PHAN TU NAM TREN DUONG CHEO PHU LA \n");
		printf("\n12. THOAT \n");
		
		printf("\nXIN MOI BAN CHON: ");
		scanf("%d",&choice);
		
		
		switch(choice) 
		{
		
			case 1: 
				Nhap_Ma_Tran(a, n, m);
				printf("\nTAO MA TRAN THANH CONG\n");
				break;
				
			case 2:  
				Xuat_Ma_Tran(a, n, m);
				break;
				
			case 3:
				Xuat_Ma_Tran_Chan_Le(a, n, m);
				break;
			
			case 4:
				printf("\n-----------TONG SO COT K TREN MA TRAN LA--------------\n");
				int k;
				Tong_Cot(a, n, m, k);
				break;
				
			case 5:
				printf("\n-----------TONG SO DONG K TREN MA TRAN LA--------------\n");
				int l;
				Tong_Dong(a, n, m, l);
				break;
				
			case 6:
				printf("\n---------TIM SO X TREN MA TRAN------------\n");
				int x;
				Tim_So_X(a, n, m, x);
				break;
			
			case 7:
				printf("\n---------TRUNG BINH CONG CUA CAC GIA TRI TREN MA TRAN------------\n");
				Trung_Binh_Cong(a, n, m);
				break;
				
			case 8:
				printf("\n---------TONG DUONG CHEO CHINH TREN MA TRAN------------\n");
				Tong_Duong_Cheo_Chinh_Vuong(a, n, m);
				break;
			
			case 9:
				printf("\n---------TONG DUONG CHEO PHU TREN MA TRAN------------\n");
				Tong_Duong_Cheo_Phu_Vuong(a, n, m);
				break;
				
			case 10:
				printf("\n---------CAC PHAN TU NAM DUOI DUONG CHEO CHINH LA------------\n");
				printf("\n\n");
				Xuat_Nam_Duoi_Duong_Cheo_Chinh(a, n, m);
				break;
			
			case 11:
				printf("\n---------CAC PHAN TU NAM TREN DUONG CHEO PHU LA------------\n");
				printf("\n\n");
				Xuat_Nam_Tren_Duong_Cheo_Phu(a, n, m);
				break;
			
			case 12:
				break;
		}
		
		if(choice != 12){
			printf("\nNHAN PHIM BAT KY DE TIEP TUC\n");
			getch();
		}
		
		if(choice == 12)
		{
			printf("\nCAM ON THAY/CO DA TUONG TAC VOI CHUONG TRINH CUA EM");
			printf("\n----DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3----\n");
		}
	}while(choice != 12);
	
	delete []a;           
	
}




// THUC THI HAM.
int main()
{
	Menu();
	return 0;
}