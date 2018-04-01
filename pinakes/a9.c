#include <stdio.h>

int main()
{
	int pinakas1[]={1,2,3,4,5,6,7,8,9,10},pinakas2[]={10,20,30,40,50,60,70,80,90,100},swap[10];

	for(int x=0;x<10;x++)
	{
		swap[x]=pinakas2[x];
		pinakas2[x]=pinakas1[x];
		pinakas1[x]=swap[x];
	}
	for(int y=0;y<10;y++)
		printf("pinakas#1 : %d pinakas#2 : %d\n",pinakas1[y],pinakas2[y]);

}