#include <stdio.h>

int main()
{
	float ksenodoxio_a=60,ksenodoxio_b=50,ksenodoxio_c=45;
	int atoma,meres=4;
	char ksenodoxio;

	printf("Atoma & Ksenodoxio : \n");
	scanf("%d %c", &atoma,&ksenodoxio);

	if(ksenodoxio == 'A')
	{
		printf("Sunoliko kostos : %.2f $\nAtomiko kostos : %.2f $\n",
			(((float)atoma*ksenodoxio_a)/2)*meres,((((float)atoma*ksenodoxio_a)/2)/atoma)*meres );
	}
	else if(ksenodoxio == 'B')
	{
		printf("Sunoliko kostos : %.2f $\nAtomiko kostos : %.2f $\n",
			(((float)atoma*ksenodoxio_b)/2)*meres,((((float)atoma*ksenodoxio_b)/2)/atoma)*meres );
	}
	else if(ksenodoxio == 'C')
	{
		printf("Sunoliko kostos : %.2f $\nAtomiko kostos : %.2f $\n",
			(((float)atoma*ksenodoxio_c)/2)*meres,((((float)atoma*ksenodoxio_c)/2)/atoma)*meres );
	}
	else
	{
		printf("Epiloges ksenodoxiwn : 'A', 'B', 'C'\n");
		return main();
	}
}