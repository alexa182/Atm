#include <stdio.h>

int main()
{
	float aksia_auto;
	int doseis;

	printf("Aksia : ");
	scanf("%f", &aksia_auto);
	if(aksia_auto < 8000)
	{
		printf("I aksia tou autokinitou einai lathos\n");
		return main();
	}
	
	printf("Doseis : ");
	scanf("%d",&doseis);

	if(aksia_auto >= 8000 && aksia_auto <=15000)
	{
		if(doseis==6)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*10)/100);
		}
		else if(doseis==12)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*15)/100);
		}
		else if(doseis==24)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*20)/100);
		}
		else if(doseis==0)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto);
		}
		else
		{
			printf("O arithmos dosewn den yparxei\n");
		}
	}
	
	if(aksia_auto >= 15001 && aksia_auto <= 20000)
	{
		if(doseis==6)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*8)/100);
		}
		else if(doseis==12)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*12)/100);
		}
		else if(doseis==24)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*18)/100);
		}
		else if(doseis==0)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto);
		}
		else
		{
			printf("O arithmos dosewn den yparxei\n");
		}
	}
	if(aksia_auto >= 20001)
	{
		if(doseis==6)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*6)/100);
		}
		else if(doseis==12)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*10)/100);
		}
		else if(doseis==24)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto+(aksia_auto*15)/100);
		}
		else if(doseis==0)
		{
			printf("Teliki aksia : %.2f $\n", aksia_auto);
		}
		else
		{
			printf("O arithmos dosewn den yparxei\n");
		}
	}
	
}