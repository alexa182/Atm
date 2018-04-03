#include <stdio.h>

int main()
{
	int pinakas1[]={1,2,3,4,5,6,7,8,9,10},pinakas2[]={10,20,30,40,50,60,70,80,90,100},swap;

	for(int x=0;x<10;x++)
	{
		swap=pinakas2[x];
		pinakas2[x]=pinakas1[x];
		pinakas1[x]=swap;
	}
	for(int x=0;x<10;x++)
		printf("pinakas#1 : %d pinakas#2 : %d\n",pinakas1[x],pinakas2[x]);

}
