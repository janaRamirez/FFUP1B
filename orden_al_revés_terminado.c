#include<stdio.h>//
int Max[10];
int a=0;
int main ()
{
	printf("programa que los numeros dados los acomode al reves\n");
	printf("dame 10 cantidades\n");
	for(a=0;a<9;a++) 
	{
    	scanf("%d\n",&Max[a]);
	}
	for(a=8;a>-1;a--)
	{
		printf("%d\n", Max[a]);
	}
		
}
	
	
	
