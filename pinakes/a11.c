#include <stdio.h>

int main()
{
	int x,lista[x],new,thesi;

	printf("theseis : ");
	scanf("%d",&x);

	printf("noumera :\n");
	
	for(int c=0;c<x;c++)	
		scanf("%d",&lista[c]);

	printf("arithmos & thesi : ");
	scanf("%d %d",&new,&thesi);
	
	for(int c=x;c>=thesi;c--)
		lista[c]=lista[c-1];
	
	lista[thesi]=new;
	x++;

	for(int c=0;c<x;c++)
		printf("%d %d\n",lista[c],c );
}
