#include <stdio.h>

int main()
{
	int pinakas[0][0],rows,columns,min_n;

	printf("rows and columns : ");
	scanf("%d %d",&rows,&columns);
	
	pinakas[rows][columns];
	min_n=pinakas[rows][0];

	for(int x=0;x<rows;x++)
	{

		for(int y=0;y<columns;y++)
		{
			
			if(min_n > pinakas[x][y])
			{
				
				min_n=pinakas[x][y];
			}
		}

	}
	printf("min = %d\n",min_n );
}

