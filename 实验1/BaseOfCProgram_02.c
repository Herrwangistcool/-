// BaseOfCProgram_02.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int QuadraticEquation(int);

int main(int argc, char* argv[])
{
	int x,y=0;
	scanf("%d",&x);
	y=QuadraticEquation(x);
	printf("%d\n",y);
	return 0;
}

int QuadraticEquation(int x){
	int y=0;
	y=x*x+2*x-10;
	return y;
}