/*
编写函数reduction(int m,int n)，调用最公约数函数gcd(int a,int b)，实现分数化简，如果是真分数，
写成a/b形式，如果是假分数，写成n+a/b形式。
输入一个分数，输出该分数的最简分数。
*/
#include<stdio.h>
int reduction(int,int);
int gcd(int,int);
int main(){
    int m,n;
    printf("Enter a fractional number:\n");
    scanf("%d/%d",&m,&n);
    reduction(m,n);
    return 0;
}
int reduction(int m, int n){
    if(m==n){
        printf("1\n");
    }else if (m>n)
    {
        int num;
        num=m/n;
        m=m-n;
        printf("%d+",num);
        return reduction(m,n);
    }else{
        /*
            这里原来写成了
            m=m/gcd(m,n);
            n=n/gcd(m,n);
            导致出错。
            因为第二次调用gcd()时，
            m值已经变了
        */
        int divisor=gcd(m,n);
        m=m/divisor;
        n=n/divisor;
        printf("%d/%d\n",m,n);
    }
    
}
int gcd(int m, int n){
    int temp;
    if(n>m){
        temp=m;
        m=n;
        n=temp;
    }
    if(m%n==0){
        return n;
    }else{
        return gcd(n,m%n);
    }
}