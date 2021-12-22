#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int ans=1;
	for( int i=1; i<=x; i++)
	{
		if( x%i==0 && y%i==0)
		ans=i;
	}
	printf("%d",ans);
}
