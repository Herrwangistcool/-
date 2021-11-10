#include<stdio.h>
int IsNarcissisticNumber(int);
int main(){
	int n;
	printf("Input a number(100<=n<1000):\n");
	scanf("%d",&n);
	int h=n/100;
	int t=(n-h*100)/10;
	int s=n%10;
	if(n<100 || n>=1000){
		printf("Error input!\n");
	}else if(IsNarcissisticNumber(n)){
		printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",n,h,h,h,t,t,t,s,s,s);
	}else{
		printf("Not a narcissistic number!\n");
	}
	return 0;
}

int IsNarcissisticNumber(int n){
	int h=n/100;
	int s=n%10;
	int t=(n-h*100)/10;
	if(n==h*h*h+t*t*t+s*s*s){
		return 1;
	}else{
		return 0;
	}
}
