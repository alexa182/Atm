#include <stdio.h>

int melisses=1200,eti=0;
float sunolo=0;

int main()
{
	for(eti=1;eti<100;eti++)
	{
		melisses=(float)melisses+(melisses*0.038);
		if(melisses>=2000)
		{
			printf("Etos :%d Kopadi : %d\n",eti,melisses);
			break;
		}
	}	
}