#include <stdio.h>

int main()
{
	float ipsos=1000;

	for(ipsos=1000;ipsos>0.01;ipsos--)
	{
		ipsos=ipsos-(ipsos*0.1);
		printf("%.2f\n",(float)ipsos );
	}
	
}