//Input a integer, if the interger divisible by 3 and 5, then print 3 and 5; if not print the opposite number
//Author Daniel_Wang
//Date 2021.09.28
#include<stdio.h>
int main(){
	int i;
	if(scanf("%d",&i) && i!=0){
		if(!(i%3 && i%5)){
			printf("3 5\n");
		}else{
			printf("%d\n",-i);
		}
	}else{
		printf("Incorrect input\n");
	}
	return 0;
}
