#include <stdio.h>

int main()
{
	float katanalosi=0,min_xrewsi=2,max_xrewsi=3,kostos_apox=0.5,pagio=35;

	printf("Kivika nerou : ");
	scanf("%f", &katanalosi);

	if(katanalosi <=20)
	{
		printf("Xrewsi : %.2f $ \nKostos apoxeteusis : %.2f $ \nTeliki xrewsi : %.2f $\n", katanalosi*min_xrewsi, katanalosi*kostos_apox,
		((katanalosi*min_xrewsi)+ (katanalosi*kostos_apox) + pagio) + (((katanalosi*min_xrewsi)+ (katanalosi*kostos_apox) + pagio)*8)/100 );
	}
	else if(katanalosi > 20)
	{
		printf("Xrewsi : %.2f $ \nKostos apoxeteusis : %.2f $ \nTeliki xrewsi : %.2f $\n", ((katanalosi-20)*max_xrewsi)+40, katanalosi*kostos_apox,
		 (((katanalosi-20)*max_xrewsi)+40 + (katanalosi*kostos_apox)+pagio) + ((((katanalosi-20)*max_xrewsi)+40 + (katanalosi*kostos_apox)+pagio)*8)/100);
	}
	else
	{
		printf("Teliki xrewsi : %.2f $\n", pagio + (pagio*8)/100);
	}
}