#include <stdio.h>

int main()
{
	int pin=1111,pass,tries=1;

	printf("Enter pass : ");
	scanf("%d",&pass);
	if(pass==pin)
		printf("Eidos sunalagis");
	else
	{
		for(tries=1;tries<3;tries++)
		{
			printf("Dwse kwdiko : ");
			scanf("%d",&pass);
			if(pass==pin)
			{
				printf("eidos sunalagis\n");
				break;
			}	
		}
	}
}