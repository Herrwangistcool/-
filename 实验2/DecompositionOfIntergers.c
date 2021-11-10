//Input a 9-digit long integer, decompose it into 3 3-digit basic integers and output
//Author Daniel_Wang
//Date 2021.09.28
#include<stdio.h>
int main(){
	int l, b1, b2, b3;
	scanf("%d",&l);
	b1=l%1000;
	b2=(l/1000)%1000;
	b3=l/1000000;
	printf("%d %d %d\n",b1,b2,b3);
	return 0;
}
