#include<stdio.h>

main()
{
	char ch[100];
	char *p1;
	p1 = &ch;
	
	printf("enter string =");
	gets(ch);
	printf("%d",strlen(p1));
}
	
	
