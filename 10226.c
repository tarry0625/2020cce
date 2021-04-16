#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int com(const void * p1 , const void * p2 )
{
	return strcmp ((char*)p1,(char*)p2);
}

int main()
{
	int T;
	scanf("%d\n\n", &T);

	int n=0;
	for(int i=0; ; i++)
	{
		char* now=gets( tree[i] );
		if(now==NULL)
		{
			n=i;
			break;
		}
		if( strcmp(tree[i],"")==0)
		{
			n=i;
			break;
		}
	}

	qsort (tree ,n,32,com );

	printf("%s ",tree[0] );
	int ans=1;
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(tree[i],tree[i+1])!=0)
		{
			printf("%.4f\n",100*ans/(float)n);
			printf("%s ",tree[i+1] );
			ans=1;
		}
		else
		{
			ans++;
		}
	}
	printf("%.4f\n",100*ans/(float)n);
}
