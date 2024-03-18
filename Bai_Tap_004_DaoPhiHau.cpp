// KHAI BAO THU VIEN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#define MAX 100

// MAT NA HAM
void Nhap_Gia_Tri_Ngau_Nhien(int a[][MAX], int m, int n);
void Xuat_Ma_Tran(int a[][MAX], int m, int n);
void Xuat_Ma_Tran_Chan_Le(int a[][MAX], int m, int n);
void Tong_Cot(int a[][MAX], int m, int n, int &k);
void Tong_Dong(int a[][MAX], int m, int n, int &k);
void Tim_So_X(int a[][MAX], int m, int n, int &x);
void Trung_Binh_Cong(int a[][MAX], int m, int n);
void Tong_Duong_Cheo_Chinh_Vuong(int a[][MAX], int m, int n);
void Tong_Duong_Cheo_Phu_Vuong(int a[][MAX], int m, int n);
void Xuat_Nam_Duoi_Duong_Cheo_Chinh(int a[][MAX], int m, int n);
void Xuat_Nam_Tren_Duong_Cheo_Phu(int a[][MAX], int m, int n);
void Menu();
void delay(int giay);
bool Kiem_Tra_Vuong(int a[][MAX], int m, int n);



// CAI DAT HAM
void Menu()
{
	int a[MAX][MAX];
	int m, n;
	do{
        printf("\nNHAP SO DONG CUA MA TRAN: ");
        scanf("%d", &m);
        if(m < 1 || m > MAX)
        {
            printf("\n ERROR! MOI BAN NHAP LAI: \n");
        }
    }while(m < 1 || m > MAX);
    do{
        printf("\nNHAP SO COT CUA MA TRAN: ");
        scanf("%d", &n);
        if(n < 1 || n > MAX)
        {
            printf("\n ERROR! MOI BAN NHAP LAI: \n");
        }
    }while(n < 1 || n > MAX);
    int choice;
    
    printf("\n\n    LOADING... \n\n");
	delay(3);
	
    do {
    	
    	printf("\n");
		printf("\n");
		printf("\n---------------CHUONG TRINH THAO THAC MA TRAN-------------\n");
		
		
		printf("\n");
		printf(" 1: KHOI TAO PHAN TU NGAU NHIEN \n");
		
		printf("\n");
		printf(" 2: XUAT MA TRAN \n");
		
		printf("\n");
	    printf(" 3: XUAT MA TRAN CHAN LE \n");
	    
	    printf("\n");
	    printf("\n 4: TONG COT CUA MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 5: TONG DONG CUA MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 6: TIM SO X TREN MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 7: XUAT TRUNG BINH CONG TREN MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 8: XUAT TONG DUONG CHEO CHINH TREN  MA TRAN VUONG \n");
	    
	    printf("\n");
	    printf("\n 9: XUAT TONG DUONG CHEO PHU TREN MA TRAN VUONG \n");
	    
	    printf("\n");
	    printf("\n 10: XUAT CAC PHAN TU NAM DUOI DUONG CHEO CHINH TREN MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 11: XUAT CAC PHAN TU NAM TREN DUONG CHEO PHU TREN MA TRAN \n");
	    
	    printf("\n");
	    printf("\n 12: THOAT \n");
	    
		printf("\n MOI THAY/CO LUA CHON: ");
		scanf("%d", &choice);
		
		if (choice == 1)
		{
			printf("\n---------------PHAT SINH NGAU NHIEN-------------\n");
			printf("\n--------------MA TRAN SAU KHI DUOC SINH RA LA------------\n");
			Nhap_Gia_Tri_Ngau_Nhien(a, m, n);
			printf("\n\n");
		    Xuat_Ma_Tran(a, m, n);
		    printf("\n\n    LOADING... \n\n");
		    delay(3);
		   
		}
		
		if (choice == 2)
		{
			printf("\n------------------MA TRAN HIEN TAI DANG SAN CO LA---------------\n");
			printf("\n\n");
			Xuat_Ma_Tran(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 3)
		{
			printf("\n------------------MA TRAN CHAN LE LA---------------\n");
			printf("\n\n");
			Xuat_Ma_Tran_Chan_Le(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 4)
		{
			printf("\n-----------TONG SO COT K TREN MA TRAN LA--------------\n");
			int k;
			Tong_Cot(a, m, n, k);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 5)
		{
			printf("\n-----------TONG SO DONG K TREN MA TRAN LA--------------\n");
			int k;
			Tong_Dong(a, m, n, k);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 6)
		{
			printf("\n---------TIM SO X TREN MA TRAN------------\n");
			int x;
			Tim_So_X(a, m, n, x);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 7)
		{
			printf("\n---------TRUNG BINH CONG CUA CAC GIA TRI TREN MA TRAN------------\n");
			Trung_Binh_Cong(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 8)
		{
			printf("\n---------TONG DUONG CHEO CHINH TREN MA TRAN------------\n");
			Tong_Duong_Cheo_Chinh_Vuong(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 9)
		{
			printf("\n---------TONG DUONG CHEO PHU TREN MA TRAN------------\n");
			Tong_Duong_Cheo_Phu_Vuong(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 10)
		{
			printf("\n---------CAC PHAN TU NAM DUOI DUONG CHEO CHINH LA------------\n");
			printf("\n\n");
			Xuat_Nam_Duoi_Duong_Cheo_Chinh(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		if (choice == 11)
		{
			printf("\n---------CAC PHAN TU NAM TREN DUONG CHEO PHU LA------------\n");
			printf("\n\n");
			Xuat_Nam_Tren_Duong_Cheo_Phu(a, m, n);
			printf("\n\n	LOADING...	\n\n");
			delay(3);
		}
		
		
		
		if (choice == 12)
		{
			printf("\n---CAM ON THAY/CO DA SU DUNG CHUONG TRINH CUA EM---\n");
			printf("\n----DEVELOPED BY DAO PHI HAU - 1811010070 - 18DTHE3----\n");
		}
		
	} while (choice != 12);

    
}


void Nhap_Gia_Tri_Ngau_Nhien(int a[][MAX], int m, int n)
{
	srand(time(NULL));
	int randNum = 0;
	
		for(int i =0; i< m; i++){
    
        for(int j =0 ; j<n; j++){
           randNum = rand() % 101;
           a[i][j] = randNum;
        }
    }
}

void Xuat_Ma_Tran(int a[][MAX], int m, int n)
{
	for(int i =0; i< m; i++){
        
        for(int j =0 ; j<n; j++){
            printf(" %5d", a[i][j]);
        }
        printf("\n");
    }
}

void delay(int giay)
{
    
    int Mili_Giay = 1000 * giay;
 
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + Mili_Giay);
}

void  Xuat_Ma_Tran_Chan_Le(int a[][MAX], int m, int n)
{
	for(int i =0; i< m; i++){
        
        for(int j =0 ; j<n; j++){
        	
        	if(a[i][j] % 2 == 0)
        	{
        		printf(" %5d", a[i][j]);
			}
			
			else
			{
				char c = 'X';
				printf(" %5c", c);
			}
            
        }
        printf("\n");
    }
}

void Tong_Cot(int a[][MAX], int m, int n, int &k)
{
	printf("\n\n   NHAP SO COT CAN TINH:");
	scanf("%d", &k);
	
	int Ket_Qua = 0;
	
	for(int i = 0; i < n; i++)
	{
		Ket_Qua = Ket_Qua + a[i][k];
	}
	
	printf("\nKET QUA TONG CUA COT %d LA: %d\n", k, Ket_Qua);
	
}

void Tong_Dong(int a[][MAX], int m, int n, int &k)
{
	printf("\n\n   NHAP SO DONG CAN TINH:");
	scanf("%d", &k);
	
	int Ket_Qua = 0;
	
	for(int i = 0; i < n; i++)
	{
		Ket_Qua = Ket_Qua + a[k][i];
	}
	
	printf("\nKET QUA TONG CUA DONG %d LA: %d\n", k, Ket_Qua);
	
}

void Tim_So_X(int a[][MAX], int m, int n, int &x)
{
	printf("\n----NHAP SO X CAN TIM: ");
	scanf("%d", &x);
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
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

void Trung_Binh_Cong(int a[][MAX], int m, int n)
{
	int Ket_Qua = 0;
	for (int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			Ket_Qua += a[i][j];
		}
	}
	float KQ_Trung_Binh = (float) Ket_Qua/ (m*n);
	printf("\n\nTrung binh cong tren ma tran la: %2f", KQ_Trung_Binh);
}

bool Kiem_Tra_Vuong(int a[][MAX], int m, int n)
{
	if (m == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Tong_Duong_Cheo_Chinh_Vuong(int a[][MAX], int m, int n)
{
	if(Kiem_Tra_Vuong(a, m, n))
	{
		int Ket_Qua = 0;
		for (int i = 0; i < m; i++) 
		{
	      for (int j = 0; j < n; j++)
		  {
	         if (i == j)
	            Ket_Qua = Ket_Qua + a[i][j];
	      }
		}
		printf("\n----------KET QUA CUA TONG DUONG CHEO CHINH: %d", Ket_Qua);
	}
	else
	{
		printf("\n-----------------------ERROR! MA TRAN KHONG VUONG! NEN KHONG THE TINH DUOC DUONG CHEO CHINH TREN MA TRAN-----------------------\n");
	}
	
}

void Tong_Duong_Cheo_Phu_Vuong(int a[][MAX], int m, int n)
{
	if(Kiem_Tra_Vuong(a, m, n))
	{
		int tong = 0;
		for(int i = 0; i < m; i++)
		{
			tong += a[i][m - 1 - i];
		}
		printf("\n----------KET QUA CUA TONG DUONG CHEO PHU: %d", tong);
	}
	else
	{
		printf("\n-----------------------ERROR! MA TRAN KHONG VUONG! NEN KHONG THE TINH DUOC DUONG CHEO PHU TREN MA TRAN-----------------------\n");
	}
}

void Xuat_Nam_Duoi_Duong_Cheo_Chinh(int a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{        
         for (int j = 0; j < n; j++)
         {
		 	// Khong bao gom cac phan tu tren duong cheo chinh.
        	if (i > j) // dong > cot.
        	{
        		printf(" %5d", a[i][j]);
            	
			}
			else
			{
				printf(" %5d", 0);
			}
				
				
		 }
		 printf("\n");
    }
}

void Xuat_Nam_Tren_Duong_Cheo_Phu(int a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{        
         for (int j = 0; j < n; j++)
         {
		 	// Khong bao gom cac phan tu tren duong cheo phu.
        	if ((i + j) < (n - 1)) // (dong + cot) < (n -1)
        	{
        		printf(" %5d", a[i][j]);
            	
			}
			else
			{
				printf(" %5d", 0);
			}
				
				
		 }
		 printf("\n");
    }
}





// THUC THI HAM
int main()
{
	Menu();
	return 0;
}