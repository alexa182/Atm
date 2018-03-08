#include <stdio.h>

float xiliometra=0,sunolo=0;
int meres;

int main()
{
	for(meres=1;meres<6;meres++)
	{
		printf("Meres: %d xiliometra: ",meres );
		scanf("%f",&xiliometra);
		sunolo += xiliometra;
		if(sunolo>=5000 || meres>=5)
		{
			printf("Meres: %d xiliometra %.2f\n",meres,sunolo );
			break;
		}
	}	
}