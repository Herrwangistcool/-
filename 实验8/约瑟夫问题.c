/*
 题目描述
n个人围成一圈，顺序排号。从第1个人开始报数（从1到m）,凡报到m的人退出圈子，问最后留下的是原来第几号。用函数和指针实现以上功能，返回数组中最后留下的元素序号。
输入
1行：
n和m，中间使用空格分开，分别表示总人数和该出局的报数。
输入
输出最后留下者的序号x,输出格式为：NO.x
 */
#include<stdio.h>
int Josef(int *a, int n, int m);
int main(){
	int n, m;
	printf("Enter n and m:\n");
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=i+1;
	}	
	int No;
	No=Josef(a,n,m);
	printf("NO.%d\n",No);
	return 0;
}
int Josef(int *a, int n, int m){
	int count=0, k=0, j=0, i=0;
	//count用于统计0的个数，k用于表示当前序号，j用于累加每一个非0项，i正常累计用于控制循环进行
	while(count<n-1){
		k=i%n;
		if(*(a+k)!=0){
		//遇到非0则j+1
			j++;
			if(j%m==0){
			//j%m代表非零项每过m次判断一次
				*(a+k)=0;
				count++;
			}
		}
		i++;
	}
	for(int h=0; h<n; h++){
		if(*(a+h)!=0){
			return h+1;
		}
	}
	return 0;
}


