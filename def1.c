#include <stdio.h>

void ath(int a,int b,int c)
{
	printf("%d\n",a+b+c);
}


int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	ath(a,b,c);	
}