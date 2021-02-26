# 2020cce
##第一題
(SOIT106_BASE_002) 基礎題：找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000
```C
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
```
##第二題
(SOIT106_BASE_005) 基礎題：因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000。
```C
#include <stdio.h>

int main()
{
	int a,i,s=0;
	scanf ("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		s++;
	}
	printf ("%d\n",s);
	
	
	
	
	return 0;
}
```
##第三題
(SOIT106_BASE_010) 基礎題：找倍數 : 連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000
```C
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

```
##第四題
(SOIT106_BASE_012) 基礎題：整數轉換為等級 : 輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F。
```C
#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
	printf("A\n");
	else if(a<90 && a>=80)
	printf("B\n");
	else if(a<80 && a>=60)
	printf("C\n");
	else
	printf("F\n");
	
	
	
	return 0;
}

```
##第五題
(SOIT106_ADVANCE_002) 進階題：分式化簡 : 輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 
數字範圍：整數1 – 10000
```C
#include <stdio.h>
int main()
{
	int a,b,i,ans=1;
	scanf ("%d %d",&a,&b);
	
		for(i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				ans=i;
			}
			
		}

	printf("%d %d\n",a/ans,b/ans);
	
	
	return 0;
}

```
