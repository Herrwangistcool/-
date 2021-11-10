/*
现有一组已经排好序的单词，根据字母顺序，将一个新单词插入队列中。
输入
若干行：
第1行，整数n，表示接下来输入n个单词
第2~n+1行，n个从小到大排列的单词
第n+1行，要插入的单词

输出
若干行：
插入后的单词，每行1个
*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Input the number of words: ");
    scanf("%d",&n);
    char arr[n+1][20];
    for (int i = 0; i <= n; i++)
    {
        scanf("%s",arr[i]);
    }
    for(int j=0; j<n; j++){
        if(strcmp(arr[n], arr[j])<0){
            //如果最后一个单词比第j个单词小，则第j个后面的单词向后移一位
            char str_t[20];
            strcpy(str_t,arr[n]);
            for(int k=n-1; k>=j; k--){
                strcpy(arr[k+1],arr[k]);
            }
            //把最后一个单词复制给第j个
            strcpy(arr[j],str_t);
            break;
        }
    }
    for (int i = 0; i <=n; i++)
    {
        printf("%s\n",arr[i]);
    }
    
    return 0;
}