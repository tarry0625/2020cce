#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[2000][80];
int com (const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char trash[80];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf ("%s",a[i]);
		gets ( trash );
	}
	qsort ( a , n , 80 , com );

	int ans=1;
	printf("%s ",a[0]);
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(a[i],a[i+1])!=0)
		{
			printf("%d\n",ans);
			printf("%s ",a[i+1]);
			ans=1;
		}
		else
		{
			ans++;
		}
	}printf("%d\n",ans);

}
