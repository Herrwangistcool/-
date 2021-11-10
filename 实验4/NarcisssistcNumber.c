/*
水仙花数是指这样一种三位数，各个数位的立方和加起来等于这个数本身，如153=13+53+33，试编制一个程序，验证从键盘上输入的一个数是否为水仙花数。
*/
#include<stdio.h>
int IsNarcissistic(int);
int main(){
	// int n;
	// printf("请输入一个数，以验证其是否为水仙花数：\n");
	// scanf("%d",&n);
	// if(IsNarcissistic(n)==1){
	// 	printf("%d是水仙花数",n);
	// }else if(IsNarcissistic(n)==0){
	// 	printf("%d不是水仙花数",n);
	// }else{
	// 	printf("输入错误！");
	// }
	printf("以下为所有水仙花数：\n");
	for(int i=100; i<1000; i++){
		if(IsNarcissistic(i)==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
int IsNarcissistic(int n){
	if(n<100 || n>=1000){
		return -1;	//输入错误
	}
	int s=n%10;	//个位
	int h=n/100;	//百位
	int t=(n-h*100)/10;	//十位
	if(s*s*s+h*h*h+t*t*t==n){
		return 1;	//是水仙花数
	}else{
		return 0;	//不是水仙花数
	}
}
