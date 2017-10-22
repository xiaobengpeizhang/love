#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void l()
{
	int x = 1, y = 10;
	int i, j;
	for (x = 1; x < 10; x++)
	{
		system("cls");
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}
//		for (j = 0; j < y; j++)
//		{
//			printf(" ");
//		}
		printf("l");
		Sleep(100);
	}
}

void o()
{
	int x = 1, y = 5;
	int i, j, k;
	for (x = 1; x < 10; x++)
	{
		system("cls");
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}
		
		if (x == 9) 
		{
			printf("l    o");
		}
		else 
		{
			for (j = 0; j < y; j++)
			{
				printf(" ");
			}
			printf("o\n");
			for (k = 0; k < 10 - (x + 1) - 1; k++)
			{
				printf("\n");
			}
			printf("l");
		}
		
		Sleep(100);
	}
}

void v()
{
	int x = 1, y = 10;
	int i, j, k;
	for (x = 1; x < 10; x++)
	{
		system("cls");
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}
		
		if (x == 9) 
		{
			printf("l    o    v");
		}
		else 
		{
			for (j = 0; j < y; j++)
			{
				printf(" ");
			}
			printf("v\n");
			for (k = 0; k < 10 - (x + 1) - 1; k++)
			{
				printf("\n");
			}
			printf("l    o");
		}
		
		Sleep(100);
	}
}

void e()
{
	int x = 1, y = 15;
	int i, j, k;
	for (x = 1; x < 10; x++)
	{
		system("cls");
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}
		
		if (x == 9) 
		{
			printf("l    o    v    e");
		}
		else 
		{
			for (j = 0; j < y; j++)
			{
				printf(" ");
			}
			printf("e\n");
			for (k = 0; k < 10 - (x + 1) - 1; k++)
			{
				printf("\n");
			}
			printf("l    o    v");
		}
		
		Sleep(100);
	}
}

void main()
{
	l();
	o();
	v();
	e();
}

