#include <stdio.h>

int main()
{
	int pinakas[5][3],best_try=0,final_table[5],max=0;

	for(int r=0;r<5;r++)
	{
		for(int c=0;c<3;c++)
		{
			printf("Athlitis ID[%d] Epidosi[%d]: \n",r+1,c+1 );
			scanf("%d",&pinakas[r][c]);

			if(best_try<pinakas[r][c])
			{
				best_try=pinakas[r][c];				
			}
			
			final_table[r]=best_try;
		}

		best_try=0;				
	}
	
	for(int x=0;x<5;x++)
	{	    
	    for(int y=0;y<5;y++)
	    {             
	         if(final_table[y]>final_table[y+1])
	         {
	             max=final_table[y];
	             final_table[y]=final_table[y+1];
	             final_table[y+1]=max;
	         }
	    }	     	  
		printf("\nEpidosi : %d\n",final_table[x]);
	}
	
	for(int x=0;x<5;x++)     	
	{
		for(int y=0;y<3;y++)
		{
			if(pinakas[x][y]==final_table[2])
			{
				printf("\nPlayer ID : %d epidosi : %d\n",x+1,final_table[2]);
			}
		}
	}
}