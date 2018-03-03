#include <stdio.h>

int main()
{
	float money=0,min_xrewsi=1,max_xrewsi=3;

	printf("Analipsi :");
	scanf("%f", &money);

	if(money/100 < 1)
	{
		printf("Xrewsi %.2f\n", min_xrewsi );
	}
	else if(money/100 > 1 && money/100 <=3)
	{
		printf("Xrewsi %.2f\n", money/100);
	}
	else
	{
		printf("Xrewsi %.2f\n", max_xrewsi );
	}

}