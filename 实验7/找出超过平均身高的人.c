/*
小明班上有n个同学，编程找出谁的身高超过全班的平均身高(整数)。
编写函数float inputdata(int a[],int n)，输入n和个的身高，
数值存放在主函数的数组a中（a的元素个数最多为100），并返回平均身高；
编写函数int findhigh(int a[],int n,float ave)，依次打印出每个超
出平均身高ave的序号和身高，最后输出超出平均身高的人数。
*/
#include<stdio.h>
float inputdata(int a[],int n);
int findhigh(int a[], int n, float ave);
int main(){
    int n, count;
    int a[50]={0};
    float average=0;
    printf("Input the number of classmates:\n");
    scanf("%d",&n);
    printf("Enter the height of classmates one by one:\n");
    average=inputdata(a,n);
    printf("AV=%.1f\n",average);
    count=findhigh(a,n,average);
    printf("\nTotal:%d\n",count);
    return 0;
}
float inputdata(int a[],int n){
    float sum=0;
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    return sum/n;
}
int findhigh(int a[], int n, float ave){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>ave){
            count++;
            printf("%d:%d\t",i+1,a[i]);
        }
    }
    return count;
}