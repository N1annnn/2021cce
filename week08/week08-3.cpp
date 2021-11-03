#include <stdio.h>
int main()
{
    for (int j=2;j<=100;j++)
    {
        int bad=0;
        for(int i=2;i<j;i++)
        {
            if(j%i==0) bad=1;
        }
        if(bad==0) printf("%d ",j);
    }
}
