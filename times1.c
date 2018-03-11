#include <stdio.h>

int main()
{
	int arithmos=0,sunolo=0,plithos=0;

	while(arithmos>-1)
	{
		plithos++;
		printf("Arithmos : ");
		scanf("%d",&arithmos);
		if(arithmos>0)
			sunolo+=arithmos;
		else if(arithmos<=0)	
			break;	
	}
	printf("Plithos : %d  Athrisma: %d  Mesos oros : %.2f \n",plithos-1,sunolo,(float)sunolo/(plithos-1) );
}
		