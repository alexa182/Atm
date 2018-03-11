#include <stdio.h>

int main()
{
	int atoma=2000,apantisi=0,apantisi_1=0,apantisi_2=0,apantisi_3=0;
	float sunolo=0;
	
	while(atoma<=2000)
	{
		printf("\nPoso suxna xrisimopoieitai to metro?\n\n1. Kathimerina \n2. Merikes fores \n3. Katholou\n\n");
		scanf("%d",&apantisi);	
		sunolo++;
		if(apantisi==1)
		{
			apantisi_1++;
			printf("Pososto : %.2f%%\n",(float)(apantisi_1/sunolo)*100);
		}
		else if(apantisi==2)
		{
			apantisi_2++;
			printf("Pososto : %.2f%%\n",(float)(apantisi_2/sunolo)*100);
		}
		else if(apantisi==3)
		{
			apantisi_3++;
			printf("Pososto : %.2f%%\n",(float)(apantisi_3/sunolo)*100);
		}
		else
		{
			printf("\nDen yparxei auti i epilogi!\n");
			sunolo=sunolo-1;
		}
		if(apantisi_1>apantisi_2 && apantisi_1>apantisi_3)
			printf("\nPerisoteres apantiseis #1 : %.2f%%\n",(float)(apantisi_1/sunolo)*100);
		else if(apantisi_2>apantisi_1 && apantisi_2>apantisi_3)
			printf("\nPerisoteres apantiseis #2 : %.2f%%\n",(float)(apantisi_2/sunolo)*100);
		else if(apantisi_3>apantisi_1 && apantisi_3>apantisi_2)
			printf("\nPerisoteres apantiseis #3 : %.2f%%\n",(float)(apantisi_3/sunolo)*100);
	}

}
