#include <stdio.h>

int main()
{
	int a,b,c=1,x;
	
	scanf("%d %d",&a,&b);

	for(x=0;x<b;x++)
		c*=a;
	
	printf("%d\n",c );
	
}