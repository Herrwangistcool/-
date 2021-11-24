/*
模拟汉诺塔的移动方案，每次输出第n个盘子的移动方法，
如“a—2—c”表示从柱子“a”将编号为 “2”的盘子移动到柱子 “c”。
*/
#include<stdio.h>
int NumOfMoves=0;
int Hanoi(int,char,char,char);
int main(){
    int n;
    char origin='A',middle='B',destination='C';
    printf("Input a number:\n");
    scanf("%d",&n);
    Hanoi(n,origin,middle,destination);
    printf("Number of Moves: %d\n",NumOfMoves);
    return 0;
}
int Hanoi(int n, char origin, char middle,char destination){
    if(n==1){
        NumOfMoves++;
        printf("%c--%d--%c\n",origin,n,destination);
    }else{
        Hanoi(n-1,origin,destination,middle);
        NumOfMoves++;
        printf("%c--%d--%c\n",origin,n,destination);
        Hanoi(n-1,middle,origin,destination);
    }
    return 0;
}