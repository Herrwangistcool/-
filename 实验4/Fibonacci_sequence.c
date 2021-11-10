#include<stdio.h>
long long int Fibonacci(int);
int main(){
    int n;
    printf("In put the number of month:\n");
    scanf("%d",&n);
    long long int F;
    for(int i=1; i<=n; i++){
        F=Fibonacci(i);
        printf("%20lld",F);
        if(i%4==0){
            printf("\n");
        }
    }
    return 0;
}

long long int Fibonacci(int n){
    if(n==1){
        return 1;
    }else if (n==2)
    {
        return 1;
    }else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }  
}