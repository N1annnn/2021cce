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
	printf("�п�J���@���:1!��%d!���`�M��=%d \n",n,sum);
}
