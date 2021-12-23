#include<stdio.h>
void max_min_value(int *number, int n);
int main(){
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d number of array:\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}	
	max_min_value(a,n);
	printf("Result is: \n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
void max_min_value(int *number, int n){
	int max, min, max_n=0, min_n=0;
	int *temp, swap;
	max=min=*number;
	temp=number;
	for(int i=0; i<n; i++){
		if(*temp>max){
			max=*temp;
			max_n=i;
		}else if(*temp<min){
			min=*temp;
			min_n=i;
		}
		temp++;
	}
	//交换数值
	*(number+min_n)=*number;
	*number=min;
	*(number+max_n)=*(number+n-1);
	*(number+n-1)=max;
}
