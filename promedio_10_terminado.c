#include<stdio.h>//
int cal[10];
int suma=0;
int i=0;
int prom;
int main()
{
	printf("calificacion [1]\n ");
	printf("calificacion [2]\n ");
	printf("calificacion [3]\n ");
	printf("calificacion [4]\n ");
	printf("calificacion [5]\n ");
	printf("calificacion [6]\n ");
	printf("calificacion [7]\n ");
	printf("calificacion [8]\n ");
	printf("calificacion [9]\n ");
	printf("calificacion [10]\n ");
	for(i=0;i<10;i++)
	
	{
	  scanf("%d",&cal[i]);
	 suma+=cal[i];
	}
	{
			prom=suma/10;
			printf("elpromedio es %d\n", prom);
	}
	 
}

