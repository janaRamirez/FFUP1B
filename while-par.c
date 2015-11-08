#include<stdio.h>// E/S
int i;
int a;
suma=0;
int main()
{
	printf("programa que determinelos numeros pares\n");
	printf("dame el numero\n");
	scanf("%d",&i);
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2==0)
		{
			printf("%d+",i);
			suma=suma+i;
	
	}
	       i=i+1;
	

}
           printf("suma%d\n",suma);
}

