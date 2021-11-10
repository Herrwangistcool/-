// BaseOfCProgram_01.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
void NumberChange(int *, int *);

int main(int argc, char* argv[])
{
	int a, b;
	scanf("%d%d",&a,&b);
	NumberChange(&a,&b);
	printf("%d %d\n",a,b);
}

void NumberChange(int *a, int *b){
	int i;
	i=*a;
	*a=*b;
	*b=i;
}
