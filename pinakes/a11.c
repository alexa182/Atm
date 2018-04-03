#include<stdio.h>

int main()
{
	int x,lista[x],new;

	printf("theseis : ");
	scanf("%d",&x);

	printf("noumera :\n");
	
	for(int c=0;c<x;c++)	
		scanf("%d",&lista[c]);

	printf("thesi alagis : ");
	scanf("%d",&new);
	
	for(int c=0;c<x;c++)	
	{
		if(lista[c]==new)
		{
			printf("neo noumero : ");
			scanf("%d",&lista[new]);
		}
	}
	for(int c=0;c<x;c++)	
		printf("nums: %d thesi : %d\n",lista[c],c);
}
