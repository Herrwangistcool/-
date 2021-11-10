/*
银行一共n个客户在排队，每个客户因业务不同，需要的时间从1~m分钟不等。银行大堂经理根据每个客户的业务类型，安排业务排队，使n个客户的总等待时间最少。例如，某个客户办理业务需要5分钟，他面有4个客户在等待，则该客户产生的等待时间是5*4=20分钟，而如果他只需要1分钟，则他产生的等待时间是4分钟。
输入
2行：
第1行，1个整数n，表示有n个客户
第2行，n个整数，表示每个客户需要等待时间
输出
1行：
整数n，表示最少需要等待的时间
*/
#include<stdio.h>
void BubbleSort(int a[], int n);
int main(){
    int n;
    printf("Enter the number of customers.\n");
    scanf("%d",&n);
    int a[n];
    int len=0, sum=0;
    char ch;
    do
    {
        scanf("%d%c",&a[len],&ch);
        len++;
    } while (ch!='\n');
    BubbleSort(a,n);
    for(int i=0; i<n; i++){
        sum+=a[i]*i;
    }
    printf("The minimum waiting time is %d.\n",sum);
    return 0;
}
//冒泡排序
void BubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}