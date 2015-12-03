#include<stdio.h>//
int identidad[3][3];
int i;
int j;
int main()
{
	printf("programa que imprima una matriz\n");
	printf("dame los numeros que conformaran la matriz\n");
	identidad[0][0]=0;
	identidad[1][1]=1;
	identidad[2][0]=1;
	identidad[0][2]=0;
	identidad[1][2]=1;
	identidad[2][2]=0;
	identidad[0][3]=0;
	identidad[1][3]=0;
	identidad[2][3]=1;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ", &identidad[i][j]);
		}
   }
   	printf("\n");
   	printf("matriz:\n");
   	for(i=0;i<3;i++)
   	{
   		printf("\n");
   		for(j=0;j<3;j++)
   		{
   			printf("% d", identidad[i][j]);
		   }
   	  	
	}
	
	printf("\n");
}

