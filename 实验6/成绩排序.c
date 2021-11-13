/*
给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。
输入
第一行为n (0 < n < 20)，表示班里的学生数目；
接下来的n行，每行为每个学生的名字和他的成绩, 中间用单个空格隔开。名字只包含字母且长度不超过20，成绩为一个不大于100的非负整数。
输出
n行
把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//定义学生结构体
struct student
{
    char name[20];
    float score;
    struct student *next_stu;
};
//定义头节点
struct student *stu_head;

void createStuList(int n);
void displayList();
void listSort(int n);

int main(){
    int n;
    printf("Input the number of students: ");
    scanf("%d",&n);
    createStuList(n);
    listSort(n);
    displayList();
    return 0;
}
//创建链表
void createStuList(int n){
    //current指向当前节点，temp用于指向上一个节点
    struct student *current, *temp;
    int i;
    //开辟一块内存空间给头节点
    stu_head=(struct student *)malloc(sizeof(struct student));
    if(stu_head==NULL){
        printf("Memory can not be allocated.");
    }else{
        printf("Input data for student 1: ");
        scanf("%s %f",stu_head->name,&stu_head->score);
        stu_head->next_stu=NULL;
        //将头节点地址赋给temp
        temp=stu_head;
        for(i=2; i<=n; i++){
            //创建一个新的节点
            current=(struct student *)malloc(sizeof(struct student));
            if(current==NULL){
                printf("Memory can not be allocated.");
            }else{
                //给新节点赋值
                printf("Input data for student %d: ",i);
                scanf("%s %f",current->name,&current->score);
                current->next_stu=NULL;
                //将上一节点的next指针指向新节点
                temp->next_stu=current;
                //temp指向新节点
                temp=current;
            }
        }
    }
}
//链表排序
void listSort(int n){
    struct student *temp=stu_head;
    struct student *current, *next;
    if(temp->next_stu==NULL || temp==NULL){
        return;
    }else{
        //冒泡排序
        for(int i=0; i<n-1; i++){
            temp=stu_head;
            for(int j=0; j<n-i-1; j++){
                current=temp;
                next=temp->next_stu;
                //交换数据域
                if(current->score<next->score){
                    float score_t=current->score;
                    char name_t[20];
                    current->score=next->score;
                    next->score=score_t;
                    strcpy(name_t,current->name);
                    strcpy(current->name,next->name);
                    strcpy(next->name,name_t);
                }
                temp=temp->next_stu;
            }
        }
    }
}
//打印链表
void displayList(){
    struct student *temp;
    if(stu_head==NULL){
        printf("List is empty.");
    }else{
        temp=stu_head;
        while (temp != NULL)
        {
            printf("name: %s score: %.1f\n",temp->name,temp->score);
            temp=temp->next_stu;
        }
    }
}
