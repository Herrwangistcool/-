#include<stdio.h>
#define PI 3.1415926
float circumference(float);
float area(float);
int main(){
    float radius;
    printf("Input the radius:\n");
    scanf("%f",&radius);
    printf("Circumference is %.2f\n",circumference(radius));
    printf("Area is %.2f\n",area(radius));
    return 0;
}
float circumference(float radius){
    return 2*PI*radius;
}
float area(float radius){
    return PI*radius*radius;
}