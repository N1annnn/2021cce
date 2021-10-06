# 2021cce
MCUCCE 資傳一乙上課所學

README.md是用MarkDown語法

單#為大標雙#為小標

# 第02週
```C
#include <stdio.h>
int main()
{
    printf( "Hello World\n");
}
```
# 第03週
#1
```C
#include <stdio.h>
int main()
{
    printf( "Hello World\n");
}
```
#2
```C
#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    printf("Hello World!\n");
}
```
#3
```C
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b );
}
```
#4
```C
#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    printf( "%d" , 300 );
}
```
#5
```C
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Hello%dWorld\n",300);
    printf("%d %d    %d", 300 ,200, 100);
}
```
#6
```C
#include <stdio.h>
int main()
{
    int a;
    printf("請輸入一個整數值a: ");
    scanf("%d",&a);

    printf("a的值是:%d\n", a);
}
```

# 第04週

#1
```C
#include <stdio.h>
int main()
{
    int a=123, b=10;
    printf("%d\n",a/b);
    printf("%d\n",a%b);
}
```

#2
```C
#include <stdio.h>
int main()
{
    int a=123, b=10;
    int ans=a/b;
    float ans2=123.0/10.0;
    printf("整數除整數%d\n",ans);
    printf("float的除法%f\n",ans2);
}
```

#3
```C
#include <stdio.h>
int main()
{
    float pi=3.14159265358979;
    double pii=3.14159265358979;
    printf("%f\n",pi);
    printf("%f\n",pii);

    printf("%.8f\n", pii);
    printf("%.12f\n",pii);
    printf("%9.5f\n",pii);
}
```

#4
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n );
	
	if (n>=90)
	printf("A+");
	else if (n>=80)
	printf("A");
	else if (n>=70)
	printf("B");
	else if (n>=60)
	printf("C");
	else
	printf("D");
}
```

