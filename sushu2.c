#include<stdio.h>
#include<math.h>
int fun(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	
		if (n%i == 0)
		{
		
			return 0;
		}
		
			return 1;
	
}
void main()
{
	int d,n=0, i;
	printf("输入正整数n：");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++)
	{

		d = fun(i);
		if (d)
		printf("%d\n", i);

	}
}
