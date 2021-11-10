/*
众所周知，黄山是一片山（而不是一座山）。
我们假设这些山排成了一排。每座山有各自的高度。
现在游客们从最左边看山，有些山因为高度没有它左边的某座山高，
就会被遮住，游客们就无法看到，也就是说对于一座山而言，
只有当这座山比它左边所有的山都高的时候，游客们才能看到这座山。
现在想请你告诉游客，他能看到几座山。
这个问题可以描述为找出数组中比前面所元素都要大的元素个数。
输入
2行：
第1行，一个整数N（1<=N<=100000）,表示有N座山。
第2行，N个用空格隔开的正整数，依次表示从左到右每座山的高度。山的高度在长整型数(long int)范围内。
输出
1行:
包含一个正整数，表示从左端看，能看到多少座山。
*/
#include<stdio.h>
int main(){
    int N=0;
    printf("Input the number of mountains: ");
    scanf("%d",&N);
    long int arr[N];
    char ch;
    int i=0, top=0, count=1;
    do{
        scanf("%ld%c",&arr[i],&ch);
        i++;
    }while(ch!='\n');
    for(int j=0; j<N-1; j++){
        if(arr[j]>top){
            top=arr[j];
        }
        //top记录前面最高的山
        if(arr[j+1]>top){
            count++;
            //如果后面的山比前面最高的山高，则加一
        }
    }
    printf("You can see %d mountains.\n",count);
    return 0;
}