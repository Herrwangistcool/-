// BaseOfCProgram_04.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main() {
  float Principal=1000;
  float r1,r2,r3;
  double p1,p2,p3;
  scanf("%f%f%f",&r1,&r2,&r3);
  p1=Principal+Principal*r1;
  p2=Principal+Principal*r2;
  p3=Principal+Principal*r3;
  printf("p1=%.6lf p2=%.6lf p3=%.6lf\n",p1,p2,p3);
  return 0;
}