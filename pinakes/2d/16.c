#include <stdio.h>
#include <string.h>

int main()
{
	char A[5][100];
	float C[5][3],max=0;
	int max_pos;	

	for(int x=0;x<5;x++)
	{
		printf("Hotel[%d] names: ",x+1);
		scanf("%s",&A[x]);
		
		for(int y=0;y<3;y++)
		{
			
			printf("Eispakseis  : \n");
			scanf("%f",&C[x][y]);
		}
	}
	
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<3;y++)
		{
			printf("Hotel: %s , Eispakseis: %.2f\n",A[x],C[x][y] );
			
			if(C[x][y]>max)
			{
				max=C[x][y];
				max_pos=x;
			}
		}
	}	
	
	printf("Hotel : %s , Eispakseis : %.2f\n",A[max_pos],max );
	
}
