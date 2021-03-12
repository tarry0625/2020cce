#include <stdio.h>

int main()
{
	int s,a50,a5,a1,b;
	scanf("%d",&s);
	a50=s/50;
	b=s%50;
	a5=b/5;
	a1=b%5;
	
	printf("%d=50*%d+5*%d+1*%d\n",s,a50,a5,a1);
	
	return 0;
}
