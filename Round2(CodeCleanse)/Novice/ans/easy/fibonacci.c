#include<stdio.h>

int fibonacci(int n)
{
	if(n==0)
		return 0;
	else if(n < 2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    //do not change value of n
	int n = 10;
	for(int i=0;i<n;i++)
		printf("%d ",fibonacci(i));
	return 0;
}