#include<stdio.h>
int main(){
    int arr[3][3];
    int sum=0;
    char ch;
    //二维数组输入，元素用空格隔开，输完一行按enter
    for(int i=0; i<3; i++){
        int len=0;
        do{
            scanf("%d%c",&arr[i][len],&ch);
            len++;
        }while(ch!='\n');
    }
    for(int j=0; j<3; j++){
        //对角相加
        sum+=arr[j][j]+arr[2-j][j];
    }
    sum=sum-arr[1][1];
    printf("%d\n",sum);
    return 0;
}