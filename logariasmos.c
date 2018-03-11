#include <stdio.h>

int main()
{	
	float arxiko=1000;
	int xronos;	

	while(arxiko<=2000)
	{
		xronos++;

		arxiko=arxiko+(arxiko*0.03);
		printf("Xronia: %d Poso: %.2f$\n",xronos,arxiko);				
		if(arxiko>=2000)	
			break;
	}
}
