#include <stdio.h>
int main()
{
	int n;

	scanf("%d",&n);

	int sum=0, a=1;

	for (int i=1;i<=n;i++)
	{
		a*=i;
		sum+=a;
	}
	printf("請輸入任一整數:1!到%d!的總和為=%d \n",n,sum);
}
