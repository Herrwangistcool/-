#include "stdio.h"
int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<i+1;j++)
			printf("%d*%d=%d\t",i,j,i*j);
		putchar('\n');
	}
}