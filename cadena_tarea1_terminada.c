#include<stdio.h>//
char cadena []={'a','b','c','d','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z', ( '\0' )};
char cadena2 []={'a','b','c','d','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z', ( '\0' )};
int i;
int an=0;
int a;
int c;
int main()
{
	scanf(" %s",cadena);
	scanf(" %c",&cadena2);
	for (i=0;cadena2[i]!='\0';i++)
	    {
	    	if(cadena2[i]==cadena[a])
	          {
		        i++;
		        an++;		
	          }
	        printf( "si existe\n");
	        break;
		}
			for (a=0;cadena[a]!='\0';a++)
		{
		   	if(cadena2[i]==cadena[a])	
		   	{
		   	  i++;
			  a++;
			}
			 printf( "no existe\n");
			 break;
		}
			
} 
