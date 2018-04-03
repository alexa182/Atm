#include <stdio.h>

int main()
{
	int lista[20],zeros=0;

	for(int x=0;x<20;x++)
	{
		scanf("%d",&lista[x]);
		
		if(lista[x]==0)
			zeros++;
	}
	printf("sunolo : %d\n",zeros );
}
