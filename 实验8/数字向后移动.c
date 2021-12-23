/*
题目描述
有n个整数，编写函数int move_n(int* a,int n,int m)，使前面各数顺序向后移m个位置，即最后m个数变成最前面m个数。
输入
3行：
第1行，n
第2行，m
第3行，n个整数（中间以空格隔开）
输入
1行：
变序后的n个整数
【示例1】
输入
6
2
1 2 3 4 5 6
输出
5 6 1 2 3 4
【示例2】
输入
8
5
1 2 3 4 5 6 7 8
输出
4 5 6 7 8 1 2 3
*/
#include<stdio.h>
int move_n(int *a, int n, int m);
int main(){
	int n, m;
	printf("Enter a number n:\n");
	scanf("%d",&n);
	printf("Enter a number of m:\n");
	scanf("%d",&m);
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=i+1;
	}	
	move_n(a,n,m);
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
int move_n(int *a, int n, int m){
	int index=0;
	for(int i=0; i<n; i++){
		index=(i+m)%(n);
		*(a+index)=i+1;
	}
	return 0;	
}
