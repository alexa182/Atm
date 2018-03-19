#include <stdio.h>

int main()
{
	float car=40000,x=0;
	int xronos;

	for(xronos=0;xronos<10;xronos++)
	{
		car=car+(car*0.06);
		x+=car;
		printf("%.2f\n",x );
	}
	
}