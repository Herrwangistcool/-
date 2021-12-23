#include<stdio.h>
void invert(int *p, int n);
int main(){
	int n;
	printf("Enter the length of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Input the number of array:\n");
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);	
	}	
	invert(a,n);
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
void invert(int *p, int n){
	int mid=n/2;
	int swap;
	for(int i=0; i<mid; i++){
		swap=*(p+i);
		*(p+i)=*(p+n-i-1);
		*(p+n-i-1)=swap;
	}
}
