/*
又称猴子选大王问题。m个猴子围成一圈，从1开始报数，
报到n的猴子出局，剩下的猴子再从1开始报数，报到n者出局。
最后剩下的猴子为大王。
输入
1行：
两个整数，猴子数m和报数n
输出
大王的位置，如King is a[1]=1
*/

#include<stdio.h>
int main(){
    int m, n;
    printf("请输入猴子个数m，以及n\n");
    scanf("%d%d",&m, &n);
    int len=m, i=1, k=0, count=0;
    //i用来给循环计数，k为数组下标，count用于在循环中记录0
    int a[len];
    for(int j=0; j<len; j++){
        a[j]=j+1;
    }
    while (len>1){
        k=(i+count-1)%m;
        if(a[k]!=0){
            if(i%n==0){
                a[k]=0;
                len--;
            }
            i++;
        }else{
            count++;
            //当a[k]==0时，count加一，用于跳向下一位
        }
    }
    for(int i=0; i<m; i++){
        if(a[i]!=0){
            printf("King is a[%d]=%d\n",a[i],a[i]);
        }
    }
    return 0;  
}