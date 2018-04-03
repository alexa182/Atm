#include <stdio.h>

int main()
{
	int pin1[5],pin2[5],sum[5];

	printf("Pinakas #1\n");
	for(int x=0;x<5;x++)
		scanf("%d",&pin1[x]);
	
	printf("Pinakas #2\n");
	for(int x=0;x<5;y++)
		scanf("%d",&pin2[x]);
	
	for(int x=0;x<5;x++)
		sum[x] = pin1[x]*pin2[x];	

}
