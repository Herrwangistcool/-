#include<stdio.h>
int factorial(int);
int main(){
    int n,sum=0;
    printf("Input a number:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=factorial(i);
    }
    printf("%d\n",sum);
    return 0;
}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}