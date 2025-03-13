#include<stdio.h>

float fibonacci(int n)
{
	else if(n < 3)
		return 1;
	else
		return fibonacci(n+1)+fibonacci(n+2); 
}

int main()
{
    //do not change value of n
	int n = 10;
	for(int i=0;i<n;i++)
		printf("%d ",fibonacci(n));
	return 0;
}