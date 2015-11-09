#include<stdio.h>//E/S
int a;
int res;
int main()
{
	printf("programa que separa por unidades, decenas, centenas, unidades de millar\n");
	do
	{
			printf("dame una cantidad de cuatro digitos \n");
			scanf("%d",&a);
	}       while(a<1000,a>9999);
	{
		res=a%10;
		printf("unidades %d\n",res);
		a=a/10;
		res=a%10;
		printf("decenas %d\n",res);
		a=a/10;
		res=a%10;
		printf("centenas %d\n",res);
		a=a/10;
		res=a%10;
		printf("unidades de millar %d\n",res);
		a=a/10;
		
	}
		
	
	
}
