#include <stdio.h>

int main()
{
	int x,lista[x],new;

	printf("theseis : ");
	scanf("%d",&x);

	printf("noumera :\n");
	
	for(int y=0;y<x;y++)	
		scanf("%d",&lista[y]);

	printf("thesi alagis : ");
	scanf("%d",&new);
	
	for(int d=0;d<x;d++)	
	{
		if(lista[d]==lista[new])
		{
			printf("neo noumero : ");
			scanf("%d",&lista[d]);
		}
	}
	for(int c=0;c<x;c++)	
		printf("nums: %d thesi : %d\n",lista[c],c);
}