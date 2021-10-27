#include <stdio.h>
int main()
{
    int i; ///1973 C發明者的寫法
    for (i=0;i<=3;i++)
    {
        printf("有幾次呢?\n");
    }
    ///4次

    ///1998 新版寫法
    for (int i=0;i<3;i++)
    {
        printf("老師推薦,有幾次?\n");
    }
    ///3次
}
