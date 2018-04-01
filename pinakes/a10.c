#include <stdio.h>
#include <string.h>

int main()
{
	char name[30],len;

	fgets(name,30,stdin);
	len=strlen(name);

	for(int x=0;x<len;x++)
	{
		if(name[x]==' ')
		{
			for(int y=x;y<len;y++)
				name[y]=name[y+1];
			len--;
		}									
	}					
	printf("%s",name);	
}