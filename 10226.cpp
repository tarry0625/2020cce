#include <stdio.h>
#include <string.h>//strcmp strcpy()
#include <stdlib.h>//qsort
char line[1000];
char tree[1000000][32];//step04: 陣列 tree
int com(const void*p1, const void *p2)
{
	return strcmp ((char*) p1 ,(char*) p2 );
}

int main()
{
	int t;
	scanf("%d\n\n", &t);//step01: 讀資料

	for(int s=0;s<t;s++)//step01: 讀資料 gets() 一整行
	{
		int n=0;//我們需要知道有幾棵樹!!!
		while( gets(line)!=NULL )
		{
			if(strcmp(line,"")== 0 ) break;//空行也要離開

			strcpy (tree[n],line);//step04: 把樹的名字放到tree
			//printf("%s\n",line);
			n++;//step03: 統計樹的數目
		}
		//printf("有幾棵樹? %d\n",n);
		//step05照樹的名字來排序 =>step04 陣列在哪裡
		qsort( tree , n , 32 , com );
		if(s>0) printf("\n");//step07: 前面有空白行
		int ans=1;//新的開始
		printf("%s ",tree[0]);
		for(int i=0;i<n-1;i++)
		{
			if( strcmp(tree[i],tree[i+1])==0 )//相同
			{
				ans++;
			}
			else//不相同，收尾 + 新的開始
			{
				printf("%.4f\n", 100*ans/(float)n );//printf("%d\n",ans);
				ans=1;
				printf("%s ",tree[i+1]);//新的開始

			}
			//printf("%s\n", tree[i]);//step04: 把tree[i]印出來
		}

		printf("%.4f\n",100*ans/(float)n);//最後收尾
	}

}
