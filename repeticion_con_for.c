#include<stdio.h>//E/S
int a;
int b;
int i;
int main()
{
	printf("programa que repita los numros dados\n");
	printf("dame el numero\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	  for(b=1;b<=i;b++)
	  {
	  	printf("los numeros son %d\n",i);
	  }
	    printf("\n");
	}
}
