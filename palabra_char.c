#include<stdio.h>
char cadena[20];
char j;
char a;
int i=0;
int main()
{
	printf("escribe la palabra\n");
	scanf("%s",cadena);
	printf("escribe la letra que quieres cambiar\n");
	scanf("%s",&j);
	printf("escribe la letra que reemplazara\n");
	scanf("%s",&a);
	for(i=0;cadena[i]!=' ';i++)
	{
		if(cadena[i]==j)
		{
			cadena[i]=a;
		}
	}
	printf("%s",cadena);
	
}
