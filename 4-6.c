#include <stdio.h>

int main()
{
	float sum,inp;

	while(sum<=100 && sum>-100 )
	{
		scanf("%f",&inp);
		sum+=inp;
	}
	printf("%.2f\n",sum );
}