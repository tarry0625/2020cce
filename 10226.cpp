#include <stdio.h>
#include <string.h>//strcmp strcpy()
#include <stdlib.h>//qsort
char line[1000];
char tree[1000000][32];//step04: �}�C tree
int com(const void*p1, const void *p2)
{
	return strcmp ((char*) p1 ,(char*) p2 );
}

int main()
{
	int t;
	scanf("%d\n\n", &t);//step01: Ū���

	for(int s=0;s<t;s++)//step01: Ū��� gets() �@���
	{
		int n=0;//�ڭ̻ݭn���D���X�ʾ�!!!
		while( gets(line)!=NULL )
		{
			if(strcmp(line,"")== 0 ) break;//�Ŧ�]�n���}

			strcpy (tree[n],line);//step04: ��𪺦W�r���tree
			//printf("%s\n",line);
			n++;//step03: �έp�𪺼ƥ�
		}
		//printf("���X�ʾ�? %d\n",n);
		//step05�Ӿ𪺦W�r�ӱƧ� =>step04 �}�C�b����
		qsort( tree , n , 32 , com );
		if(s>0) printf("\n");//step07: �e�����ťզ�
		int ans=1;//�s���}�l
		printf("%s ",tree[0]);
		for(int i=0;i<n-1;i++)
		{
			if( strcmp(tree[i],tree[i+1])==0 )//�ۦP
			{
				ans++;
			}
			else//���ۦP�A���� + �s���}�l
			{
				printf("%.4f\n", 100*ans/(float)n );//printf("%d\n",ans);
				ans=1;
				printf("%s ",tree[i+1]);//�s���}�l

			}
			//printf("%s\n", tree[i]);//step04: ��tree[i]�L�X��
		}

		printf("%.4f\n",100*ans/(float)n);//�̫᦬��
	}

}
