#include<stdio.h>
int Max[10];
int a=0;
int b;
int main()
{
	printf("dame el numero\n");
	scanf("%d",&b);
	for(a=0;a<10;a++)
	{
	Max[a]=b*(a+1);
	printf("Sus multiplos son:%d\n", Max[a]);	
	}
}
