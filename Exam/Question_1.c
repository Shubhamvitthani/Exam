#include<stdio.h>
main()
{
	long int n,i,mul=1;

	printf("enter factorial number:");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		mul = mul * i;
	}
	printf("\n\nmultiplaction is %ld",mul);
}