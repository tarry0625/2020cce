#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[100][10];
char other[100];
int compare( const void * p1,const void *p2)
{
	char * s1 =(char*) p1;
	char * s2 =(char*) p2;
	return strcmp( s1,s2);
}
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		gets( other );
	}

	qsort (a, n , 10 ,compare);

	for(int i=0 ; i<n ; i++)
	{
		if(a[i-1]==a[i])
		{
			ans++;
		}
		else
		{
			printf("%s %d\n",a[i],ans);
		}
	}
}
