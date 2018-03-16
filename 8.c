#include <stdio.h>

int main()
{
	int nums=0,x,prwtos=0;

	while(nums<1000)
	{
		nums++;
		for(x=2;x<=nums/2;x++)
		{
			if(nums%x==0)
			{	
				prwtos++;
			}
		}
	}
	printf("%d\n",prwtos );

}