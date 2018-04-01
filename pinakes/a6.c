#include <stdio.h>

int numbs(int num[])
{
	int max,maxpos,min,minpos;

	min=num[0];
	max=num[0];

	for(int y=0;y<10;y++)
	{
		if(num[y]>max)
		{
			max=num[y];
			maxpos=y;
		}
		if(num[y]<=min)
		{
			min=num[y];
			minpos=y;
		}
	}	
	printf("Max : %d Thesi : %d\nMin : %d Thesi: %d\n",max,maxpos,min,minpos);
}

int mo(int pin[])
{
	int sunolo=0;
	
	for(int i=0;i<10;i++)
		sunolo+=pin[i];
	
	printf("mesos oros : %.2f\n",(float)sunolo/10);
}


int main()
{
	int pinakas[10];

	for(int x=0;x<10;x++)
		scanf("%d",&pinakas[x]);
	
	numbs(pinakas);
	mo(pinakas);
}