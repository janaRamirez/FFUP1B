#include<stdio.h>//
int j;
int a;
int res;
int main()
{

	int suma(int j,int a)
	{
	int suma;
	res=j+a;
	return res;
    }

	int rest(int j,int a)
	{
    int res;
	res=j-a;
	return res;
    }

	int mul(int j,int a)
	{
    int mul;
	res=j*a;
	return res;
    }

	float div (int j,int a)
	{
	    float div;
		div=j/a;
		return res;
	}
	scanf("%d",&j);
	scanf("%d",&a);
	res = suma(j,a);
    printf("La suma es:%d\n",res);
    res = rest(j,a);
    printf("La resta es:%d\n",res);
    res = mul(j,a);
    printf("La multiplicacion es:%d\n",res);
    res = div(j,a);
	printf("La division es:%f\n",res);	
   }
   
  
    
	
	

    
	
    
