#include<stdio.h>
main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c",'A'-1+r);
		}
		printf("\n");
	}
}
