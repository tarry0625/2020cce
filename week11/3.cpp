#include <stdio.h>
struct date
{
    int ans;
    char c;
};
struct date box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c, box.ans);
}
