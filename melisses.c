#include <stdio.h>


int main()
{
	int melisses=1200,eti=0;
	
	while(melisses <= 2000)
	{
		eti++;
		melisses=(float)melisses+(melisses*0.038);
		if(melisses >= 2000)
		{
			printf("Etos :%d Kopadi : %d\n",eti,melisses);
 			break;
		}
	}
}
