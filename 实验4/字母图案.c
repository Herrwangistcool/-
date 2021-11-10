#include"stdio.h"
int main()
{
	char c[7]={'A','B','C','D','E','F','G'};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=7;j>i+1;j--)
		    putchar(' ');
		for(j=0;j<2*i+1;j++)
			putchar(c[i]);
		putchar('\n');		
	}
	
	for(i=5; i>=0; i--)
	{
		for(j=5-i; j>=0; j--)
		    putchar(' ');	    
		for(j=0;j<2*i+1;j++)
			putchar(c[i]);
		putchar('\n');		
	}
	return 0;
}