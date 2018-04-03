#include <stdio.h>

int main()
{
	char name[30];

	fgets(name,30,stdin);


	for(int x=0;x<30;x++)
	{
		if(name[x]==' ')
		{
			for(int y=x;y<30;y++)
				name[y]=name[y+1];
			x--;
		}									
	}					
	printf("%s",name);	
}
