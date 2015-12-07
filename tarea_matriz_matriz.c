#include <stdio.h>//
int matriz[15][15];
int matriz2[15][15];
int resultado[15][15];
int r;
int a;
int m;
int d;
int e;
int i;
int j;
int main()
{

	printf("Pograma que multiplica matriz por matriz \n\n"); 
	
	printf("Numero de filas de la primera matriz:\n");
	scanf("%d",&r);
	printf("Numero de columnas de la primera matriz:\n");
	scanf("%d",&a);
	printf("Numero de filas de la segunda matriz:\n");
	scanf("%d",&m);
	printf("Numero de columnas de la segunda matriz:\n");
	scanf("%d",&d);

	if(m>=a)
	{
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=a;j++)
			{
				printf("Matriz: ");
				scanf("%d",&matriz[i][j]);
			}
		}	
	    printf("\n");
	    for(i=1;i<=m;i++)
	    {
		    for(j=1;j<=d;j++) 
		    {
		    	printf("Matriz 2: ");
			    scanf("%d",&matriz2 [i][j]);
		    }
	    }
	    for(i=1;i<=r;i++)
	    {
		    for(j=1;j<=d;j++)
		    {
		    	resultado[i][j]=0;
			    for(e=1;e<=a;e++)
			    
			    {
			    	resultado[i][j]=(resultado[i][j]+(matriz[i][e]*matriz2[e][j]));
			    }
		    }
	    }
	    printf("\n\n primera matriz es:\n");
	    for(i=1;i<=r;i++)
		{
			for(j=1;j<=a;j++)
			
			{
				printf("% d",matriz[i][j]);	 
			}
			printf("\n");
		}
		printf("\n\n segunda matriz es:\n");
	    for(i=1;i<=m;i++)
	    
	    {
	    	for(j=1;j<=d;j++)
	    	
		    {
		    	printf("% d",matriz2 [i][j]);
		    }
		     printf("\n");
	    }
	    printf("\n\n El resultado es:\n");
        for(i=1;i<=r;i++)
        {
        	printf("\n");
    	    for(j=1;j<=d;j++)
    	    
    	    {
    	    	printf("% d",resultado[i][j]);
		    }
	    }
    }
}
