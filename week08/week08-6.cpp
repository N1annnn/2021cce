#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("�п�J�j�p:\n");
   scanf("%d",&n);

   for (int i=1;i<=n;i++)
   {
   		for(int j=1;j<=i;j++)
   		{
   			printf(" ");
   		}
   		for (int z=1;z<=n;z++)
   		{
   			printf("*");
   		}
   		printf("\n");
   }
//your code

   return 0;
}
