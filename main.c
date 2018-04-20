#include <stdio.h>
#include <math.h>

int main()
{
	float q,prate,q1,sum=0,pinakas[100];
	int years;

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
			sum+=q;
			pinakas[x]=sum;			
		
			printf("Year : %d (Anekmetaleuti agora (Q)) = %.2f Sunolo : %.2f\n",x+1,q,sum);						
		}
	}

}