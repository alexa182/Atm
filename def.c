#include <stdio.h>

void max(int a,int b,int c)
{
	if(a>b && a>c)
		printf("%d\n",a);
	else if(b>a && b>c)
		printf("%d\n",b);
	else
		printf("%d\n",c);
}

int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	max(a,b,c);

}