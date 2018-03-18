#include <stdio.h>

void numberchar(int a,char b)
{
	int x=0;
	
	while(a>0)
	{
		x++;
		printf("%c\n",b);
		if(x==a)
			break;
	}
}

int main()
{
	int a;
	char b;

	scanf("%d %c",&a,&b);
	numberchar(a,b);
}