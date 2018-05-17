#include <stdio.h>
#include <math.h>

int main()
{
	float q,prate,q1,sum=0,pinakas[100],pinakas2[100];
	int years,nyears;
	char anwser,nanwser;

	printf("Untapped market and penetration rate : ");
	scanf("%f %f",&q1,&prate);
	
	prate=prate/100;

	printf("Years : ");
	scanf("%d",&years);


	if(years>=1)
	{
		for(int x=0;x<years;x++)
		{
			q=q1*prate*pow(1-prate,x);
			pinakas2[x]=q;
			sum+=q;
			pinakas[x]=sum;			
		
			printf("Year : %d (Anekmetaleuti agora (Q)) = %.2f Sunolo : %.2f\n",x+1,q,sum);						
		}
	}

	printf("Do you have real data ?[Y/N] : ");

	scanf("%s",&nanwser);
	

	if(nanwser=='Y' || nanwser=='y')
	{
		printf("Change prate?[Y/N]");
		scanf("%s",&nanwser);

		if(nanwser=='Y' || nanwser=='y')
		{
			scanf("%f",&prate);
			prate=prate/100;
		}

		printf("Change Q?[Y/N]");
		scanf("%s",&nanwser);

		if(nanwser=='Y' || nanwser=='y')
		{
			scanf("%f",&q1);
		}

		printf("How many years?\n");
		scanf("%d",&nyears);

		if(nyears>=1)
		{
			for(int x=0;x<years;x++)
			{
				q=q1*prate*pow(1-prate,x);
				pinakas2[x]=q;
				sum+=q;
				pinakas[x]=sum;			
			
				printf("Year : %d (Anekmetaleuti agora (Q)) = %.2f Sunolo : %.2f\n",x+1,q,sum);						
			}
			
		}

	}
	

}