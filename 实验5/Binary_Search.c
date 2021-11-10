/*
有15个数按由小到大顺序存放在一个数组中，
输入一个数，要求用折半查找法找出该数是
数组中第几个元素的值。如果该数不在数组中，
则打印出“None”。
*/
#include<stdio.h>
int binarySearch(int arr[], int, int, int);
int main(){
    int len=15, index=0, n=0;
    printf("Input the number you want:");
    scanf("%d",&n);
    int a[len];
    for(int i=0; i<len; i++){
        a[i]=i+1;
    }
    index=binarySearch(a, 0, len, n);
    if(index!=-1){
        printf("The index of %d is %d.\n",n,index);
    }else{
        printf("None!\n");
    }
}

int binarySearch(int arr[], int low, int high, int x){
    int mid=(low+high)/2;
    if(x>arr[high-1] || x<arr[low]){
        return -1;
    }
    if(arr[mid]==x){
        return mid;
    }else if(x<arr[mid]){
        return binarySearch(arr, low, mid, x);
    }else if(x>arr[mid]){
        return binarySearch(arr, mid, high, x);
    }
}