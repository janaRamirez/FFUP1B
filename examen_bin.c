#include<stdio.h>
int a[100];
int numero;
int r;
int c=0;
int i;
int main()
{
	printf("programa que convierta de numeros a binarios\n");
	printf("dame el numero a convertir\n");
	scanf("%d",&numero);
	while(numero>0)
	{
		r=numero%2;
		a[c]=r;
		numero=numero/2;
		c++;
	}
	i=c;
	while(i>0)
	{
		i--;
		printf("%d",a[i]);
	}
}

