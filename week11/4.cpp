#include <stdio.h>
typedef struct date
{
    int ans;
    char c;
}DATA;
///struct date box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c, box.ans);
}
