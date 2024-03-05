// Libraries.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#define MAX 100


// Functions protoype.
void Initial_Array(int &n, int A[]);
void Output(int n, int A[]);
int Increment_Partition(int A[], int min, int max);
int Decrement_Partition(int A[], int min, int max);
void Increment_Quick_Sort(int A[], int min, int max);
void Decrement_Quick_Sort(int A[], int min, int max);
void Swap(int &val_1, int &val_2);
void Menu();


// Set up functions.
void Menu()
{
	int n;
	int A[MAX];
	int choice;
	int choice_01;
	do
	{
		printf("\n");
		printf("1. Initalizing Array \n");
		printf("\n");
		printf("2. Increment Quick Sort \n");
		printf("\n");
		printf("3. Decrement Quick Sort \n");
		printf("\n");
		printf("4. Exit");
		
		printf("\n Your choice: \n");
		scanf("%d", &choice);
		
	
			switch(choice)
			{
				case 1:
				{				
					printf("\nIntializing....\n");
					Initial_Array(n, A);
					Output(n, A);
				}
				break;
				
				case 2:
				{
					printf("\nSorting...\n");
					Increment_Quick_Sort(A, 0, n);
					printf("\nResult:\n");
					Output(n, A);
				}
				break;
				
				case 3:
				{
					printf("\nSorting...\n");
					Decrement_Quick_Sort(A, 0, n -1);
					printf("\nResult:\n");
					Output(n, A);
				}
				break;
				
				default:
					{
						printf("\nExiting...\n");
					}
					break;
			}
			
	} while(choice >= 4);
		
		
		
	 
}

void Swap(int &val_1, int &val_2)
{
	int Temp = val_1;
	val_1 = val_2;
	val_2 = Temp;
}

int Increment_Partition(int A[], int min, int max)
{
	int Pivot = A[max];
	int i = (min - 1);
	for (int j = min; j <= max; j++)
	{
		// Change this here for increment.
		if(A[j] < Pivot)
		{
			i++;
			Swap(A[i], A[j]);
		}
	}
	Swap(A[i + 1], A[max]);
	return (i + 1);
}

void Increment_Quick_Sort(int A[], int min, int max)
{
	if(min < max)
	{
		int Pivot_Pos = Increment_Partition(A, min, max);
		
		Increment_Quick_Sort(A, min, Pivot_Pos - 1);
		Increment_Quick_Sort(A, Pivot_Pos + 1, max);
	}
}

int Decrement_Partition(int A[], int min, int max)
{
	int Pivot = A[max];
	int i = (min - 1);
	for (int j = min; j <= max - 1; j++)
	{
		// Change this here for decrement.
		if(A[j] >= Pivot)
		{
			i++;
			Swap(A[i], A[j]);
		}
	}
	Swap(A[i + 1], A[max]);
	return (i + 1);
}

void Decrement_Quick_Sort(int A[], int min, int max)
{
	if(min < max)
	{
		int Pivot_Pos = Decrement_Partition(A, min, max);
		
		Decrement_Quick_Sort(A, min, Pivot_Pos - 1);
		Decrement_Quick_Sort(A, Pivot_Pos + 1, max);
	}
}

void Initial_Array(int &n, int A[])
{
	printf("\nInput the length of array: ");
	scanf("%d", &n);
	
	srand(time(NULL));
	int randNum = 0;
	
	for(int i = 0; i < n; i++)
	{
	    randNum = rand() % 100000;
	    A[i] = randNum;
	    
	}
}

void Output(int n, int A[])
{
	printf("\n Number of elements in array: ", n);
	
	
	printf("\n		Array		\n");
	for(int i = 0; i < n; i++)
	{
		printf(" %d		", A[i]);
	}
}


// Set up Main.

int main()
{
	Menu();
	
	return 0;
}