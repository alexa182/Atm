#include <stdio.h>

int main()
{
	float elaxisti_xrewsi = 1.5;
	int days = 2, cust_days;

	printf("Days : ");
	scanf("%d", &cust_days);
	
	if(cust_days <= 2)
	{
		printf("Xrewsi : %.2f\n", elaxisti_xrewsi);
	}
	else
	{
		int extra_days = (cust_days-days);
	
		printf("Xrewsi : %.2f\n", (float)extra_days + 1.5 );		
	}

}