#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int c=a%b;
    printf("a大的是%d b中的是%d c小的是%d\n",a,b,c);
    while(1)
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a大的是%d b中的是%d c小的是%d\n",a,b,c);
    }
    printf("%d",b);
}
