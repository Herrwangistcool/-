/*
有一数组a[N]，需要对其局元素进行从高到低排序，请编写函数localsort(int  *start ,int len)，实现数组指定位置开始后的len个元素从高到低排序。N<100，start+len<&a[N-1]。
输入
2行：
第1行,n,b,l，n表示数组元素个数，n<=N,b表示开始排序的下标，1<b<=n,l表示从开始下标起排序元素长度,1<=b+l<=n；
第2行,n个数组元素。
输出
1行，局部排序后的数组

【示例1】
输入
10 2 5
1 2 3 4 5 6 7 8 9 10
输出
1 6 5 4 3 2 7 8 9 10

输入
5 1 5
6 8 7 4 2
输出
8 7 6 4 2
*/
#include<stdio.h>
typedef int status;
#define OK 1
#define False 0
status localsort(int *start, int len);
int main(){
	int a[100];
	int n, b, l;
	printf("输入数组元素个数:\n");
	scanf("%d",&n);
	printf("输入开始排序的下标：");
	scanf("%d",&b);
	printf("输入排序的长度：");
	scanf("%d",&l);
	printf("输入十个数组元素：");
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	localsort(&a[b-1],l);
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
status localsort(int *start, int len){
	int *tmp;
	tmp=start;
	if(!tmp){
		return False; 
	}
	for(int i=0; i<len-1; i++){
		int index;
		int num=*(tmp+i);
		for(int j=i+1; j<len; j++){
			if(*(tmp+j)>num){
				num=*(tmp+j);
				index=j;	
			}
		}
		*(tmp+index)=*(tmp+i);
		*(tmp+i)=num;
	}
	return OK;
}
