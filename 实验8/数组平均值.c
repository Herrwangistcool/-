#include<stdio.h>
#include<stdlib.h>
int getaver(int *p);
int main(){
	int a[10];
	printf("Input 10 number:\n");
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);		
	}
	int aver=getaver(a);
	printf("Average is %d\n",aver);
	return 0;
}
int getaver(int *p){
	int sum=0;
	for(int i=0; i<10; i++){
		sum+=*p;
		p++;
	}
	return sum/10;
}
