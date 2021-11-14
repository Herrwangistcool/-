/*
题目描述
给定10个整数的序列，要求对其重新排序。排序要求:
1.奇数在前，偶数在后；
2.奇数按从大到小排序；
3.偶数按从小到大排序。
输入
1行：
输入一行，包含10个整数，彼此以一个空格分开，每个整数的范围是大于等于0，小于等于100。
输出
1行：
按照要求排序后输出一行，包含排序后的10个整数，数与数之间以一个空格分开。
*/
#include<stdio.h>
#include<stdlib.h>

void DisplaySeq(int *);
void SortMax(int *, int);
void SortMin(int *, int);

int main(){
    int seq_origin[10], seq_sorted[10];
    int odd[10], even[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&seq_origin[i]);
    }
    int count_o=0, count_e=0;
    //判断奇偶，分别放到奇数数组和偶数数组
    for(int i=0; i<10; i++){
        if(seq_origin[i]%2==0){
            even[count_e]=seq_origin[i];
            count_e++;
        }else if (seq_origin[i]%2!=0)
        {
            odd[count_o]=seq_origin[i];
            count_o++;
        }
    }
    //分别给奇数组和偶数组排序
    SortMax(odd, count_o);
    SortMin(even, count_e);
    //将奇数数组与偶数数组输入到新数组中
    for (int i = 0; i < count_o; i++)
    {
        seq_sorted[i]=odd[i];
    }
    for (int i =0; i < 10; i++)
    {
        seq_sorted[i+count_o]=even[i];
    }
    DisplaySeq(seq_sorted);
    return 0;
}

void DisplaySeq(int *seq){
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",seq[i]);
    }
    printf("\n");
}
//冒泡排序
void SortMax(int *seq, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(seq[j]<seq[j+1]){
                int temp=seq[j];
                seq[j]=seq[j+1];
                seq[j+1]=temp;
            }
        }
    }
}
//选择排序
void SortMin(int *seq, int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(seq[j]<seq[min]){
                int temp=seq[j];
                seq[j]=seq[min];
                seq[min]=temp;
            }
        }
    }
}