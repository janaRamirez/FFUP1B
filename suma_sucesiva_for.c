#include<stdio.h>//E/S
int a;
int b;
int i;
int suma;
int main()
{
	printf("programa que haga las suma sucesiva de dos numeros\n");
	printf("dame los numeros\n");
	scanf("%d",&b);
	scanf("%d",&a);
	suma=0;
	for(i=1;i<=b;i++)
	{
		suma=suma+a;
		
	}
		printf("el resultado es%d\n",suma);
	
	
}
