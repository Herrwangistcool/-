// BaseOfCProgram_03.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
float FtoC(float);

int main(int argc, char* argv[])
{
	float F,C;
	scanf("%f",&F);
	C=FtoC(F);
	printf("%.2f\n",C);
	return 0;
}

float FtoC(float F){
	float C=0;
	C=5*(F-32)/9;
	return C;
}