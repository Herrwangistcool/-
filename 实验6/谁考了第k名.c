/*
题目描述
在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求考第k名学生的学号和成绩。
输入
第一行有两个整数，分别是学生的人数n（1≤n≤100），和求第k名学生的k（1≤k≤n）。
其后有n行数据，每行包括一个学号（整数）和一个成绩（浮点数），中间用一个空格分隔。
输出
1行
输出第k名学生的学号和成绩，中间用空格分隔。（注：请用%g输出成绩）
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
typedef struct {
    char no[20];
    float score;
}stu;

typedef struct{
    stu *elem;
    int length;
}SqList;

int InitList(SqList *L);
void InputList(SqList *L, int n);
void DisplayList(SqList *L);
void SortList(SqList *L);

int main(){
    SqList *L;
    InitList(L);
    int n, k;
    printf("Input the total number of student and the rank you want: ");
    scanf("%d%d",&n,&k);
    InputList(L,n);
    SortList(L);
    printf("\n%s %g\n",L->elem[k-1].no,L->elem[k-1].score);
    //DisplayList(L);
    return 0;
}
//顺序表初始化
int InitList(SqList *L){
    L->elem=(stu *)malloc(sizeof(stu)*MAXSIZE);
    if (!L->elem)
    {
        exit(0);
    }
    L->length=0;
    return 1;
}
//输入顺序表的内容
void InputList(SqList *L, int n){
    for (int i = 0; i < n; i++){
        scanf("%s %f",L->elem[i].no,&L->elem[i].score);
        L->length++;
    }
}

void DisplayList(SqList *L){
    for(int i=0; i<L->length; i++){
        printf("%s %g\n",L->elem[i].no,L->elem[i].score);
    }
}
//选择排序
void SortList(SqList *L){
    for(int i=0; i<L->length-1; i++){
        int max=i;
        for(int j=i+1; j<L->length; j++){
            if(L->elem[j].score>L->elem[max].score){
                max=j;
            }
        }
        float temp=L->elem[i].score;
        L->elem[i].score=L->elem[max].score;
        L->elem[max].score=temp;
        char no_t[20];
        strcpy(no_t,L->elem[i].no);
        strcpy(L->elem[i].no,L->elem[max].no);
        strcpy(L->elem[max].no,no_t);
    }
}