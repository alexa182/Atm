#include <stdio.h>

int main()
{
	int x,pin[]={2,3,4,2,5,2},counter=0;

	printf("Noumero : ");
	scanf("%d",&x);

	for(int y=0;y<6;y++)
	{
		while(pin[y]==x)	
		{	
			printf("thesi : %d\n",y);
			counter++;
			break;	
		}					
	}
	printf("\nsunolo : %d\n",counter);
}
