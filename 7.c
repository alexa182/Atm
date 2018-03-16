#include <stdio.h>

int main()
{
	int num,fores=0,sum=0,artios=0,perittos=0;

	do
	{
		fores++;
		printf("Enter a number : ");
		scanf("%d",&num);		

		if(num !=0 && num != 100 && num % 2 == 0)
			artios++;
		else if(num !=0 && num != 100 && num %2 != 0)
			perittos++;
		
		else if(num == 100)
		{
			printf("Number can not be 100! Please enter a number : ");
			scanf("%d",&num);
			if(num !=0 && num != 100 && num % 2 == 0)
				artios++;
			else if(num !=0 && num != 100 && num %2 != 0)
				perittos++;			
			else if(num == 0)
			{
				fores=fores-1;
				break;
			}
		}
		else if(num == 0)
		{
			fores=fores-1;
			break;
		}
		sum+=num;
		
	}while(fores != 10);

	printf("\nMesos Oros : %.2f\nArtioi : %d\nPeritos : %d\n",(float)sum/fores,artios,perittos);

}