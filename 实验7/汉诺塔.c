/*
算法思路： 
1.如果只有一个金片，则把该金片从源移动到目标棒，结束。　　
2.如果有n个金片，则把前n-1个金片移动到辅助的棒，然后把自己移动到目标棒，最后再把前n-1个移动到目标棒。
*/
#include<stdio.h>
int Hanoi(int,char,char,char);
int main(){
    int n;
    char origin='A',middle='B',destination='C';
    printf("Input a number:\n");
    scanf("%d",&n);
    Hanoi(n,origin,middle,destination);
    return 0;
}
int Hanoi(int n, char origin, char middle,char destination){
    if(n==1){
        printf("%c To %c\n",origin,destination);
    }else{
        Hanoi(n-1,origin,destination,middle);
        printf("%c To %c\n",origin,destination);
        Hanoi(n-1,middle,origin,destination);
    }
    return 0;
}