#include<stdio.h>//E/S
int a;
int i; 
int main()
{
	printf("programa que orde los numeros en unidades, decenas, centenas, unidades de millar\n");
	printf("dame la cantidad\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		i=a%10;
		printf("las unidades son%d\n" , i);
		a=a/10;
		i=a%10;
		printf("las decenas son%d\n" , i);
		a=a/10;
		i=a%10;
		printf("las centenas son%d\n" , i);
		a=a/10;
		i=a%10;
		printf("las unidades de millar son%d\n" , i);
		a=a/10;
	}
}
