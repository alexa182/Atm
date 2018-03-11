#include <stdio.h>

int main()
{
	int arithmos=0,sunolo=0;

	while(sunolo<=1000)
	{
		printf("Arithmos : ");
		scanf("%d",&arithmos);
		if(arithmos<0)
		{
			printf("Parakalw eisagete mono thetikous arithmous : ");
			scanf("%d",&arithmos);
		}
		sunolo+=arithmos;		
	}
	printf("%d\n",sunolo );
}	