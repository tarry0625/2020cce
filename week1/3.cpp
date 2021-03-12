#include <stdio.h>
int main()
{
	int n,i,s=0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		if(n%3==0)
		s++;
	}
	printf("%d\n",s);
}
