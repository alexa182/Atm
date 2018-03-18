#include <stdio.h>

void aaa(int a,int b,int c)
{
	if(a==1)
		printf("%d\n",b+c);
	else if(a==2)
		printf("%d\n",b*c);
	else if(a==3)
		printf("%.2f\n",(float)(b+c)/2);
	else
		printf("«αντικανονική κλήση συνάρτησης»\n");

}

int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	aaa(a,b,c);
}