//The circumference and area of circle
//Author Daniel_Wang
//Date 2021.09.27
#include<stdio.h>
#define PI 3.14159
int main(){
	float r, c, a;
	//radius, circumference, area
	scanf("%f",&r);
	c=r*PI*2;
	a=PI*r*r;
	printf("%.2f\n%.2f\n",c,a);
	return 0;
}
