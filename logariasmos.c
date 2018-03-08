#include <stdio.h>

float arxiko=1000;
int xronos;

int main()
{
	for(xronos=1;xronos<30;xronos++)
	{
		arxiko=arxiko+(arxiko*0.03);
		printf("Xronia: %d Poso: %.2f$\n",xronos,arxiko);				
		if(arxiko>=2000)	
			break;
	}	
}