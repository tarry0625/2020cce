#include <stdio.h>

struct DATA{
        int x,y;
}a[3];
struct DATA b={100,200};

int main()
{
    for(int i=0; i<3 ;i++)
    {
        printf("a[%d]:%d %d\n",i, a[i].x, a[i].y);
    }

    struct DATA c;
    printf("c: %d %d 像亂碼\n",c.x,c.y);

    c=b; ///較好的寫法: c.x=b.x; c.y=b.y;
    printf("c: %d %d 像亂碼\n",c.x,c.y);

}
