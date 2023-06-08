#include<stdio.h>

main() 
{
	int a[100];
	int i,n;
	int *p1;
	p1 = a;
	
	printf("enter array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("elements of array =\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p1+i));
	}
	printf("reverse array =\n");
	
	int *rev;
	rev=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*rev--);
	}
}
